#include "Ceiling.h"
#include "../Code/ExpressionType.h"
#include "../Code/FunctionUtils.h"

#include <limits>
#include <any>
#include <cstdlib>
#include <cmath>
#include <math.h>

AdaptiveExpressions_BuiltinFunctions::Ceiling::Ceiling() :
    ExpressionEvaluator(ExpressionType::Ceiling, ReturnType::Number)
{
}

ValueErrorTuple AdaptiveExpressions_BuiltinFunctions::Ceiling::TryEvaluate(Expression* expression, void* state, Options* options)
{
    std::any result;

    ValueErrorTuple childResult = expression->getChildAt(0)->TryEvaluate(state, options);
    if (childResult.second.empty())
    {
        bool castSuccess;
        result = ceil(FunctionUtils::castToType<double>(childResult.first, castSuccess));
    }

    return ValueErrorTuple(result, childResult.second);
}

void AdaptiveExpressions_BuiltinFunctions::Ceiling::ValidateExpression(Expression* expression)
{
    FunctionUtils::ValidateArityAndAnyType(expression, 1, 1, ReturnType::Number);
}