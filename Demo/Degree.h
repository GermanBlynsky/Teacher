#pragma once
#include <iostream>
#include <string>
namespace uizi {
	enum Degree_{DocentDegree = 0, ProfessorDegree = 1};
	class Degree
	{
		Degree_ degree;
	public:
		Degree(enum Degree_ degree);
		std::string toString() const;
		void setDegree(Degree_ degree);
		friend std::istream& operator>>(std::istream& is, Degree& degree) {
			std::string degreeStr;
			is >> degreeStr;
			if (degreeStr == "Docent") {
				degree.setDegree(DocentDegree);
				return is;
			}
			if (degreeStr == "Professor") {
				degree.setDegree(ProfessorDegree);
				return is;
			}
			throw std::invalid_argument("wrong value degree!");
		}
		Degree();
	};
}

