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
	std::string name2 = "Маша Непупкина";
	Date birth2 = Date(23, 12, 1952);
	Post post2 = Post(ProfessorPost);
	Degree degree2 = Degree(ProfessorDegree);
	Rank rank2 = Rank(DoctorRank);
	Gender gender2 = Gender(Female);
	Teacher teacher2 = Teacher(name2, birth2, post2, degree2, rank2, gender2);
	std::string a = teacher.toString();
	std::cout << a << "\n";
	if (teacher.equalByDate(teacher2)) {
		std::cout << " Даты рождения совпадают";
	}
	else {
		std::cout << "Даты рождения несовпадают";
	}
	return 0;
}
