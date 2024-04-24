#include "Degree.h"
void uizi::Degree::setDegree(Degree_ degree) {
	this->degree = degree;
}

uizi::Degree::Degree(enum Degree_ degree) {
	this->degree = degree;
}
std::string uizi::Degree::toString() {
	if (degree == DocentDegree) {
		return "Docent";
	}
	if (degree == ProfessorDegree) {
		return "Professor";
	}
	throw;
}