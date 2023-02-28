#include <iostream>
using namespace std;


int area(int r);
int area(int l, int w);
int area(int a, float b);


string typeOf(int a );
string typeOf(string a);

int main() {

	int a = 10;
	int b = 50;
	string c = "test";
	string d = "I AM a string";

	cout << typeOf(a) << endl;
	cout << typeOf(b) << endl;
	cout << typeOf(c) << endl;
	cout << typeOf(d) << endl;

	cout << "------------------------------" << endl;


	cout << "Area of circle of radius 5: " << area(5) << endl;
	cout << "Area of rectangle 7 x 8: " << area(7, 8) << endl;
}

string typeOf(int a) {
	return "int";
}

string typeOf(string a) {
	return "string";
}




int area(int r) {
	int area = 3.14 * (r * r);
	return area;
}

int area(int l, int w) {
	int area = l * w;
	return area;

	//return l * w;
}