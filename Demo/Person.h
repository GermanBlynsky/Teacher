#pragma once
#include <iostream>
#include "Date.h"

namespace uizi {
	using FullName = std::string;
	/*
	*@brief Гендеры
	*/
	enum Gender { Male = 0, Female = 1, NonBinary = 3 };
	class Person
	{
		/*
		*@brief Имя
		*/
		FullName name;
		/*
		*@brief Гендеры
		*/
		Gender gender;
		/*
		*@brief Дата рождения
		*/
		Date birth;
	public:
		/*
		*@brief Конструктор класса Person через ввод гендера, имя и даты рождения
		*/
		Person(const Gender& gender, const FullName& name, const Date& birth);
		/*
		*@brief метод класса, преобразовывающий в строку
		*/
		std::string toString() const;
		/*
		*@brief Перегрузка оператора сдвига влево
		*/
		friend std::ostream& operator<<(std::ostream& os , const Person& person) {
			os << person.toString();
			return os;
		}
		/*
		*@brief Перегрузка оператора сдвига вправо
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

