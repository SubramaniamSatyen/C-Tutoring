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
	//TODO: Write Member Variables
};

//TODO: Implement Functions

//TODO: Declare Child Classes For Turtle, Lizard, and Bull


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

	}

	system("CLS");
	cout << "Great, now determine how many challengers you hope to beat in combat (enter a postitive integer): ";
	cin >> num;

	cout << endl << endl << line << endl;
	cout << "Generating enemies... " << endl;


	//TODO: Allocate [input number] random enemies (think about how you'll want to store these enemies

	cout << "Done! " << endl;


	//Create a loop that will run when you are still alive AND there are enemmies left - this loop should handle a round of attacks.
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

	//TODO: Loop header and body (include a system("CLS") at start of loop for clean loop displays)
	system("PAUSE");

	system("CLS");
	cout << "GAME OVER!!!" << endl;

	cout << endl << line << endl << endl;

	cout << "Game Stats: \n\tRound #: " << round << "\n\tEnemies KOed: " << KOedEnemies;

	//TODO: Handle any dynamic deallocation
}