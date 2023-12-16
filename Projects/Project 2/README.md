# Project 2: Receipt Processor (Arrays, Reference/Value)

For this project, we will be creating a receipt processor, printing out statistics based off of purchase values and sorting the provided price values. Specifically, we'll be implementing a function `receiptProcessor(...)` with seven parameters with the following requirements:
* `prices` - a fixed size array of floats containing the prices of each good purchased
* `size` - the size of the `prices` array
* `isValid` - a boolean variable that should be set to whether the `prices` array only contains positive values
* `onePrice` - a boolean variable that should be set if the `prices` array only contains a single distinct value
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


