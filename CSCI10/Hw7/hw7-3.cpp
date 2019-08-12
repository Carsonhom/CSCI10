#include <iostream>
#include <cmath>
using namespace std;

//A
bool isdigit(char c) { // Functio which returns true if character c is a digit
	if(c >= 48 && c <= 57) // If acii value of character falls between 48 and 52 return true
	{
		return true;
	}
	return false;
}

//B
int c_to_digit(char c) { // Converts char c to int
	int k; // Int which stores int value of c
	if(isdigit(c) == true) // If char c is a digit check its ascii value
	{
		for(int i = 0; i < 9; i++) 
		{
			if(c == (48 + i)) // When ascii value is found return equivalent integer
			{
				k = 0 + i; 
				return k; 
			}
		}
	}
	return -1; // If char is not a digit return -1
}

//C
int pow(int n, int ex) { // Function which returns the value of int n to the ex
	int ret = 1; 
	for(int i = 0; i < ex; i++)
	{
		ret = ret * n;
	}
	return ret;
}


int s_to_digit(string s) { 
	int str = 0; // Int equivalent of string s
	for(int i = 0; i < s.length(); i++) // For loop which loops for each element in string s 
	{
		str += pow(10, s.length() - 1 - i) * c_to_digit(s[i]); // str equals product of  10 to the power of the decimal place of element i in string s and element i in string s
	}
	return str;
}

int main(){

	char i, j; // Input chars
	string k; // Input string
	cout << "Function isdigit" << endl;
	cout << "Enter a character: ";
	cin >> i;

	if(isdigit(i) == true) // If char is a digit print out "The character is a digit", otherwise print out "The character is not a digit"
	{
		cout << "The character is a digit" << endl;
	} else cout << "The character is not a digit" << endl;
	
	cout << "---------------------" << endl;
	cout << "Function c_to_digit" << endl;
	cout << "Enter a character digit: ";
	cin >> j;
	cout << "Character " << j << " is now int " << c_to_digit(j) << endl;

	cout << "---------------------" << endl;
	cout << "Function s_to_digit" << endl;
	cout << "Enter a string of numbers: ";
	cin >> k;
	cout << "String " << k << " is now int " << s_to_digit(k) << endl;

	
return 0;
}
