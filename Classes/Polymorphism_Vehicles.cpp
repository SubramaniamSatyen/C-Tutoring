#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
	//Note: Default Constructor
	Vehicle(string loc, int fuel);
	void travelTo(string dest);
	int getFuel();
	void addFuel();
	string getCurrLoc();
private:
	string m_currLoc;
	int m_fuel;
};

#pragma region Vehicle_Implementation
Vehicle::Vehicle(string loc, int fuel) {
	m_currLoc = loc;
	if (fuel >= 0) {
		m_fuel = fuel;
	}
	else {
		m_fuel = 0;
	}
}

void Vehicle::travelTo(string loc) {
	m_currLoc = loc;
	m_fuel--;
}

void Vehicle::addFuel() {
	m_fuel++;
}

int Vehicle::getFuel() {
	return m_fuel;
}

string Vehicle::getCurrLoc() {
	return m_currLoc;
}
#pragma endregion

class Car : public Vehicle {
public:
	Car();
	//NOTE: travelTo REDEFINITION!!!
	void travelTo(string dest);
	
	int	getTirePressure();
	int getMilage();
private:
	int m_milage;
	int m_tirePressure;
};

void Car::travelTo(string dest) {
	m_milage++;
	Vehicle::travelTo(dest);
}

int Car::getTirePressure() {
	return m_tirePressure;
}

int Car::getMilage() {
	return m_milage;
}

Car::Car() : Vehicle("Dealership", 0) {
	m_milage = 0;
	m_tirePressure = 32;
}

int main() {
	Car toyota = Car();
	toyota.addFuel();

	cout << toyota.getCurrLoc() << endl;
	cout << toyota.getMilage() << endl;

	toyota.travelTo("My home");
	cout << toyota.getCurrLoc() << endl;
	cout << toyota.getMilage() << endl;

}


