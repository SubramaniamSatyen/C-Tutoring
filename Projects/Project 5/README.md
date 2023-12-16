# Project 5: Creature Mon (Inheritance, Polymorphism):

For this project, your task is to create a program that simulates battling CreatureMon. This program should do the following

1. Prompt the user to choose a CreatureMon
2. Allow you to name your CreatureMon
3. Choose the number of enemies CreatureMon to fight
4. Allow you to fight the CreatureMon enemies until you lose or KO all of them

Note that each fight can be broken into three distinct stages as follows

1. Player chooses their action (attack, defend, special attack)
2. Computer chooses an action (attack, defend, special attack)
3. 

Below is an example of what the initalization steps (1-3) should look like

```
Welcome to CreatureMon Battle Simulator!


-------------------------------------------------
To begin, please select one of the CreatureMon Below!

(1) Bull:
        Type: Grass
        Health: 60
        Attack: 35 ...
(2) Turtle:
        Type: Water
        Health: 100
        Attack: 20 ...
(3) Lizard:
        Type: Fire
        Health: 80
        Attack: 25 ...

Now Enter your selection (1, 2, or 3): 1


Great! Now enter your new friend's name: Bob

Great, now determine how many challengers you hope to beat in combat (enter a postitive integer): 5
```

Each rount of fighting should look something like the below sample, with the enemy name corresponding to the current enemy and stats updating after each turn based on the actions taken.

```
Round #1
-------------------------------------------------
Turtle_0's stats:
        Health: 100
        Attack: 20
        Defence: 15

Bob's stats:
        Health: 60
        Attack: 35
        Defence: 15


(1) Attack: strike an enemy with a powerful blow
(2) Special Attack: bypass an enemy's defense with a secret attack stat
(3) Defend: raise your defenses to block any attack in the current round

Please enter what action you'd like on your turn (1, 2, or 3): 1

-------------------------------------------------
Bob is attacking for 20 damage!
Turtle_0 is attacking for 5 damage!
Press any key to continue . . .
```