#include <iostream>
using namespace std;
#include "Files_Date.h"
#include "Files_Date.h"



int main() {
	//Explicit constructor call (since we are expliciltly writing the data type)
	Date Christmas = Date(12, 25, 2022);

	//Implicit constructor call (calling the custom constructor, but assigning implicitly)
	Date newYears(1, 1, 2023);

	//Compiler error
	//Date test = Date();

	Date invalidDate = Date(1000, 1000, -120312);

	Christmas.printDate();
	newYears.printDate();
	invalidDate.printDate();

	cout << "-------------------------------------" << endl;

	cout << Christmas.isChristmas() << endl;

}