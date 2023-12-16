# Project 3: Tic-Tac-Toe (Classes, Header Files)

For this project, we will be creating a tic-tac-toe game with a template class. On each turn, if no player has yet won, the driver code should print out the board, ask for a player, and update the board. The class should have the following functions (it can have additional functions you see fit as well)

* `bool isXTurn()` - returns true if it's X's turn, false if it's O's
* `int getWinner()` - returns a negative value if X has won, a positive value if O has won and 0 if no winner
* `void printBoard()` - a boolean variable that should be set to whether the `prices` array only contains positive values
* `bool placePiece(int )` - a boolean variable that should be set if the `prices` array only contains a single distinct value
* `mean` - a float varible set to the calculated mean of the `prices` array
* `median` - a float varible set to the calculated median of the `prices` array
* `mode` - a float varible set to the calculated mode of the `prices` array
As a developer, part of this project is determining the appropriate parameter passing scheme to use for each parameter. Below is an example interaction

```C++
float prices[10] = {5.0, 4.0, 3.0, 5.0, 4.0, 3.0, 5.0, 4.0, 3.0, 4.0};
bool isValid = false, onePrice = false;
float mean = 0, median = 0, mode = 0;

receiptProcessor(prices, 10, isValid, onePrice, mean, median, mode);
cout << isValid << ", " << oneItem << endl;     // Prints 1, 0
cout << mean << ", " << median << ", " << mode << endl; // Prints 3.0, 4.0, 3.0

// At this point, prices contains {3.0, 3.0, 3.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 5.0}
```


