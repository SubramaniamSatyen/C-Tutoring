//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void receiptProcessor(float* prices, int n, bool& isValid, bool& onePrice, float& mean, float& median, float& mode);
//
//int main() {
//	int n;
//	cout << "Size of array to test: ";
//	cin >> n;
//
//	float* arr = new float[n];
//	for (int i = 0; i < n; i++) {
//		float val;
//		cout << i + 1 << "th element: ";
//		cin >> val;
//		arr[i] = val;
//	}
//
//	bool isValid = false, onePrice = false;
//	float mean = 0, median = 0, mode = 0;
//
//	receiptProcessor(arr, n, isValid, onePrice, mean, median, mode);
//
//	cout << "-----------------------------------------------------------" << endl;
//	cout << "isValid: " << isValid << " | onePrice: " << onePrice << endl;
//	cout << "mean: " << mean << " | median: " << median << " | mode: " << mode << endl;
//
//	cout << "Array: { ";
//	for (int i = 0; i < n - 1; i++) {
//		cout << arr[i] << ", ";
//	}
//	cout << arr[n - 1] << " }" << endl;
//	string junk;
//	cin >> junk;
//
//}
//
//void receiptProcessor(float* prices, int n, bool& isValid, bool& onePrice, float& mean, float& median, float& mode) {
//
//	//Sorting
//	sort(prices, prices + n);
//
//	//Setting median
//	if (n % 2 == 0) {
//		median = (prices[n / 2 - 1] + prices[n / 2]) / 2;
//	} 
//	else {
//		median = prices[n / 2];
//	}
//
//	//Setting isValid
//	isValid = (prices[0] >= 0);
//
//	//Setting onePrice
//	onePrice = (prices[0] == prices[n - 1]);
//
//	//Setting mean and mode
//	float sum = 0;
//
//	int mode_cnt = 0;
//	int curr_cnt = 0;
//
//	mode = prices[0];
//
//	for (int i = 0; i < n; i++) {
//		sum += prices[i];
//		if (i != 0 && prices[i] != prices[i - 1]) {
//			if (curr_cnt > mode_cnt) {
//				mode = prices[i - 1];
//				mode_cnt = curr_cnt;
//			}
//			curr_cnt = 0;
//		}
//		else {
//			curr_cnt++;
//		}
//	}
//
//	mean = sum / n;
//}