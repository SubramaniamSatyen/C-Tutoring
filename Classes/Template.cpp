#include <iostream>
#include <string>
using namespace std;

#pragma region Wrapper_Class
class Wrapper {
public:
	Wrapper(int val);
	int get();
	void set(int other);
private:
	int m_storage;
};

Wrapper::Wrapper(int val) {
	m_storage = val;
}

int Wrapper::get() {
	return m_storage;
}

void Wrapper::set(int other) {
	m_storage = other;
}
#pragma endregion


#pragma region Wrapper_Template_Class

template <typename T>
class WrapperTemplate {
public:
	WrapperTemplate(T val);
	T get();
	void set(T other);
private:
	T m_storage;
};

template <typename T>
WrapperTemplate<T>::WrapperTemplate(T val) {
	m_storage = val;
}

template <typename T>
T WrapperTemplate<T>::get() {
	return m_storage;
}

template <typename T>
void WrapperTemplate<T>::set(T other) {
	m_storage = other;
}
#pragma endregion


#pragma region Templated_Functions
string getMin(string a, string b) {
	if (a.length() > b.length()) {
		return b;
	}
	return a;
}

template <typename T>
T getMin(T a, T b) {
	if (a < b) {
		return a;
	}
	return b;
}
#pragma endregion


int main() {
	Wrapper integer = Wrapper(10);
	cout << integer.get() << endl;
	integer.set(-10);
	cout << integer.get() << endl;

	cout << "------------------------------------------------------" << endl;

	WrapperTemplate<int> integerTemplate = WrapperTemplate<int>(10);
	cout << integerTemplate.get() << endl;
	integerTemplate.set(-10);
	cout << integerTemplate.get() << endl;

	cout << "------------------------------------------------------" << endl;

	WrapperTemplate<string> stringTemplate = WrapperTemplate<string>("String?");
	cout << stringTemplate.get() << endl;
	stringTemplate.set("Testing");
	cout << stringTemplate.get() << endl;

	cout << "------------------------------------------------------" << endl;

	cout << getMin<double>(1.0, -1.0) << endl;
	cout << getMin<int>(1, -1) << endl;


	cout << getMin(1.0, -1.0) << endl;
	cout << getMin(1, -1) << endl;

	//cout << getMin(1.0, 3) << endl;


	int var = 123;
	string a = "Test";
	string b = "Testing";
	cout << getMin(a, b) << endl;
	cout << getMin("Test", "Testing") << endl;

	cout << "------------------------------------------------------" << endl;

}

