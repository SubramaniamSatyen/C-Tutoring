#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	//Constructor(s)
	Date(int month, int day, int year);

	//Getters
	int getMonth();
	int getDay();
	int getYear();

	//Setters
	void setMonth(int month);
	void setYear(int year);
	void setDay(int day);

	//Other Functions
	void printDate();
	bool isChristmas();
private:
	//Member variables
	int m_month;
	int m_day;
	int m_year;
};


class Person {
public:
	Person(int d, int m, int y, string n);
	Date getBirthday();
private:
	Date m_birthday;
	string m_name;
};

#pragma region Date_Implementation
int Date::getMonth() {
	return m_month;
}

int Date::getDay() {
	return m_day;
}

int Date::getYear() {
	return m_year;
}

void Date::setDay(int day) {
	if (day > 0 && day < 32) {
		m_day = day;
	}
}


void Date::setMonth(int month) {
	if (month > 0 && month < 13) {
		m_month = month;
	}
}

void Date::setYear(int year) {
	if (year > 0) {
		m_year = year;
	}
}

void Date::printDate() {
	cout << m_month << "/" << m_day << "/" << m_year << endl;
}

bool Date::isChristmas() {
	//return (m_month == 12 && m_day == 25);

	if (m_month == 12 && m_day == 25) {
		return true;
	}
	return false;
}

Date::Date(int month, int day, int year) {
	setMonth(month);
	setDay(day);
	setYear(year);
	/*if (month > 0 && month < 13) {
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
	}*/
}

#pragma endregion

#pragma region Person

Person::Person(int d, int m, int y, string n) : m_birthday(m, d, y), m_name(n) {
	//m_name = n;
	//m_birthday = Date(m, d, y);
}


Date Person::getBirthday() {
	return m_birthday;
}
#pragma endregion


int main() {
	Person myself(10, 10, 2010, "test");

	Date mydate(1, 1, 2021);
}