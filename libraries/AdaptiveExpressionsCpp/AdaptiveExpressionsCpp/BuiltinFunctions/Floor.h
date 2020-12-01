#pragma once
#include "..\Code\ExpressionEvaluator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class Floor : public ExpressionEvaluator
    {
    public:
        Floor();
        void ValidateExpression(Expression* expression);
        virtual ValueErrorTuple TryEvaluate(Expression* expression, void* state, Options* options) override;

    };
}