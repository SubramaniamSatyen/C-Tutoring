#include <iostream>
#include <string.h>
using namespace std;

class Shape {
public:
	Shape(string n) {
		m_shapeName = n;
	}
	virtual double perimeter() = 0;
	virtual double area() = 0;

private:
	string m_shapeName;
};

//TODO: Circle Class
class Circle : public Shape {
public:
	Circle(int rad, string name);
	virtual double perimeter();
	virtual double area();
private:
	int r;
};

Circle::Circle(int rad, string name) : Shape(name) {
	r = rad;
}

double Circle::perimeter() {
	return 2 * r * 3.14;
}

double Circle::area() {
	return 3.14 * r * r;
}


//TODO: Square Class

class Square : public Shape {
public:
	Square(int len, string name);
	double perimeter();
	double area();
private:
	int l;
};

Square::Square(int len, string name) : Shape(name) {
	l = len;
}

double Square::perimeter() {
	return l * 4;
}

double Square::area() {
	return l * l;
}

int main() {
	Circle c(5, "My Circle");

	Square s(10, "My Square");

	Shape sh("Shape");
}