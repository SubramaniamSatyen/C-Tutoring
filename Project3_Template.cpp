//#include <iostream>
//#include <string>
//using namespace std;
//
//class TicTacToe {
//public:
//	TicTacToe();
//	bool isXTurn();				//Returns true if it is X’s turn, false if it is O’s
//	int getWinner();			//Returns < 0 if a X has won, > 0 if O has won and 0 if no winner
//	void printBoard();			//Prints the board to standard output (cout)
//	bool placePiece(int pos);	//Places a piece (corresponding to current player turn - either X or O) at the specified position. If able to place, return true, if not, return false;
//	bool isFull();				//Returns true if no empty spaces on board
//private:
//	//TODO
//};
//
//int main() {
//	TicTacToe game = TicTacToe();
//	int input;
//
//	//If nobody has won yet...
//	while (game.getWinner() == 0 && !game.isFull()) {
//		//Print the board
//		game.printBoard();
//
//		//Prompt player for input
//		if (game.isXTurn()) {
//			cout << "Player X's Turn: ";
//		}
//		else {
//			cout << "Player O's Turn: ";
//		}
//
//		//Read player input
//		cin >> input;
//
//		//If invalid placement, restart turn
//		if (!game.placePiece(input)) {
//			cout << "Whoops! That's not a valid tile...\n";
//			continue;
//		}
//	}
//
//	//After player has won, print the winning message
//	game.printBoard();
//
//	if (game.getWinner() > 0) {
//		cout << "Yay! Player O has won the game!\n";
//	}
//	else if (game.getWinner() < 0) {
//		cout << "Yay! Player X has won the game!\n";
//	}
//	else {
//		cout << "Oof! A stalemate!\n";
//	}
//
//	string junk;
//	cin >> junk;
//}