#pragma once
#include <string>
#include <iostream>
#include "Date.h"

namespace uizi {
	using FullName = std::string;
	enum Gender { Male = 0, Female = 1, NonBinary = 3 };
	//using Date = std::string; Не понятно, как определить Date, ведь чтоб определить его грамотно надо писать целый класс Date
	class Person
	{
		FullName name;
		Gender gender;
		Date birth;
	public:
		Person(const Gender& gender, const FullName& name, const Date& birth);
		std::string toString() const;
		friend std::ostream& operator<<(std::ostream& os , const Person& person) {
			os << person.toString();
			return os;
		}
		friend std::istream& operator>>(std::istream& is, Person& person)
		{
			std::string name;
			int gender;
			Date birth;
			if (is >> name >> gender >> birth) {
				person.name = name;
				person.gender = static_cast<Gender>(gender);
				person.birth = birth;
			}

			return is;
		}
	};

}

