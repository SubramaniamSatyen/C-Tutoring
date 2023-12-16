# Project 4: Garden Game (Classes, Dynamic Allocation):

For this project, we will be creating a garden game, simulating the process of growing plants. To do so, you will implement a `Garden` and a `Plant` class. The `Garden` class must have the member variables specified in the template file (and may have additional ones as you see fit). The `Plant` class must have a default constructor, but the rest of the implementation is up to you.

* `Garden` - this class represents the game board and handles interactions with user
 * `Garden(int size)` - constructor to set up the garden with a specific size
 * `~Garden()` - destructor to deallocate any dynamically allocated member variables
 * `void view()` - prints out the current garden
 * `bool takeTurn()` - handles prompting user input and displaying the game's actions (other than printing the board)
 * `void nextTurn()` - handle any step that takes place after the turn
* `Plant` - this class represents a plant, and should keep track of the plant's age and type of plant. The type of plant should be randomly assigned.
    * `Plant()` - plant constructor for initializing member variables