#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

struct StudentInfo {
	string first;
	string last;
	string grade;
	double gpa;
};

void PrintStudent(StudentInfo s) {
	cout << s.first << " " << s.last << endl;
	cout << s.grade << endl;
	cout << s.gpa << endl;
}

int main(){
	ifstream ifile ("studentlist1.txt");
	if (ifile.fail()) exit(1);
	StudentInfo directory[1000];
	int index = 0;
	while (!ifile.eof())
	{
		// getline(ifile, directory[index].first, " ");
		// getline(ifile, directory[index])
		ifile >> directory[index].first;
		ifile >> directory[index].last;
		ifile >> directory[index].grade;
		ifile >> directory[index].gpa;
		index++;
	}
	for (int i = 0; i < index; i++)
	{
		PrintStudent(directory[i]);
	}



return 0;
}
