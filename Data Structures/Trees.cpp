#include <iostream>
#include <vector>
using namespace std;

struct BinaryNode {
public:
	BinaryNode(int val = 0) {
		value = val;
	}
	int value;
	BinaryNode* left = nullptr;
	BinaryNode* right = nullptr;
};

struct Node {
public: 
	Node(int val = 0) {
		value = val;
	}
	int value;
	vector<Node*> children;
};

int main() {
	
	//Binary Tree with Single Node
	BinaryNode* head = new BinaryNode(1);


	
	//Binary Tree with Three Nodes
	BinaryNode* head_2 = new BinaryNode(1);
	head_2->left = new BinaryNode(2);
	head_2->right = new BinaryNode(3);



	//Tree with root node and three children
	Node* head_3 = new Node(7);
	head_3->children.push_back(new Node(2));
	
	Node* newNode = new Node(10);
	head_3->children.push_back(newNode);

	head_3->children.push_back(new Node(6));



}