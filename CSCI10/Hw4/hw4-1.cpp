//Carson Hom, Hw 4.1, CSCI10-03
#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n) 
{
	int rem; // Remainder of n % 10
	int reversedN = 0; // input variable n reversed
	while (n != 0)
	{
		rem = n % 10; // Set rem as remainder of n divided by 10
		reversedN = reversedN * 10 + rem; // Set rem as next digit in reversedN
		n /= 10; // Remove the final digit of int
	}
	return reversedN;
}

int main() {
	int num; // Input variable
	cout << "Enter 10 digits: " << endl; // Prompt user to input 10 variable
	cin >> num; // Set num to user input
	cout << reverse(num) << endl; // Print out reverse of num
  return 0;
}