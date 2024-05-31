#include <iostream>
#include "Teacher.h"
#include "Date.h"

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
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
	Gender gender = Gender(NonBinary);
	Teacher teacher = Teacher(name, birth, post, degree, rank, gender);
	std::cout << teacher;
	return 0;
}
