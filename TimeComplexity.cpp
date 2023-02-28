//#include <iostream>
//using namespace std;
//
////O(1)
//void constantTime(int* ptr) {
//	cout << *ptr << endl;
//}
//
////O(100)
//void constantLongTime(int* ptr) {
//	//This always runs a constant number of times (Despite being a large number of times)
//	for (int i = 0; i < 100; i++) {
//		cout << *ptr << endl;
//	}
//}
//
//void NTime(int* ptr, int n) {
//	//Runs n times
//	for (int i = 0; i < n; i++) {
//		cout << ptr[i] << endl;
//	}
//}
//
//void N2Time(int* ptr, int n) {
//	//Runs n * n times
//	for (int i = 0; i < n; i++) {
//		//Runs n times
//		for (int j = 0; j < n; j++) {
//			cout << ptr[j] * ptr[i] << endl;
//		}
//	}
//}
//
//int main() {
//
//	const int n = 1, n2 = 10, n3 = 1000000;
//
//	int arr[n] = { 1 };
//	int arr2[n2] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr3[n3];
//
//	for (int i = 1; i <= n3; i++) {
//		arr3[i] = i;
//	}
//
//	//Constant time - O(1)
//	constantTime(arr);
//	constantTime(arr2);
//	constantTime(arr3);
//
//	//Constant time - O(1 * 100)
//	constantLongTime(arr);
//	constantLongTime(arr2);
//	constantLongTime(arr3);
//
//	//O(N)
//	NTime(arr, n);
//	NTime(arr2, n2);
//	NTime(arr3, n3);
//
//	//O(N^2)
//	N2Time(arr, n);
//	N2Time(arr2, n2);
//	N2Time(arr3, n3);
//}