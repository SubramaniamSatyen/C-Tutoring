//#include <iostream>
//#include <string>
//#include <iomanip> 
//using namespace std;
//
//
//int main() {
//	string name, lowest, highest, item;
//	int items;
//	double low, high, price, total;
//
//	cout << "Customer Name: ";
//	getline(cin, name);
//
//	cout << "Number of Items: ";
//	cin >> items;
//	cin.ignore(100000, '\n');
//
//	low = 999999;
//	high = 0;
//	total = 0;
//	lowest = "";
//	highest = "";
//
//	for (int i = 1; i <= items; i++) {
//		cout << "--------------------" << endl;
//		cout << "Item #" << i << ": ";
//		getline(cin, item);
//		cout << "Price #" << i << ": ";
//		cin >> price;
//		cin.ignore(100000, '\n');
//
//		total += price;
//
//		if (price < low) {
//			lowest = item;
//			low = price;
//		}
//		
//		if (price > high) {
//			highest = item;
//			high = price;
//		}
//	}
//
//	cout << "--------------------" << endl;
//
//	cout << "Total for " << name << ": $" << fixed << setprecision(2) << total << endl; 
//	cout << "Cheapest Item: " << lowest << endl;
//	cout << "Most Expensive Item: " << highest << endl;
//
//	string junk;
//	getline(cin, junk);
//}