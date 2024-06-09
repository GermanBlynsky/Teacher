#pragma once
#include <iostream>
#include <string>
namespace uizi {
	enum Degree_{DocentDegree = 0, ProfessorDegree = 1};
	class Degree
	{
		/*
		*@brief Научная степень
		*/
		Degree_ degree;
	public:
		/*
		*@brief Конструктор класса Degree
		*/
		Degree(enum Degree_ degree);
		/*
		*@brief метод класса, преобразовающий экземпляр класса в строку
		*/
		std::string toString() const;
		/*
		*@brief Сеттер класса Degree
		*/
		void setDegree(Degree_ degree);
		/*
		*@brief перегрузка оператора сдвига вправо
		*/
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
		/*
		*@brief перегрузка оператора сдвига влево
		*/
		friend std::ostream& operator<<(std::ostream& os, Degree& degree){
			os << degree.toString();
			return os;
		}
		/*
		*@brief перегрузка оператора равенства
		*/
		friend bool operator==(const Degree& d1, const Degree& d2) {
			return d1.degree == d2.degree;
		}
		/*
		*@brief Конструктор по умолчанию
		*/
		Degree();
	};
}

