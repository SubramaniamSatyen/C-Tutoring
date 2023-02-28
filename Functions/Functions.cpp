#include <iostream>
using namespace std;

string agency = "US Housing";



void sayHello() {
	cout << "Hello" << endl;
}

void sayGoodBye() {
	cout << "Goodbye" << endl;
}

void printBar() {
	cout << "------------------------------------------------------" << endl;
}

void makeSmallTalk() {
	cout << "Nice Weather Today" << endl;
}

void printSum(int a, int b) {
	cout << a + b << endl;
}

int sum(int a, int b) {
	return a + b;
}

int max(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max > arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

int max(int a, int b);

int main() {


	sayHello();
	sayHello();

	for (int i = 0; i < 1000; i++) {
		sayHello();
	}

	
	makeSmallTalk();
	sayGoodBye();
	printBar();
		
	printSum(10, 12);
	printSum(10, 8);
	printBar();

	cout << "Sum of 10 and 12 is " << sum(10, 12) << endl;
	printBar();

	const int n = 10;
	int a[n] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
	cout << "Max of array \"a\" is " << max(a, n) << endl;
	printBar();

	cout << "Max between -10 and 10 is " << max(-10, 10) << endl;
	printBar();


	if (true == true) {
		int a = 5;
	}

	cout << a << endl;


}

int max(int a, int b) {
	return a > b ? a : b;
}