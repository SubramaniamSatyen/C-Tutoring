//#include <iostream>
//using namespace std;
//
//int main() {
//
//	char* ptr;
//	
//	char* c_arr[10];
//
//	char** c_arr2[10];
//
//	int* point;
//
//	const int* pointer;
//
//	int* null_int = nullptr;
//
//
//
//
//	int var = 100;
//
//	cout << "Variable Value: " << var << endl;
//	
//	cout << "Variable Memory Address: " << &var << endl;
//
//	int* var_pointer = &var;
//
//	cout << "Variable Value: " << *var_pointer << endl;
//
//	cout << "Variable Memory Address: " << &var << endl;
//
//	int* pointer = nullptr;
//
//	cout << "--------------------------------------------------" << endl;
//
//
//	string arr[5] = { "Hello", "Hi", "World", "Globe", "Earth" };
//	string* ptr = arr;
//	cout << ptr[2] << endl;
//	cout << *(ptr + 1) << endl;
//
//	cout << "--------------------------------------------------" << endl;
//
//
//
//
//	cout << "Variable Address: " << arr << endl;
//
//	cout << "First Value: " << arr[0] << endl;
//	cout << "Second Value: " << arr[1] << endl;
//	cout << "Third Value: " << arr[2] << endl;
//	cout << "Fourth Value: " << arr[3] << endl;
//	cout << "Fifth Value: " << arr[4] << endl;
//
//	string* arr_pointer = arr;
//	cout << "Variable Address: " << arr_pointer << endl;
//
//	cout << "First Value: " << *arr_pointer << endl;
//	cout << "Second Value: " << *(arr_pointer + 1) << endl;
//	cout << "Third Value: " << *(arr_pointer + 2) << endl;
//	cout << "Fourth Value: " << *(arr_pointer + 3) << endl;
//	cout << "Fifth Value: " << *(arr_pointer + 4) << endl;
//
//}
//
//void fn(int*& retArr, int& size) {
//	int arr[5] = { 1, 2, 3, 4, 5 };
//}