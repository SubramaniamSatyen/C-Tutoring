#include <iostream>
#include <string>
using namespace std;

//int main() {
//	int a, b, c, d, e;
//
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cin >> d;
//	cin >> e;
//
//	cout << a << b << c << d << e << endl;
//
//
//}

/*
int main() {

	string output = "";

	string input;
	cout << "Enter Input: ";
	getline(cin, input);


	for (int i = 0; i < input.length(); i++) {
		char current = input[i];

		if (current >= 97 && current <= 122) {
			output += current;
		}

		if (current >= 65 && current <= 90) {
			output += current;
		}
	}

	cout << "Output: " << output << endl;

}

*/


int main() {

	string output = "";

	string input;
	cout << "Enter Input: ";
	getline(cin, input);

	bool seenLower = false;

	for (int i = 0; i < input.length(); i++) {
		char current = input[i];


		if (current >= 97 && current <= 122 && (seenLower == false)) {
			cout << "False" << endl;
			seenLower = true;
			break;
		}
	}


	if (seenLower == false) {
		cout << "True" << endl;
	}


}