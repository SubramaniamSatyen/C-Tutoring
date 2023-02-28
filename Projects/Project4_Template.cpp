//#include <iostream>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//
///*
//* Plant Class. A Plant should store its current age, the type of plant it is, and the current stage it is in.
//* A Plant should be able to return its current stage, increase its age (and stage if necessary).
//*/
//class Plant {
//public:
//	Plant();
//	//Any additional functions you need...
//private:
//	//Any additional member variables you need...
//};
//
//
///*
//* Garden Class. A Garden should store the Plants it "contains". It should keep track of the size of the garden,
//* and the age of the garden (number of active turns). It should be able to increase the turn, carry out a turn's actions, 
//* visualize itself, and create and destroy itself.
//*/
//class Garden {
//public:
//	Garden(int size);			//Garden constructor - initalizes ALL member variables
//	~Garden();					//Garden destructor
//	void view();				//Prints out the current garden
//	bool takeTurn();			//Handles interacting with the user and updating the garden array
//	void nextTurn();			//Handles increasing the turn and growing any plants in the garden array
//private:
//	//Array to store plants
//	Plant* m_garden;
//	int m_size;
//	int m_turn;
//	
//	//Any additional member variables (not required, but as you see fit)
//};
//
//int main() {
//	//Initialize variables to hold game status and size of game
//	int size;
//	bool gameActive = true;
//
//	//Print welcome message and determine size of game
//	cout << "Welcome to garden simulator! Please enter the size of your desired garden: " << endl;
//	cin >> size;
//	
//	//Create game garden
//	Garden myPlants(size);
//	cout << endl;
//
//	//While the game is active...
//	while (gameActive) {
//		//Print the garden
//		myPlants.view();
//
//		//Handle the player's turn
//		gameActive = myPlants.takeTurn();
//
//		//Update the state of the garden
//		myPlants.nextTurn();
//	}
//
//}