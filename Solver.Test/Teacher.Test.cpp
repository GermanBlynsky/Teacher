#include "CppUnitTest.h"
#include "..\Demo\Teacher.h"
#include "string"
#include "..\Demo\Date.h"
#include "..\Demo\Degree.h"
#include "..\Demo\Person.h"
#include "..\Demo\Post.h"
#include "..\Demo\Rank.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TeaceherTest
{
	TEST_CLASS(DateTest)
	{
	public:
		using FullName = std::string;
		TEST_METHOD(equal_by_date)
		{
			using namespace uizi;
			FullName name1 = "Вася Пупкин", name2 = "Вася Пупкин";
			Date birth1(23, 12, 1952), birth2(23, 12, 1952);
			Post post1(DocentPost), post2(DocentPost);
			Degree degree1(DocentDegree), degree2(DocentDegree);
			Rank rank1(CandidatRank), rank2(CandidatRank);
			Gender gender1(NonBinary), gender2(NonBinary);
			Teacher teacher1(name1, birth1, post1, degree1, rank1, gender1);
			Teacher teacher2(name2, birth2, post2, degree2, rank2, gender2);
			Assert::IsTrue(teacher1.equalByDate(teacher2));
		}
		TEST_METHOD(equal_by_degree)
		{
			using namespace uizi;
			FullName name1 = "Вася Пупкин", name2 = "Вася Пупкин";
			Date birth1(23, 12, 1952), birth2(23, 12, 1952);
			Post post1(DocentPost), post2(DocentPost);
			Degree degree1(DocentDegree), degree2(DocentDegree);
			Rank rank1(CandidatRank), rank2(CandidatRank);
			Gender gender1(NonBinary), gender2(NonBinary);
			Teacher teacher1(name1, birth1, post1, degree1, rank1, gender1);
			Teacher teacher2(name2, birth2, post2, degree2, rank2, gender2);
			Assert::IsTrue(teacher1.equalByDegree(teacher2));
		}
		TEST_METHOD(equal_by_post)
		{
			using namespace uizi;
			FullName name1 = "Вася Пупкин", name2 = "Вася Пупкин";
			Date birth1(23, 12, 1952), birth2(23, 12, 1952);
			Post post1(DocentPost), post2(DocentPost);
			Degree degree1(DocentDegree), degree2(DocentDegree);
			Rank rank1(CandidatRank), rank2(CandidatRank);
			Gender gender1(NonBinary), gender2(NonBinary);
			Teacher teacher1(name1, birth1, post1, degree1, rank1, gender1);
			Teacher teacher2(name2, birth2, post2, degree2, rank2, gender2);
			Assert::IsTrue(teacher1.equalByPost(teacher2));
		}
		TEST_METHOD(equal_by_rank)
		{
			using namespace uizi;
			FullName name1 = "Вася Пупкин", name2 = "Вася Пупкин";
			Date birth1(23, 12, 1952), birth2(23, 12, 1952);
			Post post1(DocentPost), post2(DocentPost);
			Degree degree1(DocentDegree), degree2(DocentDegree);
			Rank rank1(CandidatRank), rank2(CandidatRank);
			Gender gender1(NonBinary), gender2(NonBinary);
			Teacher teacher1(name1, birth1, post1, degree1, rank1, gender1);
			Teacher teacher2(name2, birth2, post2, degree2, rank2, gender2);
			Assert::IsTrue(teacher1.equalByRank(teacher2));
		}
		TEST_METHOD(equal_by_name)
		{
			using namespace uizi;
			FullName name1 = "Вася Пупкин", name2 = "Вася Пупкин";
			Date birth1(23, 12, 1952), birth2(23, 12, 1952);
			Post post1(DocentPost), post2(DocentPost);
			Degree degree1(DocentDegree), degree2(DocentDegree);
			Rank rank1(CandidatRank), rank2(CandidatRank);
			Gender gender1(NonBinary), gender2(NonBinary);
			Teacher teacher1(name1, birth1, post1, degree1, rank1, gender1);
			Teacher teacher2(name2, birth2, post2, degree2, rank2, gender2);
			Assert::IsTrue(teacher1.equalByName(teacher2));
		}
		TEST_METHOD(to_string) {
			using namespace uizi;
			FullName name = "Вася Пупкин";
			Date birth(23, 12, 1952);
			Post post(DocentPost);
			Degree degree(DocentDegree);
			Rank rank(CandidatRank);
			Gender gender(NonBinary);
			Teacher teacher1(name, birth, post, degree, rank, gender);

		}
	};
}