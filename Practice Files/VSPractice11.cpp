#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int var;
	cin >> var;

	int count = var;

	for (int i = 0; i < var; i++) {

		for (int j = 0; j < count; j++) {
			cout << '.';
		}
		count--;
		cout << endl;
	}
}