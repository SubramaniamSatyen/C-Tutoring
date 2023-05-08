#include <set>
#include <iostream>
using namespace std;


int main() {
	set<int> temp;

	for (int i = 10; i > 0; i--) {
		temp.insert(i);
	}

	const set<int>::iterator firstVal = temp.begin();


	auto iter = temp.begin();

	while (iter != temp.end()) {
		cout << *iter << endl;
		iter++;
	}

	//int* ptr = new int(5);
	//cout << *ptr << endl;


	cout << (temp.find(5) != temp.end()) << endl;
	cout << (temp.find(11)!= temp.end()) << endl;


	set<int> a({ 1, 2, 3, 4, 5 });
	set<int> b = a;
	b.insert(6);
	cout << a.size() << endl; 
	cout << b.size() << endl;


	set<int>* c = &a;
	c->insert(6);
	cout << a.size() << endl;
	cout << b.size() << endl;
	cout << c->size() << endl;

	int intone = 1;
	int inttwo = 2;
	set<int*> ptrA({ &intone, &inttwo });
	set<int*> ptrB = ptrA;
}
