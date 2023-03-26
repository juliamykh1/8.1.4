#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS

#include "CppUnitTest.h"
#include "../yulia-lab-17/main-with-string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test2
{
	TEST_CLASS(test2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			string str = "abc++c-b===";

			const int numberOfPluses = countAppearences(&str, "+");
			const int numberOfMinuses = countAppearences(&str, "-");
			const int numberOfEquels = countAppearences(&str, "=");

			Assert::AreEqual(numberOfPluses, 2);
			Assert::AreEqual(numberOfMinuses, 1);
			Assert::AreEqual(numberOfEquels, 3);

			string* replacedString = replace(&str, "++", "***");

			string correctString = "abc***c-b===";

			Assert::AreEqual(*replacedString, correctString);
		}
	};
}
