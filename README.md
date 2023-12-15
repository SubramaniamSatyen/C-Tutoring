# C-Tutoring
Repository for C++ Tutoring Files. Find corresponding slides [here](https://drive.google.com/drive/folders/1GFDiLcw0kYhzz-oqBZ3PTXw3i8utoxOz?usp=share_link).

## Topics

This repo is divided broadly along the following topics:
* C++ Fundamentals - Operators, Strings, C-Strings, Structs, Pointers, Arrays, Control Flow, Dynamic Allocation, etc.
* Classes - Inheritance, Polymorphism, Templates, Constructors, Destructors, etc.
* Data Structures - Stacks, Queues, Vectors, Sets, Maps, Trees, etc.
* Functions - Function Overloading, Parameter Passing Semantics, Recursion, etc.
* Splitting Files - Module Organization, Preprocessor Directives, etc.

## Projects

The projects folder of this repo contains the solutions and starter code to showcase mastery of a subset of related topics. Below is a quick summary of each project:

### Project 1: Automated Check-Out (I/O, Loops)
For this project, we will be creating a program that accepts a name and a number of items _n_, followed by the name and price of each of the _n_ items. The program should and output the customer name, mean price of all items, and the names of items with the minimum and maximum price. An example of interaction can be seen below
```
Customer Name: Fred
Number of items: 4
----------------------------------------
Item #1: Broccoli
Price #1: 7.00
----------------------------------------
Item #2: Carrots
Price #2: 8.50
----------------------------------------
Item #3: Green Apples
Price #3: 5.00
----------------------------------------
Item #4:Bananas
Price #4: 6.00
----------------------------------------

Total for Fred: $26.50
Cheapest item: Green Apples
Most expensive item: Carrots
```

### Project 2: Receipt Processor (Arrays, Reference/Value)
For this project, we will be creating a receipt processor, printing out statistics based off of purchase values. Specifically, we'll be implementing a function `receiptProcessor(...)` with seven parameters with the following requirements:
* `prices` - a fixed size array of floats containing the prices of each good purchased
* `size` - the size of the `prices` array
* `isValid` - a boolean variable that should be set to whether the `prices` array only contains positive values
* `onePrice` - a boolean variable that should be set if the `prices` array only contains a single distinct value
* `mean` - a float varible set to the calculated mean of the `prices` array
* `median` - a float varible set to the calculated median of the `prices` array
* `mode` - a float varible set to the calculated mode of the `prices` array
As a developer, part of this project is determining the appropriate parameter passing scheme to use for each parameter. 


## Additonal Resources

I've also prepared slides motivating the examples in these code samples, which can be find [here](https://drive.google.com/drive/folders/1GFDiLcw0kYhzz-oqBZ3PTXw3i8utoxOz?usp=share_link).
