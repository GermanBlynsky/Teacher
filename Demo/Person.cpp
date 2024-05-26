#include "Person.h"
#include "Date.h"
#include "Degree.h"
#include "sstream"

uizi::Person::Person(const Gender& gender, const FullName& name, const Date& birth){
	this->gender = gender;
	this->name = name;
	this->birth = birth;
}

std::string uizi::Person::toString() const
{
	std::stringstream a{};
	if (gender == Male) {
		a << name << "Male" << birth;
	}
	if (gender == Female) {
		a << name << "Female" << birth;
	}
	if (gender == NonBinary) {
		a << name << "NonBinary" << birth;
	}
	return a.str();
}