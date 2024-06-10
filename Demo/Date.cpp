#include "Date.h"
#include <string>
#include <sstream>

namespace uizi {
	Date::Date(int date, int month, int year) {
		if (date <= 0 || date > 31 || month <= 0 || month > 12 || year < 0) {
			throw std::invalid_argument("wrong value date or month or year!");
		}
		this->date = date;
		this->month = (enum Month)month;
		this->year = year;
	}
	Date::Date() {
		this->date = 1;
		this->month = January;
		this->year = 1;
	}
	std::string Date::toString() const {
		std::stringstream a{};
		a << date << "." << month << "." << year;
		return a.str();
	}

}
