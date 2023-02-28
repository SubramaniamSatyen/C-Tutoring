#include <iostream>
using namespace std;


void printNumbers(int n) {
	for (int i = n; i > 0; i--) {
		cout << i << endl;
	}
}


void printNumbersRecursive(int n) {
	if (n <= 0) {
		return;
	}

	cout << n << endl;
	printNumbersRecursive(n - 1)
}

//void printNumbersRecursive(int num) {
	//If base case, do something specific
	//Otherwise...
		//Do something for current case
		//call function again with updated parameter
//}

void printAscending(int n, int curr) {
	if (curr >= n) {
		return;
	}
	cout << curr << endl;
	printAscending(n, curr + 1);
}



void printAscending(int n) {
	printAscending(n, 0);
}

void printA(int n) {
	for (int i = 0; i < n; i++) {
		cout << i << endl;
	}
}



int main() {
	printNumbers(10);
	cout << "------------------------------------------------------" << endl;

	printNumbersRecursive(10);
	cout << "------------------------------------------------------" << endl;

	printAscending(10);
	cout << "------------------------------------------------------" << endl;
}
