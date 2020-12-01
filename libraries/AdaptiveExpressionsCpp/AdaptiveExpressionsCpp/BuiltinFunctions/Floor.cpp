#include "Floor.h"
#include "../Code/ExpressionType.h"
#include "../Code/FunctionUtils.h"

#include <limits>
#include <any>
#include <cstdlib>
#include <cmath>
#include <math.h>

AdaptiveExpressions_BuiltinFunctions::Floor::Floor() :
    ExpressionEvaluator(ExpressionType::Floor, ReturnType::Number)
{
}

ValueErrorTuple AdaptiveExpressions_BuiltinFunctions::Floor::TryEvaluate(Expression* expression, void* state, Options* options)
{
    std::any result;

    ValueErrorTuple childResult = expression->getChildAt(0)->TryEvaluate(state, options);
    if (childResult.second.empty())
    {
        bool castSuccess;
        result = floor(FunctionUtils::castToType<double>(childResult.first, castSuccess));
    }

    return ValueErrorTuple(result, childResult.second);
}

void AdaptiveExpressions_BuiltinFunctions::Floor::ValidateExpression(Expression* expression)
{
    FunctionUtils::ValidateArityAndAnyType(expression, 1, 1, ReturnType::Number);
}