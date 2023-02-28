#include "Files_Date.h"
#include <iostream>
using namespace std;

void Date::printDate() {
	std::cout << m_month << "/" << m_day << "/" << m_year << std::endl;
}

bool Date::isChristmas() {
	//return (m_month == 12 && m_day == 25);

	if (m_month == 12 && m_day == 25) {
		return true;
	}
	return false;
}

Date::Date(int month, int day, int year) {
	if (month > 0 && month < 13) {
		m_month = month;
	}
	else {
		m_month = 1;
	}

	if (day > 0 && day < 32) {
		m_day = day;
	}
	else {
		m_day = 1;
	}

	if (year > 0 && year <= 9999) {
		m_year = year;
	}
	else {
		m_year = 2022;
	}
}