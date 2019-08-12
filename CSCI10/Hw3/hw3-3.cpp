// Carson Hom, Hw 3.1, CSCI10-03
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

int a; // First integer input
int b; // Second integer input
int quotient = 0; // Initialize the quotient
int sign;

cout << "Enter the first integer: " << endl; // Prompt the user for value a
cin >> a; // Set the value of a to user input
cout << "Enter the second integer: " << endl; // Prompt the user for value b
cin >> b; // Set the value of b to user input

if ((a < 0) && (b > 0)) {
	sign = -1;
} else if ((a > 0) && (b < 0)) {
	sign = -1;
} else sign = 1;

a = abs(a); // Set the value of a to absolute value of a
b = abs(b); // Set the value of b to absolute value of b

while (a >= b) { // While loop which runs as long as a is less than b
	a -= b; // Set a to a - b
	quotient++; // If a is less than b, add 1 to the quotient
}

quotient *= sign; // Set the sign of the quotient

cout << "a / b = " << quotient << endl; // Print out the quotient

  return 0;
}