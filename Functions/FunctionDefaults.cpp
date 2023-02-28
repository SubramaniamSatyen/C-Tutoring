#include <iostream>
using namespace std;

int sumFive(int a, int b, int c = 0, int d = 0, int e = 0) {

	return a + b + c + d + e;
}



int main() {
	cout << sumFive(1, 2) << endl;
	cout << sumFive(1, 2, 3) << endl;
	cout << sumFive(1, 2, 3, 4) << endl;
	cout << sumFive(1, 2, 3, 4, 5) << endl;

}