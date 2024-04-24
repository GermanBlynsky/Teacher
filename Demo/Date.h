#pragma once
#include <iostream>

namespace uizi {
	enum Month {January = 1, 
		February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};
	class Date
	{
		int date;
		Month month;
		int year;
	public:
		Date(int date, int month, int year);
		friend std::ifstream& operator>>(std::ifstream& is, Date date);
		friend std::ofstream& operator<<(std::ofstream& is, Date date);
	};
}
