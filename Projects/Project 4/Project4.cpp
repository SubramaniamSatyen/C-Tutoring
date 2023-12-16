#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


#pragma region codeImplementation
const int lowToUpp = -32;

class Plant {
public:
	Plant();
	char viewPlant();
	void grow();
	bool placePlant();
	int getAge();
private:
	char m_type;
	char m_curr;
	int m_age;
};

Plant::Plant() {
	m_type = (rand() % 26) + 97;
	m_curr = ' ';
	m_age = 0;
}

char Plant::viewPlant() {
	return m_curr;
}

int Plant::getAge() {
	return m_age;
}

void Plant::grow() {
	if (m_age > 0) {
		if (m_age == 3) {
			m_curr = m_type;
		}
		else if (m_age > 4) {
			m_curr = m_type + lowToUpp;
		}
		m_age++;
	}
}

bool Plant::placePlant() {
	if (m_age == 0) {
		m_age = 1;
		m_curr = '.';
		return true;
	}
	return false;
}

class Garden {
public:
	Garden(int size);
	~Garden();
	void view();				//Prints out the current garden
	bool takeTurn();
	void nextTurn();
private:
	Plant* m_garden;
	int m_size;
	int m_turn;
};

Garden::Garden(int size) {
	m_garden = new Plant[size * size];
	m_size = size;
	m_turn = 0;
}

void Garden::view() {
	cout << endl;
	//Print out top of grid
	for (int i = 0; i < m_size; i++) {
		cout << "----";
	}
	cout << "-" << endl;

	for (int i = 0; i < m_size; i++) {
		cout << "| ";
		for (int j = 0; j < m_size; j++) {
			cout << m_garden[i * m_size + j].viewPlant() << " | ";
		}
		cout << endl;
	}

	//Print out bottom of grid
	for (int i = 0; i < m_size; i++) {
		cout << "----";
	}
	cout << "-" << endl;
}

Garden::~Garden() {
	delete m_garden;
}

bool Garden::takeTurn() {
	char input;
	int c, r;
	cout << endl << "Turn " << m_turn << endl;
	cout << "Type 'p' (plant), 'r' (remove), 's' (sleep), or 'q' (quit)" << endl;
	cin >> input;

	if (input == 'q') {
		return false;
	}
	else if (input == 's') {
		return true;
	}
	else if (input == 'p' || input == 'r') {
		cout << endl;
		cout << "Please enter the target row #: ";
		cin >> r;
		cout << "Please enter the target col #: ";
		cin >> c;
		cout << endl;

		if (r < 0 || r > m_size - 1 || c < 0 || c > m_size - 1) {
			cout << "Searching... Searching..." << endl;
			cout << "Unable to find the target. Perhaps try again later..." << endl;
			return true;
		}

		if (input == 'p') {
			if (m_garden[r * m_size + c].getAge() != 0) {
				cout << "Looks like we've already got a plant here! Let's try something different tomorrow..." << endl;
			}
			else {
				cout << "Plant has been placed, let's see what it becomes..." << endl;
				m_garden[r * m_size + c].placePlant();
			}
		}
		else {
			if (m_garden[r * m_size + c].getAge() != 0) {
				cout << "Plant successfully removed!" << endl;
				m_garden[r * m_size + c] = Plant();
			}
			else {
				cout << "Doesn't look like there's anything here." << endl;
			}
		}
		return true;
	}
	else {
		cout << "Hmm, didn't quite catch that. Let's try again tomorrow..." << endl;
		return true;
	}
}

void Garden::nextTurn() {
	cout << "==============================================================================" << endl;
	m_turn++;
	for (int i = 0; i < m_size * m_size; i++) {
		m_garden[i].grow();
	}
}


#pragma endregion

int main() {
	int size;
	bool gameActive = true;


	cout << "Welcome to garden simulator! Please enter the size of your desired garden: " << endl;
	cin >> size;
	Garden myPlants(size);

	cout << endl;
	while (gameActive) {
		myPlants.view();

		gameActive = myPlants.takeTurn();

		myPlants.nextTurn();
	}

}