#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1.4/8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My84
{
	TEST_CLASS(My84)
	{
	public:
		
		TEST_METHOD(TestMethod1)
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
