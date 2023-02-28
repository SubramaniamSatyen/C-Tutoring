#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
	string s;
	int num;

	cout << "Enter a number: ";

	cin >> num;	//23\n --> num = 23 , \n
	//string junk;
	//getline(cin, junk);
	//cin.ignore(100000, '\n');
	
	cout << "Enter a string: ";
	getline(cin, s);


	cout << "Number: " << num << endl << "String: " << s << endl;
	cout << "------------------------------------------------------" << endl;


	cout << fixed << setprecision(3) << 1.123456789 << endl;

	cout << "------------------------------------------------------" << endl;

	/*
	Q: Create a program that counts the occurances of " " in a input string...


	Intialize variables
	Store user string input

	for each index in string length
		if character at index is ' '
			count++

	print count
	*/



}