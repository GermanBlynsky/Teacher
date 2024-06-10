#include "CppUnitTest.h"
#include "..\Demo\Date.h"
#include "..\Demo\Date.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DateTest
{
	TEST_CLASS(DateTest)
	{
	public:
		TEST_METHOD(OperatorEqualEequal_123_123_True)
		{
			setlocale(LC_ALL, "ru_RU.UTF-8");
			int date = 1;
			int month = 2;
			int year = 3;
			uizi::Date a(date, month, year);
			uizi::Date b(date, month, year);
			Assert::IsTrue(a == b);
		}
		TEST_METHOD(OperatorNotEqual_111_222_True)
		{
			setlocale(LC_ALL, "ru_RU.UTF-8");
			uizi::Date a(1, 1, 1);
			uizi::Date b(2, 2, 2);
			Assert::IsTrue(a != b);
		}
		TEST_METHOD(ToString_23_12_1987_True)
		{
			setlocale(LC_ALL, "ru_RU.UTF-8");
			uizi::Date a(23, 12, 1987);
			std::string c = a.toString();
			std::string b = "23.12.1987";
			Assert::IsTrue(c == b);
		}
	};
}