#include <iostream>
using namespace std;

class Notebook {
public:
	Notebook(string s, int p);
	Notebook();
	string getSubject();
	int getPages();
	
	Notebook operator+(const Notebook& other);
	Notebook operator+(const int& other);

private:
	string m_subject;
	int m_pages;
};

Notebook::Notebook(string s, int p) {
	m_subject = s;
	m_pages = p;
}

Notebook::Notebook() {
	m_subject = "";
	m_pages = 0;
}

string Notebook::getSubject() {
	return m_subject;
}

int Notebook::getPages() {
	return m_pages;
}

Notebook Notebook::operator+(const Notebook& other) {
	Notebook sum;
	sum.m_subject = m_subject + " and " + other.m_subject;
	sum.m_pages = m_pages + other.m_pages;
	return sum;
}

Notebook Notebook::operator+(const int& other) {
	Notebook sum;
	sum.m_subject = m_subject;
	sum.m_pages = m_pages + other;
	return sum;
}


int main() {
	Notebook book1 = Notebook("Physics", 100);
	Notebook book2 = Notebook("Math", 200);

	Notebook combined = book1 + book2;

	cout << book1.getSubject() << " | " << book1.getPages() << endl;
	cout << book2.getSubject() << " | " << book2.getPages() << endl;


	cout << combined.getSubject() << " | " << combined.getPages() << endl;





	combined = combined + 50;

	cout << combined.getSubject() << " | " << combined.getPages() << endl;


}