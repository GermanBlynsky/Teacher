#include "CppUnitTest.h"
#include "..\Demo\Degree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DateTest
{
	TEST_CLASS(DegreeTest)
	{
	public:
		TEST_METHOD(operator_equal_equal)
		{
			using namespace uizi;
			Degree degree1 = Degree(DocentDegree);
			Degree degree2 = Degree(DocentDegree);
			Assert::IsTrue(degree1 == degree2);
		}
		TEST_METHOD(to_string)
		{
			using namespace uizi;
			Degree degree1 = Degree(DocentDegree);
			Degree degree2 = Degree(DocentDegree);
			Assert::IsTrue(degree1.toString() == degree2.toString());
		}
	};
}