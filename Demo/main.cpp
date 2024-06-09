#include <iostream>
#include <string>
#include "Teacher.h"

/**
* @brief Точка входа в программу
* @return 0 при успешном выполнении
*/
int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	using namespace uizi;
	std::string name = "Вася Пупкин";
	Date birth = Date(23, 12, 1952);
	Post post = Post(DocentPost);
	Degree degree = Degree(DocentDegree);
	Rank rank = Rank(CandidatRank);
	Gender gender = Gender(Male);
	Teacher teacher = Teacher(name, birth, post, degree, rank, gender);
	std::string c = teacher.toString();
	std::cout << c;
	return 0;
}
