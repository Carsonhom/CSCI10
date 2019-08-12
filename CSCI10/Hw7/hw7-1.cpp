#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string strReverse(string str) { 
	string rev; // String which contains the reverse of str
	for (int i = 0; i < str.length(); i++) // For loop which runs for each character in str
	{
		rev += str[str.length() - 1 - i]; // Add the next to last character of str to rev
	}
	return rev;
}

int main(){
string str;
cout << "Enter a string: ";
getline(cin, str);
cout << "Reversed string: " << strReverse(str) << endl;

return 0;
}
