#include <iostream>
using namespace std;

bool white(string& str);

int main() {
	string s = "White Space";
	cout << white(s) << endl;
	cout << s << endl;
}

bool white(string& str) {
	string proc = "";
	bool hasWhiteSpace = false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			hasWhiteSpace = true;
		}
		if (str[i] != ' ') {
			proc += str[i];
		}

	}

	str = proc;

	return hasWhiteSpace;

	//if (hasWhiteSpace == true) {
	//	return true;
	//}
	//else {
	//	return false;
	//}

}