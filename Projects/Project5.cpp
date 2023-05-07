#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>
#include <random>
using namespace std;

class Creature {
public:
	Creature(int h, int d, int a, int s, char t, string n);
	int getLvl();
	int getHp();
	int getDfnc();
	char getType();
	int getAtk();
	int getSpl();
	bool decHp(int rawDamage);
	bool decHpSpecial(int damage);
	void levelUp();
	string getName();
private:
	int m_lvl;
	int m_hp;
	int m_df;
	char m_type;
	int m_satk;
	int m_atk;
	string m_name;
};

Creature::Creature(int h, int d, int a, int s, char t, string n) {
	m_lvl = 1;
	m_hp = h;
	m_atk = a;
	m_satk = s;
	m_type = t;
	m_name = n;
	m_df = d;
}

int Creature::getLvl() {
	return m_lvl;
}

int Creature::getHp() {
	return m_hp;
}

int Creature::getDfnc() {
	return m_df;
}

char Creature::getType() {
	return m_type;
}

int Creature::getAtk() {
	return m_atk;
}

int Creature::getSpl() {
	return m_satk;
}

bool Creature::decHp(int rawDamage) {
	m_hp -= (rawDamage - m_df) > 0 ? (rawDamage - m_df) : 0;
	if (m_hp <= 0) {
		m_hp = 0;
		return true;
	}
	return false;
}


bool Creature::decHpSpecial(int damage) {
	m_hp -= damage;
	if (m_hp <= 0) {
		m_hp = 0;
		return true;
	}
	return false;
}

string Creature::getName() {
	return m_name;
}


void Creature::levelUp() {
	m_lvl++;
}	

class Bull : public Creature {
public:
	Bull(string name) : Creature(60, 15, 35, 20, 'G', name) {}
};

class Lizard : public Creature {
public:
	Lizard(string name) : Creature(80, 10, 25, 25, 'F', name) {}
};

class Turtle : public Creature {
public:
	Turtle(string name) : Creature(100, 15, 20, 15, 'W', name) {}
};

const string line = "-------------------------------------------------";

int main() {
	bool creatureCreated = false;
	Creature* myCreature = nullptr;
	int num;

	while (!creatureCreated) {
		system("CLS");
		cout << "Welcome to CreatureMon Battle Simulator!" << endl;
		cout << endl << endl << line << endl;
		cout << "To begin, please select one of the CreatureMon Below!" << endl << endl;

		cout << "(1) Bull: \n\tType: Grass \n\tHealth: 60 \n\tAttack: 35 ... " << endl;
		cout << "(2) Turtle: \n\tType: Water \n\tHealth: 100 \n\tAttack: 20 ..." << endl;
		cout << "(3) Lizard: \n\tType: Fire \n\tHealth: 80 \n\tAttack: 25 ..." << endl;

		cout << endl << "Now Enter your selection (1, 2, or 3): ";
		cin >> num;

		//TODO: Handle allocating player's creature (and validate input number - you can assume any input will be a number, but not
		//necessarily 1, 2, or 3)

		/*
			Hint: You'll need something to the effect of the below code to handle the input for the name.

			//Handle validatation of input #
			string name;
			cout << "Great! Now enter your new friend's name: ";
			cin >> name;
			//Handle allocation in myCreature ptr

		*/

		if (num < 1 || num > 3) {
			continue;
		}
		else {
			cout << endl << endl;
			string name;
			cout << "Great! Now enter your new friend's name: ";
			cin >> name;

			if (num == 1) {
				myCreature = new Bull(name);
			}
			else if (num == 2) {
				myCreature = new Turtle(name);
			}
			else {
				myCreature = new Lizard(name);
			}
			creatureCreated = true;
			break;
		}
	}

	system("CLS");
	cout << "Great, now determine how many challengers you hope to beat in combat (enter a postitive integer): ";
	cin >> num;

	cout << endl << endl << line << endl;
	cout << "Generating enemies... " << endl;

	vector<Creature*> myEnemies;

	//TODO: Allocate [input number] random enemies (think about how you'll want to store these enemies
	for (int i = 0; i < num; i++) {
		int r = rand() % 3;
		if (r == 1) {
			myEnemies.push_back(new Bull("Bull_" + to_string(i)));
		}
		else if (r == 2) {
			myEnemies.push_back(new Turtle("Turtle_" + to_string(i)));
		}
		else {
			myEnemies.push_back(new Lizard("Lizard_" + to_string(i)));
		}
	}

	cout << "Done! " << endl;


	//TODO: Create a loop that will run when you are still alive AND there are enemies left - this loop should handle a round of attacks.
	//Specifically, a round consists of you performing an action and the enemy performing an action.
	//	Possible human actions:
	//		Attack: attack an enemy for your_attack - their_defense damage
	//		Special Attack: attack an enemy for your_special_attack damage
	//		Defend: block ALL damage from enemies for this round
	//		Wait (will ONLY do this if invalid input): doesn't take any action for this round 
	//
	//	Possible enemy actions (and accompanying likelihoods - you'll need to use random numbers here):
	//		(30%) - Attack: attack an enemy for your_attack - their_defense damage
	//		(30%) - Special Attack: attack an enemy for your_special_attack damage
	//		(10%) - Defend: block ALL damage from enemies for this round
	//		(30%) - Wait: doesn't take any action for this round


	int round = 1;
	int KOedEnemies = 0;


	while (myCreature->getHp() > 0 && myEnemies.size() > 0) {
		system("CLS");
		cout << "Round #" << round << endl;
		round++;
		cout << line << endl;

		cout << myEnemies[0]->getName() << "'s stats: \n\tHealth: " << myEnemies[0]->getHp() << "\n\tAttack: " << myEnemies[0]->getAtk() << "\n\tDefence: " << myEnemies[0]->getDfnc() << endl << endl;
		cout << myCreature->getName() << "'s stats: \n\tHealth: " << myCreature->getHp() << "\n\tAttack: " << myCreature->getAtk() << "\n\tDefence: " << myCreature->getDfnc() << endl << endl;

		cout << endl << "(1) Attack: strike an enemy with a powerful blow" << endl;
		cout << "(2) Special Attack: bypass an enemy's defense with a secret attack stat" << endl;
		cout << "(3) Defend: raise your defenses to block any attack in the current round" << endl;

		cout << endl << "Please enter what action you'd like on your turn (1, 2, or 3): ";
		cin >> num;

		cout << endl << line << endl;
		int r = rand() % 10;
		if (r == 9 || num == 3) {
			cout << "A creature is defending - no damage taken!" << endl;
			system("PAUSE");
			continue;
		}

		if (num < 1 || num > 3) {
			cout << myCreature->getName() << " is sleeping... " << endl;
		}
		else if (num == 1) {
			if (myEnemies[0]->decHp(myCreature->getAtk())) {
				cout << myCreature->getName() << " KOed the enemy! " << endl;
				KOedEnemies++;
				system("PAUSE");
				delete myEnemies[0];
				myEnemies.erase(myEnemies.begin());
				continue;				
			}
			else {
				cout << myCreature->getName() << " is attacking for " << ((myCreature->getAtk() - myEnemies[0]->getDfnc()) > 0 ? (myCreature->getAtk() - myEnemies[0]->getDfnc()) : 0) << " damage! " << endl;
			}
		}
		else if (num == 2) {
			if (myEnemies[0]->decHpSpecial(myCreature->getSpl())) {
				cout << myCreature->getName() << " KOed the enemy! " << endl;
				KOedEnemies++;
				system("PAUSE");
				delete myEnemies[0];
				myEnemies.erase(myEnemies.begin());
				continue;
			}
			else {
				cout << myCreature->getName() << " is attacking for " << myCreature->getSpl() << " damage! " << endl;
			}
		}
		

		if (r == 0 || r == 1 || r == 2) {
			cout << myEnemies[0]->getName() << " is sleeping... " << endl;
		}
		else if (r == 3 || r == 4 || r == 5) {
			if (myCreature->decHp(myEnemies[0]->getAtk())) {
				cout << myEnemies[0]->getName() << " KOed the enemy! " << endl;
			}
			else {
				cout << myEnemies[0]->getName() << " is attacking for " << ((myEnemies[0]->getAtk() - myCreature->getDfnc()) > 0 ? (myEnemies[0]->getAtk() - myCreature->getDfnc()) : 0) << " damage! " << endl;
			}
		}
		else if (r == 6 || r == 7 || r == 8) {
			if (myCreature->decHpSpecial(myEnemies[0]->getSpl())) {
				cout << myEnemies[0]->getName() << " KOed the enemy! " << endl;
			}
			else {
				cout << myEnemies[0]->getName() << " is attacking for " << myEnemies[0]->getSpl() << " damage! " << endl;
			}
		}
		system("PAUSE");
	}

	//TODO: Loop header and body (include a system("CLS") at start of loop for clean loop displays)
	
	system("CLS");
	cout << "GAME OVER!!!" << endl;

	cout << endl << line << endl << endl;

	cout << "Game Stats: \n\tRound #: " << round << "\n\tEnemies KOed: " << KOedEnemies;

	if (myCreature->getHp() > 0) {
		cout << "\n\t All enemies have been beaten!";
	}

	delete myCreature;
	for (int i = 0; i < myEnemies.size(); i++) {
		delete myEnemies[i];
	}
	
}