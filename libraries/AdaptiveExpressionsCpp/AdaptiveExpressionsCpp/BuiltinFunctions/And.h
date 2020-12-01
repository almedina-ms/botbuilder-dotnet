#pragma once
#include "../Code/ExpressionEvaluator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class And : public ExpressionEvaluator
    {
    public:
        And();
        void ValidateExpression(Expression* expression);
        virtual ValueErrorTuple TryEvaluate(Expression* expression, void* state, Options* options) override;
    };
}