#pragma once
#include "ExpressionEvaluatorForSequenceOperator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class Add : public ExpressionEvaluatorForSequenceOperator
    {
    public:
        Add();
        static std::any EvalAdd(std::any a, std::any b);
        void ValidateExpression(Expression* expression);

    private:
        virtual ValueErrorTuple EvaluateOperator(std::vector<std::any> args) override;

    };
}