#pragma once
#include "..\Code\ExpressionEvaluator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class Ceiling : public ExpressionEvaluator
    {
    public:
        Ceiling();
        void ValidateExpression(Expression* expression);
        virtual ValueErrorTuple TryEvaluate(Expression* expression, void* state, Options* options) override;

    };
}