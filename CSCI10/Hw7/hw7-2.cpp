#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isVowel(char c) { // Function that checks whether a character is a vowel or not
	char arr[5] = {'a', 'e', 'i', 'o', 'u'}; // Array of all vowels
	for(int i = 0; i < 5; i++) // For loop which runs 5 times
	{
		if(c == arr[i]) // If character is equal to an element in the array, return true
		{
			return true;
		}
	}
	return false; 
}


string remove_vowels(string s) { // Function that removes the vowels from a string
	string cipher; // New string cipher which contains the original string without vowels
	for(int i = 0; i < s.length(); i++) // For loop which runs for each element in string s
	{
		if(isVowel(s[i]) != true) // If element i in string s is not a vowel, append it to sring cipher
		{
			cipher += s[i];
		}
	}
	return cipher; 
}

int main(){
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << remove_vowels(str) << endl;

return 0;
}
