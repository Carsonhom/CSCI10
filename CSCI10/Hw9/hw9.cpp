//Carson Hom, Hw 9, CSCI10-03
#include<iostream>
#include<fstream>
using namespace std;

std::size_t main() 
{
	ifstream ifile1 ("data1.txt"); // ifstream for first text file
	ifstream ifile2 ("data2.txt"); // ifstream for second text file
	ofstream ofile ("data.txt"); // ofstream which merges other two text files
	if (ifile1.fail()) exit(1); // If connection between any fstream and respective text file fails, terminate the program 
	if (ifile2.fail()) exit(1);
	if (ofile.dail()) exit(1);
	char text[200]; // Array of characters which holds each line of text
	while (!ifile1.eof()) // As long as ifile1 hasn't reached the end of data1.txt
	{
		ifile1.getline(text, 200); // Take in line
		ofile << text << " "; // Write the line onto data.txt
	}
	while (!ifile2.eof()) // As long as ifile2 hasn't reached the end of data2.txt
	{
		ifile2.getline(text, 200); // Take in the line
		ofile << text << " "; // Write the line onto data.txt
	}


return 0;
}