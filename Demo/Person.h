#pragma once
#include <string>
#include <iostream>
#include "Date.h"

namespace uizi {
	using FullName = std::string;
	enum Gender { Male = 0, Female = 1, NonBinary = 3 };
	class Person
	{
		FullName name;
		Gender gender;
		Date birth;
	public:
		Person(Gender gender, FullName name, Date birth);
		std::string& toString();
		friend std::ifstream& operator>>(std::ifstream& is, Person person);
	};

}