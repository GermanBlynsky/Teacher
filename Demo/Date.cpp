#include "Date.h"
#include <string>

namespace uizi {
	Date::Date(int date, int month, int year) {
		if (date <= 0 || date > 31 || month <= 0 || month > 12 || year < 0) {
			throw;
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
		return std::to_string(date) + "." + std::to_string(month) + "." + std::to_string(year);
	}
}
