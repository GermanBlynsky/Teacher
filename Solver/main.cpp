#include <iostream>
#include <string>
#include "..\Demo\Teacher.h"

/**
* @brief ����� ����� � ���������
* @return 0 � ������ ������
*/
int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	using namespace uizi;
	std::string name = "���� ������";
	Date birth = Date(23, 12, 1952);
	Post post = Post(DocentPost);
	Degree degree = Degree(DocentDegree);
	Rank rank = Rank(CandidatRank);
	Gender gender = Gender(NonBinary);
	Teacher teacher = Teacher(name, birth, post, degree, rank, gender);
	std::string c = teacher.toString();
	std::cout << c;
	std::cout << "11111";
	return 0;
}
