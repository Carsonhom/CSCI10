// Carson Hom, Hw 3.1, CSCI10-03
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

int input = 1;	// Input from user
int pos = 0;	// Total number of positive values entered
int neg = 0;	// Total number of negative values enteres
int max = 0; //Maximum value
int min = 0; //Min value
int sum = 0;	// Sum of all values entered
int avg;	// Average of all values entered
int numInputs = 0; // Total number of inputs


while (input != 0) { // While loop runs until a 0 is entered

	cout << "Enter a value: " << endl; // Prompts user to input a number
	cin >> input; // Takes in a value from the user

	sum += input; // Add the input to the total sum

	if (input != 0) { // If the value entered is not 0, increase the total number of inputs by 1, if the value entered is 0, it won't affect the average of all values entered
		numInputs++; 
	}

	if (input > 0) { // Checks if value is positive or negative and adds 1 to their respective count
		pos++;
	} else neg++;

	if (max == 0) { // The first time the program runs, set the max to input
		max = input;
	}

	if (min == 0) { // The first time the program runs, set the min to input
		min = input;
	}

	if (input > max) { // If statement which checks if input is the maximum or minimum value
		max = input; // If input is greater than the current max, set the input as the new max
	} else if (input < min) {
		min = input; // If the input is less than the current min, set the input as the new min
	}

}

avg = sum / numInputs; // Computes average of all inputs

cout << "The number of positive values entered is " << pos << endl;
cout << "The number of negative values entered is " << neg << endl;
cout << "The maximum value is " << max << endl;
cout << "The minimum value is " << min << endl;
cout << "The total sum of the inputs are " << sum << endl;
cout << "The average of the inputs are " << avg << endl;



  return 0;
}