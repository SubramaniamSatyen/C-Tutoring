#include <iostream>
using namespace std;

class Date {
public:
	//Constructors
	Date();
	Date(int d, int m, int y, string n);

	//Getter Functions
	int getMonth();
	int getDay();
	int getYear();
	string getName();

	//Setter Functions
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);

	//Other Functions
	void printDate();
	bool isChristmas();

private:
	string name;
	int month;
	int day;
	int year;
};


bool Date::isChristmas() {
	//if (month == 12 && day == 25) {
	//	return true;
	//}
	//return false;

	return (month == 12 && day == 25);
}

void Date::printDate() {
	cout << month << "/" << day << "/" << year << endl;
}


int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int Date::getYear() {
	return year;
}

string Date::getName() {
	return name;
}

void Date::setMonth(int m) {
	if (m > 0 && m < 13) {
		month = m;
	}
	else {
		month = 1;
	}
}

void Date::setDay(int d) {
	if (d > 0 && d < 32) {
		day = d;
	}
	else {
		day = 1;
	}
}

void Date::setYear(int y) {
	if (y > 0 && y <= 9999) {
		year = y;
	}
	else {
		year = 2022;
	}
}



Date::Date() {
	month = 1;
	day = 1;
	year = 2000;
	name = "My Date";
}


Date::Date(int d, int m, int y, string n) {
	if (m > 0 && m < 13) {
		month = m;
	}
	else {
		month = 1;
	}

	if (d > 0 && d < 32) {
		day = d;
	}
	else {
		day = 1;
	}

	if (y > 0 && y <= 9999) {
		year = y;
	}
	else {
		year = 2022;
	}

	//month = m;
	//day = d;
	//year = y;
	name = n;
}



int main() {
	Date newYearsDay = Date(1, 1, 2023, "New Years Day");
	//newYearsDay.day = 1;
	//newYearsDay.month = 1;
	//newYearsDay.year = 2023;

	//cout << newYearsDay.getMonth() << "/" << newYearsDay.getDay() << "/" << newYearsDay.getYear() << endl;
	cout << newYearsDay.isChristmas() << endl;
	newYearsDay.printDate();

	cout << "-------------------------------------------" << endl;

	Date Christmas;
	

	Christmas.setDay(25);
	Christmas.setMonth(12);
	Christmas.setYear(2022);

	//cout << Christmas.getMonth() << "/" << Christmas.getDay() << "/" << Christmas.getYear() << endl;
	Christmas.printDate();
	cout << Christmas.isChristmas() << endl;

	cout << "-------------------------------------------" << endl;



	Date my_date = Date(-99, -100, 0, "Test");
	
	//At this point my_date == 1/1/2022
	cout << my_date.getMonth() << "/" << my_date.getDay() << "/" << my_date.getYear() << endl;


	my_date.setYear(- 1000);
	my_date.setMonth(-9090);
	my_date.setDay(-12312);

	cout << my_date.getMonth() << "/" << my_date.getDay() << "/" << my_date.getYear() << endl;






	cout << "-------------------------------------------" << endl;

	Date date2(-99, -100, 0, "Test");

	//cout << date2.getMonth() << "/" << date2.day << "/" << date2.year << endl;

	cout << "-------------------------------------------" << endl;

	Date date3;

	//cout << date3.getMonth() << "/" << date3.day << "/" << date3.year << endl;

	cout << "-------------------------------------------" << endl;




	string str = "Hello World";
	cout << str.length() << endl;

}

