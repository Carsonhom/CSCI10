//Carson Hom, Hw 4.2, CSCI10-03
#include <iostream>
#include <cmath>
using namespace std;

void printPattern(int n, char c) 
{
	int spaces = ((n * 2) -2); // Initial number of spaces
	int chars = 0; // Number of characters to be added to each line
	for (int i = n; i > 0; i--) // For loop that controls number of rows 
	{
		for (int j = spaces; j > 0; j--) // For loop that places spaces before characters to ensure pyramid shape
		{
			cout << " "; 
		}
		for (int k = 1 + chars; k > 0; k--) // For loop that prints certain number of characters per line
		{
			cout << c << " ";
		}
		spaces -= 2;
		chars += 2;
		cout << "\n";
	}
}

int main() {
	int num; // Number of rows
	char c; // Character to be printed in pyramid
	cout << "Enter number of rows: " << endl; // Prompt user to input number of rows
	cin >> num; // Set num to user input
	cout << "Enter character: " << endl; // Prompt user to enter character
	cin >> c; // Set c to user input
	printPattern(num, c); // Run printPattern with inputs
  return 0;
}
