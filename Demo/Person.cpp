#include "Person.h"
#include "Date.h"
#include "Degree.h"

uizi::Person::Person(const Gender& gender, const FullName& name, const Date& birth){
	this->gender = gender;
	this->name = name;
	this->birth = birth;
}

std::string uizi::Person::toString() const
{
	if (gender == Male) {
		return name + "Male" + birth.toString();
	}
	if (gender == Female) {
		return name + "Female" + birth.toString();
	}
	if (gender == NonBinary) {
		return name + "NonBinary" + birth.toString();
	}
	throw;
}

