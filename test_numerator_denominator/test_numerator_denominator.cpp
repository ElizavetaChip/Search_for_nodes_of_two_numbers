#include "pch.h"
#include "CppUnitTest.h"
#include "..//Search_for_nodes_of_two_numbers/Search_for_nodes_of_two_numbers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testintpartoffraction
{
	TEST_CLASS(Testintpartoffraction)
	{
	public:

		TEST_METHOD(numerator_denominator_areEqual)
		{
			unsigned int number1 = 2;
			unsigned int number2 = 2;

			int exp_result = 1;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(numerator_is_zero)
		{
			unsigned int number1 = 0;
			unsigned int number2 = 1;

			int exp_result = 0;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(denominator_more_numerator)
		{
			unsigned int number1 = 1;
			unsigned int number2 = 2;

			int exp_result = 0;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(Denominator_is_one)
		{
			unsigned int number1 = 2;
			unsigned int number2 = 1;

			int exp_result = 2;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(Divided_entirely)
		{
			unsigned int number1 = 6;
			unsigned int number2 = 2;

			int exp_result = 3;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(Not_divided_entirely)
		{
			unsigned int number1 = 5;
			unsigned int number2 = 2;

			int exp_result = 2;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(Denominator_is_zero)
		{
			unsigned int number1 = 2;
			unsigned int number2 = 0;

			int exp_result = -1;

			int result = int_part_of_fraction(number1, number2);

			Assert::AreEqual(exp_result, result);
		}
	};
}

