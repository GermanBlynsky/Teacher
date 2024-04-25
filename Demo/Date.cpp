#include "Date.h"

namespace uizi {
	Date::Date(int date, int month, int year) {
		if (date <= 0 || date > 31 || month <= 0 || month > 12 || year < 0) {
			throw;
		}
		this->date = date;
		this->month = (enum Month)month;
		this->year = year;
	}

}
