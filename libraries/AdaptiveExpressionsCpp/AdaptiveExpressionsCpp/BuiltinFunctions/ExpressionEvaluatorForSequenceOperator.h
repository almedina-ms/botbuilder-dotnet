#pragma once
#include "../Code/ExpressionEvaluator.h"

namespace AdaptiveExpressions_BuiltinFunctions
{
    class ExpressionEvaluatorForSequenceOperator : public ExpressionEvaluator
    {
    public:
        ExpressionEvaluatorForSequenceOperator(std::string type, ReturnType returnType) : ExpressionEvaluator(type, returnType) {}

        virtual ValueErrorTuple TryEvaluate(Expression* expression, void* state, Options* options) override;

    protected:

        ValueErrorTuple ApplyWithError(Expression* expression, void* state, Options* options);
        ValueErrorTuple ApplySequenceWithError(std::vector<std::any> args, void* verify);
        virtual ValueErrorTuple EvaluateOperator(std::vector<std::any> args) = 0;

    };
}