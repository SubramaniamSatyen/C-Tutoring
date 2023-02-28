#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* next;

	Node(int val, Node* next) {
		value = val;
		next = next;
	}
};

int main() {
	
	Node* head = new Node(1, nullptr);
	Node* curr = head;

	for (int i = 0; i < 10; i++) {
		Node* newNode = new Node(i, nullptr);
		//(*curr).next = newNode;
		curr->next = newNode;
		curr = newNode;
	}

	curr = head;
	for (int i = 0; i < 11; i++) {
		cout << curr->value << endl;
		curr = curr->next;
	}

	//curr = head;
	//while (curr != nullptr) {
	//	cout << curr->value << endl;
	//	curr = curr->next;
	//}


	curr = head;
	Node* next = nullptr;
	for (int i = 0; i < 11; i++) {
		next = (*curr).next;
		delete curr;
		curr = next;
	}

	int arr[10];
	cout << arr[5] << endl;

	//Insert into first position
	//1. Move ALL elements forward once
	//2. arr[0] = newValue;

	//Delete element in an array
	//1. Move ALL elements down one position (except for the first element)
}