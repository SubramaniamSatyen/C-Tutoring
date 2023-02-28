#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	const int n = 5;


	int a[5] = { 1, 2, 3, 4, 5 };

	int b[] = { 100, 200, 300, 400 };
	
	string arry[n] = { "Hi", "Hello", "World", "world", "hello" };

	int var;
	int arr[5];
	
	
	int c[n];

	for (int i = 0; i < n; i++) {

		c[i] = i;

	}



	for (int i = 0; i < n; i++) {
		cout << i << "th term of c: " << c[i] << endl;
	}
	cout << "------------------------------------------------------" << endl;



	const int array_size = 5;
	int def[array_size] = { };
	//cout << def << endl;

	for (int i = 0; i < array_size; i++) {
		cout << i << "th term of def: " << def[i] << endl;
	}




	cout << "------------------------------------------------------" << endl;

	int part_def[array_size] = { 1, 2 };
	for (int i = 0; i < n; i++) {
		cout << i << "th term of part_def: " << part_def[i] << endl;
	}


	cout << "------------------------------------------------------" << endl;


	char hello[n] = { 'h', 'e','l', 'l', 'o' };
	char storage_hello[n] = {};

	char temp = 'c';
	char temp_storage;

	temp_storage = temp;


	//DOES NOT WORK
	//hello = storage_hello;

	////Method 1
	for (int i = 0; i < n; i++) {
		storage_hello[i] = hello[i];
	}

	////Method 2
	copy(hello, hello + n, storage_hello);
	cout << "------------------------------------------------------" << endl;


	string map[3][3] =
		{{"My House", "Park", "Park"},
		{"Street", "Street", "Street"},
		{"Post", "Diner", "Market"}};

	cout << map[0][0] << endl << map[0][1] << endl << map[1][0] << endl;
	//cout << "------------------------------------------------------" << endl;



}