#include <iostream>
using namespace std;

struct Date {
	string name;
	int month;
	int day;
	int year;
};



int main() {


	Date newYearsDay;
	newYearsDay.day = 1;
	newYearsDay.month = 1;
	newYearsDay.year = 2023;

	cout << newYearsDay.month << "/" << newYearsDay.day << "/" << newYearsDay.year << endl;

	cout << "-------------------------------------------" << endl;


	Date Christmas = { "Christmas", 12, 25, 2022 };
	cout << Christmas.month << "/" << Christmas.day << "/" << Christmas.year << endl;

	Date test = { "NewYears", 1, 1 };
}