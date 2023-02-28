#include <iostream>
#include <string>
using namespace std;

int main() {


	string h = "Hello";
	string w = "World";
	string hw = h + " " + w;
	cout << hw << endl;
	cout << "------------------------------------------------------" << endl;





	string a = "String One";
	string b = a;
	cout << "String a: " << a << endl;
	cout << "String b: " << b << endl;
	cout << "------------------------------------------------------" << endl;



	cout << ((a.compare(b) == 0) ? "Match" : "Do Not Match") << endl;
	///*
	//* if ((a.compare(b) == 0)){
	//*	cout << "Match" << endl;
	//* }
	//* else {
	//*	cout << "Do Not Match << endl;
	//* }
	//*/




	string c = "Secret String";
	cout << ((c.compare(c) == 0) ? "Match" : "Do Not Match") << endl;





	cout << h[0] << h[1] << "llo World" << endl;
	cout << "------------------------------------------------------" << endl;
	
	
	//0123456789*123456789*123456789*
	//Hello World
	cout << hw.substr(6) << " " << hw.substr(6, 5) << endl;
	cout << "------------------------------------------------------" << endl;


	string test = "abcdef";
	cout << "Length of string: " << test.length() << endl; //Note can also use test.size();
	cout << "------------------------------------------------------" << endl;

	int cnt_vowels = 0;
	for (int i = 0; i < test.length(); i++) {

		if (test[i] == 'a' || test[i] == 'e' || test[i] == 'i' || test[i] == 'o' || test[i] == 'u' || test[i] == 'y') {
			cnt_vowels++;
		}
	}



	cout << "# of vowels: " << cnt_vowels << endl;
	cout << "------------------------------------------------------" << endl;



	cin >> a;

	bool hasA = false;

	for (int i = 0; i < a.length(); i += 1) {
		if (a[i] == 'a') {
			hasA = true;
		}
	}

	if (hasA == false) {
		cout << "False" << endl;
	}
	else {
		cout << "True" << endl;
	}


}