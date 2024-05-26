#include "CppUnitTest.h"
#include "..\Demo\Date.h"
#include "string"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DateTest
{
	TEST_CLASS(DateTest)
	{
	public:
		TEST_METHOD(operator_equal_equal)
		{
			int date = 1;
			int month = 2;
			int year = 3;
			uizi::Date a(date, month, year);
			uizi::Date b(date, month, year);
			Assert::IsTrue(a == b);
		}
		TEST_METHOD(operator_not_equal)
		{
			uizi::Date a(1, 1, 1);
			uizi::Date b(2, 2, 2);
			Assert::IsTrue(a != b);
		}
		TEST_METHOD(to_string)
		{
			uizi::Date a(1, 1, 1);
			std::string c = a.toString();
			std::string b = "1.1.1";
			Assert::IsTrue(c == b);
		}
	};
}