#pragma once
#include "ExpressionEvaluatorForSequenceOperator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class Subtract : public ExpressionEvaluatorForSequenceOperator
    {
    public:
        Subtract();
        static std::any EvalSubtract(std::any a, std::any b);
        void ValidateExpression(Expression* expression);

    private:
        virtual ValueErrorTuple EvaluateOperator(std::vector<std::any> args) override;

    };
}