//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//	//Constructor(s)
//	Date(int month, int day, int year);
//
//	//Getters
//	int getMonth() const;
//	int getDay() const;
//	int getYear() const;
//
//	//Setters
//	void setMonth(int month);
//	void setYear(int year);
//	void setDay(int day);
//
//	//Other Functions
//	void printDate() const;
//	bool isChristmas() const;
//private:
//	//Member variables
//	int m_month;
//	int m_day;
//	int m_year;
//};
//
//int Date::getMonth() const {
//	//return (*this).m_month;
//	return m_month;
//}
//
//int Date::getDay() const {
//	return (*this).m_day;
//}
//
//int Date::getYear() const {
//	return (*this).m_year;
//}
//
//void Date::setDay(int day) {
//	if (day > 0 && day < 32) {
//		this->m_day = day;
//	}
//}
//
//
//void Date::setMonth(int month) {
//	if (month > 0 && month < 13) {
//		this->m_month = month;
//	}
//}
//
//void Date::setYear(int year) {
//	if (year > 0) {
//		this->m_year = year;
//	}
//}
//
//void Date::printDate() const {
//	cout << this->m_month << "/" << this->m_day << "/" << this->m_year << endl;
//}
//
//bool Date::isChristmas() const {
//	//return (m_month == 12 && m_day == 25);
//
//	if (this->m_month == 12 && this->m_day == 25) {
//		return true;
//	}
//	return false;
//}
//
//Date::Date(int month, int day, int year) {
//	setMonth(month);
//	setDay(day);
//	setYear(year);
//	/*if (month > 0 && month < 13) {
//		m_month = month;
//	}
//	else {
//		m_month = 1;
//	}
//
//	if (day > 0 && day < 32) {
//		m_day = day;
//	}
//	else {
//		m_day = 1;
//	}
//
//	if (year > 0 && year <= 9999) {
//		m_year = year;
//	}
//	else {
//		m_year = 2022;
//	}*/
//}
//
//int main() {
//	//Explicit constructor call (since we are expliciltly writing the data type)
//	Date Christmas = Date(12, 25, 2022);
//	
//	//Implicit constructor call (calling the custom constructor, but assigning implicitly)
//	Date newYears(1, 1, 2023);
//
//	//Compiler error
//	//Date test = Date();
//
//	Date invalidDate = Date(1000, 1000, -120312);
//
//	Christmas.printDate();
//	newYears.printDate();
//	invalidDate.printDate();
//
//	cout << "-------------------------------------" << endl;
//
//	cout << Christmas.isChristmas() << endl;
//
//}