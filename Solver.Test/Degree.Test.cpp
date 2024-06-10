#include "CppUnitTest.h"
#include "..\Demo\Degree.h"
#include "..\Demo\Degree.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DegreeTest
{
	TEST_CLASS(DegreeTest)
	{
	public:
		TEST_METHOD(OperatorEqualEequal_DocentDegree_True)
		{
			using namespace uizi;
			Degree degree1 = Degree(DocentDegree);
			Degree degree2 = Degree(DocentDegree);
			Assert::IsTrue(degree1 == degree2);
		}
		TEST_METHOD(ToString_DocentDegree_True)
		{
			using namespace uizi;
			Degree degree1 = Degree(DocentDegree);
			Degree degree2 = Degree(DocentDegree);
			Assert::IsTrue(degree1.toString() == degree2.toString());
		}
	};
}