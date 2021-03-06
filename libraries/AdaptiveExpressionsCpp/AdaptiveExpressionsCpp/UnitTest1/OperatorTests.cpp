#include "pch.h"
#include "CppUnitTest.h"

#include "../Code/pch.h"
#include "ExpressionParser.h"
#include "FunctionUtils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OperatorTests
{
    TEST_CLASS(OperatorTests)
    {
    public:

        ValueErrorTuple ParseAndEvaluate(std::string expression)
        {
            auto parsed = Expression::Parse(expression);
            return parsed->TryEvaluate(nullptr);
        }

        void MathTest(std::string expression, double expectedValue)
        {
            ValueErrorTuple valueAndError = ParseAndEvaluate(expression);

            bool castSuccess{};
            int intResult = FunctionUtils::castToType<int>(valueAndError.first, castSuccess);
            if (castSuccess)
            {
                Assert::AreEqual(expectedValue, (double) intResult);
            }
            else
            {
                Assert::AreEqual(expectedValue, FunctionUtils::castToType<double>(valueAndError.first, castSuccess));

            }

            std::cout << "Error " << valueAndError.second << std::endl;
        }

        void LogicTest(std::string expression, bool expectedValue)
        {
            ValueErrorTuple valueAndError = ParseAndEvaluate(expression);

            bool cast{};
            Assert::AreEqual(expectedValue, FunctionUtils::castToType<bool>(valueAndError.first, cast));

            std::cout << "Error " << valueAndError.second << std::endl;
        }

        TEST_METHOD(ConstantNumberTest)
        {
            MathTest("5", 5);
            MathTest("5.3", 5.3);
        }

        TEST_METHOD(AddTest)
        {
            MathTest("1 + 2", 3);
            MathTest("1 + 2 + 3", 6);
            MathTest("1.2 + 3.6", 4.8);
            MathTest("add(1, 2)", 3);
            MathTest("add(1, 2, 3)", 6);
            MathTest("add(1.2, 3.6)", 4.8);
        }

        TEST_METHOD(SubtractTest)
        {
            MathTest("5 - 3", 2);
            MathTest("5 - 3 - 1", 1);
            MathTest("5.5 - 3.2", 2.3);
            MathTest("subtract(20, 4)", 16);
            MathTest("subtract(20, 4, 1)", 15);
            MathTest("subtract(5.5, 3.2", 2.3);
        }

        TEST_METHOD(CeilingTest)
        {
            MathTest("Ceiling(2.3)", 3);
        }

        TEST_METHOD(FloorTest)
        {
            MathTest("Floor(2.3)", 2);
        }

        TEST_METHOD(ConstantBooleanTest)
        {
            LogicTest("true", true);
            LogicTest("false", false);
        }

        TEST_METHOD(AndTest)
        {
            LogicTest("and(true, true)", true);
            LogicTest("and(true, false)", false);
            LogicTest("and(false, false)", false);

            LogicTest("true && true)", true);
            LogicTest("true && false)", false);
            LogicTest("false && false)", false);
        }

        TEST_METHOD(OrTest)
        {
            LogicTest("or(true, true)", true);
            LogicTest("or(true, false)", true);
            LogicTest("or(false, false)", false);

            LogicTest("true || true)", true);
            LogicTest("true || false)", true);
            LogicTest("false || false)", false);
        }

        TEST_METHOD(NotTest)
        {
            LogicTest("not(true)", false);
            LogicTest("not(false)", true);

            LogicTest("!true", false);
            LogicTest("!false", true);
        }
    };
}
