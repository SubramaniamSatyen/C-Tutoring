//#include <iostream>
//#include <string>
//using namespace std;
//
//#pragma region TicTacToe
//class TicTacToe {
//public:
//	TicTacToe();
//	bool isXTurn();				//Returns true if it is X’s turn, false if it is O’s
//	int getWinner();			//Returns < 0 if a X has won, > 0 if O has won and 0 if no winner
//	void printBoard();			//Prints the board to standard output (cout)
//	bool placePiece(int pos);	//Places a piece (corresponding to current player turn - either X or O) at the specified position. If able to place, return true, if not, return false;
//	bool isFull();				//Returns true if no empty spaces on board
//private:
//	char board[9];
//	bool isX;
//	bool hasWon;
//};
//
//TicTacToe::TicTacToe() {
//	isX = true;
//	hasWon = false;
//
//	for (int i = 0; i < 9; i++) {
//		board[i] = ' ';
//	}
//}
//
//bool TicTacToe::isFull() {
//	for (int i = 0; i < 9; i++) {
//		if (board[i] == ' ') {
//			return false;
//		}
//	}
//	return true;
//}
//
//bool TicTacToe::placePiece(int pos) {
//	if (pos < 1 || pos > 9) {
//		return false;
//	}
//	
//	pos -= 1;
//	if (board[pos] != ' ') {
//		return false;
//	}
//	
//	if (isX) {
//		board[pos] = 'X';
//	}
//	else {
//		board[pos] = 'O';
//	}
//	isX = !isX;
//	return true;
//}
//
//int TicTacToe::getWinner() {
//	int wins[8][3] = {{0, 1, 2},
//		{ 3, 4, 5 },
//		{ 6, 7, 8 },
//		{ 0, 3, 6 },
//		{ 1, 4, 7 },
//		{ 2, 5, 8 },
//		{ 0, 4, 8 },
//		{ 2, 4, 6 }};
//
//	char search = 'X';
//
//	for (int i = 0; i < 8; i++) {	
//		bool match = true;
//		for (int j = 0; j < 3; j++) {
//			if (board[wins[i][j]] != search) {
//				match = false;
//			}
//		}
//
//		if (match) {
//			return -1;
//		}
//	}
//
//	search = 'O';
//	for (int i = 0; i < 8; i++) {
//		bool match = true;
//		for (int j = 0; j < 3; j++) {
//			if (board[wins[i][j]] != search) {
//				match = false;
//			}
//		}
//
//		if (match) {
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//void TicTacToe::printBoard() {
//	cout << endl;
//	cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
//	cout << "-----------" << endl;
//	cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
//	cout << "-----------" << endl;
//	cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
//}
//
//bool TicTacToe::isXTurn() {
//	return isX;
//}
//#pragma endregion
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