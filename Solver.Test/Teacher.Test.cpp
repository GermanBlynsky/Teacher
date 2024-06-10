#include "CppUnitTest.h"
#include "..\Demo\Teacher.h"
#include "..\Demo\Teacher.cpp"
#include "..\Demo\Rank.cpp"
#include "..\Demo\Post.cpp"
#include "..\Demo\Person.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TeacherTest
{
	TEST_CLASS(TeacherTest)
	{
	public:
		TEST_METHOD(EqualBuDate_23_12_1952_True)
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
		TEST_METHOD(EqualByDegree_DocentDegree_True)
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
		TEST_METHOD(EqualByPost_DocentPost_True)
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
		TEST_METHOD(EqualByRank_CandidatRank_True)
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
		TEST_METHOD(EqualByName_VasiyPupkin_True)
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
		TEST_METHOD(ToString_True) {
			using namespace uizi;
			setlocale(LC_ALL, "ru_RU.UTF-8");
			std::string name = "Вася Пупкин";
			Date birth = Date(23, 12, 1952);
			Post post = Post(DocentPost);
			Degree degree = Degree(DocentDegree);
			Rank rank = Rank(CandidatRank);
			Gender gender = Gender(Male);
			Teacher teacher = Teacher(name, birth, post, degree, rank, gender);
			std::string b = "Вася Пупкин Male 23.12.1952 Docent Docent Candidat";
			std::string a = teacher.toString();
			Assert::IsTrue(a == b);
		}
	};
}