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

bool convertToLowestTerms(int& num, int& den) // Takes two reference variables numerator and denominator 
{
	int greatestcd = gcd(num, den); // Variable which contains the greatest common denominator of the two input variables
	if(den == 0) // Returns false if denominator is 0, otherwise return true
	{
		return false;
	} 
	else 
	{
		num /= greatestcd; // Set reference variable num to num divided by the gcd
		den /= greatestcd; // Set reference variable den to den divided by the gcd
		return true;
	}
}

int main(){
	int num; // Variable that stores the numerator
	int den; // Variable that stores the denominator
	cout << "Enter the numerator: " << endl; // Prompt user to enter numerator 
	cin >> num; // Set user input to num
	cout << "Enter the denominator: " << endl; // Prompt user to enter denominator
	cin >> den; // Set user input to den
	convertToLowestTerms(num, den); // Run convertToLowestTerms function with integers num and den
	cout << "The numerator is now " << num << " the denominator is now " << den << endl; // Print out results

	return 0;
}
