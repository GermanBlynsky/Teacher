#pragma once
#include <iostream>

namespace uizi {
	enum Month {January = 1, 
		February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};
	class Date
	{
		/*
		*@brief ���� ��������
		*/
		int date;
		/*
		*@brief ����� ��������
		*/
		Month month;
		/*
		*@brief ��� ��������
		*/
		int year;
	public:
		/*
		*@brief ����������� ������ Date ����� ���� ���, ������ � ���� ��������
		*/
		Date(int date, int month, int year);
		/*
		*@brief ���������� ��������� ������ ������
		*/
		friend std::istream& operator>>(std::istream& is, Date& date) {
			int dateInt = 0;
			int  monthInt = 0;
			int yearInt = 0;
			is >> dateInt >> monthInt >> yearInt;
			if (dateInt <= 0 || dateInt > 31 || monthInt <= 0 || monthInt > 12 || yearInt < 0) {
				throw std::invalid_argument("wrong value date or month or year!");
			}
			date.date = dateInt;
			date.month = (Month)monthInt;
			date.year = yearInt;
			return is;
		}
		/*
		*@brief ���������� ��������� ������ �����
		*/
		friend std::ostream& operator<<(std::ostream& os, const Date& date) {
			os << date.toString();
			return os;
		}
		/*
		*@brief ����������� �� ���������
		*/
		Date();
		/*
		*@brief ����� ������ ��� �������������� ���������� ������ Date � ������
		*/
		std::string toString() const;
		/*
		*@brief ���������� ��������� ���������
		*/
		friend bool operator==(const Date& d1, const Date& d2) {
			return (d1.date == d2.date && d1.month == d2.month && d1.year == d2.year);
		}
		/*
		*@brief ���������� ��������� �����������
		*/
		friend bool operator!=(const Date& d1, const Date& d2) {
			return d1.date != d2.date || d1.month != d2.month || d1.year != d2.year;
		}
	};
}
