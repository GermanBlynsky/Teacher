#include "Person.h"

std::ifstream& uizi::operator>>(std::ifstream& is, Person person)
{
	
}

uizi::Person::Person(Gender gender, FullName name, Date birth)
{
	this->gender = gender;
	this->name = name;
	this->birth = birth;
}
