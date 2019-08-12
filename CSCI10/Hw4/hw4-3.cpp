//Carson Hom, Hw 4.3, CSCI10-03
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int x, int y) // Returns the greatest common denominator of two numbers
{
	int temp; // Variable that stores value of y
	while(y > 0) 
	{
		temp = y; // Set temp equal to y
		y = x % y; // Set y equal to remainder of x / y
		x = temp; // Set x equal to temp
	}
	return x; // return gcd
}

int main() {
	int a, b, c; // Create integer a and b to store user input and c to store gcd of a and b
	cout << "Enter a number: " << endl; // Prompt user for input
	cin >> a; // Set a to user input
	cout << "Enter another number: " << endl; // Prompt user for another input
	cin >> b; // Set b to user input
	c = gcd(a, b); // Set c to gcd of a and b
	cout << "The greatest common denominator is: " << c << endl; // Print out value of c

  return 0;
}


