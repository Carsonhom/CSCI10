#include <iostream>
#include <cmath>
using namespace std;

bool search_char(char c[], int size, char b) // Function search_char which takes in an array of characters, size of array and character b and returns true if character b is in the array
{
	bool ans = false; // Bool which stores true if chracter b is in array and flase otherwise
	for(int i = 0; i < size; i++) // For loop which runs size times and sets ans to true if b is an element in the array
	{
		if(b == c[i])
		{
			ans = true;
			break;
		}
	}

	if(ans == true) // If statement which prints out different things depending on whether ans is true or false
	{
		cout << "The character " << b << " is found in the array!" << endl;
	}
	else cout << "The character " << b << " is not found in the array!" << endl;

	return ans; // Return ans
}

int main(){
char c[] = {'a', 'f', 'v', 's', 'd'};
int size = 5;
char b; // Char which will be compared to array c

cout << "Enter a character: " << endl; // Prompt user to input a character
cin >> b; // Set b to input

search_char(c, size, b); // Run function search_char which takes in c[], size and b


return 0;
}
