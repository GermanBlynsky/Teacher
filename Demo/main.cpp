#include <iostream>
#include <string>
#include "Teacher.h"

/**
* @brief –¢–Њ—З–Ї–∞ –≤—Е–Њ–і–∞ –≤ –њ—А–Њ–≥—А–∞–Љ–Љ—Г
* @return 0 –≤ —Б–ї—Г—З–∞–µ —Г—Б–њ–µ—Е–∞
*/
int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	using namespace uizi;
	std::string name = "–Т–∞—Б—П –Я—Г–њ–Ї–Є–љ";
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
