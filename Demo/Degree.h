#pragma once
#include <iostream>
#include <string>
namespace uizi {
	enum Degree_{DocentDegree = 0, ProfessorDegree = 1};
	class Degree
	{
		/*
		*@brief ������� �������
		*/
		Degree_ degree;
	public:
		/*
		*@brief ����������� ������ Degree
		*/
		Degree(enum Degree_ degree);
		/*
		*@brief ����� ������, ��������������� ��������� ������ � ������
		*/
		std::string toString() const;
		/*
		*@brief ������ ������ Degree
		*/
		void setDegree(Degree_ degree);
		/*
		*@brief ���������� ��������� ������ ������
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
		*@brief ���������� ��������� ������ �����
		*/
		friend std::ostream& operator<<(std::ostream& os, Degree& degree){
			os << degree.toString();
			return os;
		}
		/*
		*@brief ���������� ��������� ���������
		*/
		friend bool operator==(const Degree& d1, const Degree& d2) {
			return d1.degree == d2.degree;
		}
		/*
		*@brief ����������� �� ���������
		*/
		Degree();
	};
}

