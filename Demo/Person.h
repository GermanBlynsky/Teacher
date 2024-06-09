#pragma once
#include <iostream>
#include "Date.h"

namespace uizi {
	using FullName = std::string;
	/*
	*@brief �������
	*/
	enum Gender { Male = 0, Female = 1, NonBinary = 3 };
	class Person
	{
		/*
		*@brief ���
		*/
		FullName name;
		/*
		*@brief �������
		*/
		Gender gender;
		/*
		*@brief ���� ��������
		*/
		Date birth;
	public:
		/*
		*@brief ����������� ������ Person ����� ���� �������, ��� � ���� ��������
		*/
		Person(const Gender& gender, const FullName& name, const Date& birth);
		/*
		*@brief ����� ������, ����������������� � ������
		*/
		std::string toString() const;
		/*
		*@brief ���������� ��������� ������ �����
		*/
		friend std::ostream& operator<<(std::ostream& os , const Person& person) {
			os << person.toString();
			return os;
		}
		/*
		*@brief ���������� ��������� ������ ������
		*/
		friend std::istream& operator>>(std::istream& is, Person& person)
		{
			FullName name;
			int gender;
			Date birth;
			if (is >> name >> gender >> birth) {
				person = Person(static_cast<Gender>(gender), name, birth);
			}
			return is;
		}
		Date GetDate() const;
		Gender GetGender() const;
		FullName GetName() const;
	};

}

