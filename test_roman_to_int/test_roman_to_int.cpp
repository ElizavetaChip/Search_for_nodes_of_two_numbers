#include "pch.h"
#include "CppUnitTest.h"
#include "..//Search_for_nodes_of_two_numbers/Search_for_nodes_of_two_numbers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testromantoint
{
	TEST_CLASS(Testromantoint)
	{
	public:
		TEST_METHOD(SimpleTest)
		{
			char* roman_number = "V";

			int exp_result = 5;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(MinimumValueOfTheNumber)
		{
			char* roman_number = "I";

			int exp_result = 1;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(MaximumValueOfTheNumber)
		{
			char* roman_number = "MMM";

			int exp_result = 3000;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(IdenticalLetters)
		{
			char* roman_number = "II";

			int exp_result = 2;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(NextDigitIsBigger)
		{
			char* roman_number = "IV";

			int exp_result = 4;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(NextDigitIsSmaller)
		{
			char* roman_number = "VI";

			int exp_result = 6;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(MaximumNumberLength)
		{
			char* roman_number = "MMDCCCLXXXIX";

			int exp_result = 2889;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

		TEST_METHOD(InvalidData)
		{
			char* roman_number = "S";

			int exp_result = -1;

			int result = roman_to_int(roman_number);

			Assert::AreEqual(exp_result, result);
		}

	};
}

