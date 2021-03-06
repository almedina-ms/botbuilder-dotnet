// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#define _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS
#pragma warning (disable: 4996) // codecvt in C++17

#include "../antlr4-runtime/antlr4-runtime.h"
#include <string>
#include <map>
#include <any>
#include <functional>
#include <algorithm>
#include "../Code/ReturnType.h"
#include "../Code/Options.h"

class Expression;
class Constant;
class ExpressionEvaluator;
class FunctionTable;

typedef ExpressionEvaluator* (*EvaluatorLookup)(std::string type);
typedef std::pair<std::string, std::string> (*EvaluateExpressionFunction)(Expression*, void*, void*);
typedef void (*EvaluateExpressionValidatorFunction)(Expression*);

typedef std::pair<std::any, std::string> ValueErrorTuple;
typedef std::function<ValueErrorTuple (Expression*, void*, Options*)> EvaluateExpressionLambda;

#include "../Code/Expression.h"
#include "../Code/ExpressionEvaluator.h"
#include "../Code/ExpressionParser.h"

