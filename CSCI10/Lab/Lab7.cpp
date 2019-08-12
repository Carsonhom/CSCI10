#include <iostream>
#include <string>

using namespace std;

string substring(string str, int pos, int length)
{
	string sub;
	for(int i = pos; i < (pos + length); i++)
	{
		sub += str[i];
	}
	return sub;
}

int find(string dna, string protein)
{
	for(int i = 0; i < dna.length(); i++)
	{
		if(substring(dna, i, protein.length()) == protein)
		{
			return i;
		}
	}
	return -1;

} 

string encrypt(string in, int shift)
{
	string shft;
	for(int i = 0; i < in.length(); i++)
	{
		if(in[i] + shift <= 122)
		{
			shft += (in[i] + shift);
		}
		else shft += (96 + (shift - (122 - in[i])));
	}
	return shft;
}

int main() {

// string dna = "ATGCAGAAAGCTACGATCAATGATCGATCAATGGAT";
// string protein = "AATG";
// cout << find(dna, protein) << endl;

cout << encrypt("cat", 3) << endl;
cout << encrypt("zoo", 3) << endl;

	return 0;
}