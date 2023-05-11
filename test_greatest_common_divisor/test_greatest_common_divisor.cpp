#include "pch.h"
#include "CppUnitTest.h"
#include "..//Search_for_nodes_of_two_numbers/Search_for_nodes_of_two_numbers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testgreatestcommondivisor
{
	TEST_CLASS(Testgreatestcommondivisor)
	{
	public:

		TEST_METHOD(SimpleTest)
		{
			unsigned int number1 = 6;
			unsigned int number2 = 9;

			int exp_result = 3;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(IdenticalNumbers)
		{
			unsigned int number1 = 6;
			unsigned int number2 = 6;

			int exp_result = 6;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(BothNumbersSimple)
		{
			unsigned int number1 = 5;
			unsigned int number2 = 7;

			int exp_result = 1;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(OneOfNumbersSimple)
		{
			unsigned int number1 = 6;
			unsigned int number2 = 7;

			int exp_result = 1;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(OneOfNumbersMinimal)
		{
			unsigned int number1 = 6;
			unsigned int number2 = 1;

			int exp_result = 1;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(OneNumberIsDividedByAnother)
		{
			unsigned int number1 = 6;
			unsigned int number2 = 3;

			int exp_result = 3;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(OneOfNumbersIs0)
		{
			unsigned int number1 = 0;
			unsigned int number2 = 4;

			int exp_result = 0;

			int result = greatest_common_divisor(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

	};
}
