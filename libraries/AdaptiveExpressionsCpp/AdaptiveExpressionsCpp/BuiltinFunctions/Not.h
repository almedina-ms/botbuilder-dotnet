#pragma once
#include "../Code/ExpressionEvaluator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class Not : public ExpressionEvaluator
    {
    public:
        Not();
        void ValidateExpression(Expression* expression);
        virtual ValueErrorTuple TryEvaluate(Expression* expression, void* state, Options* options) override;
    };
}