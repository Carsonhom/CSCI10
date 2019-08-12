#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

double average(double arr[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total / size;
}

int main(){
ifstream ifile;
ofstream ofile ("score-results.txt");
ifile.open("psych-round2-scores2.txt");
if (ifile.fail()) 	exit(1);
if (ofile.fail()) 	exit(1);

double scores[1000];
int index = 0;
while (!ifile.eof())
{
	ifile >> scores[index];
	index++;
}
ofile << average(scores, index);
double avg = average(scores, index);
for (int i = 0; i < index; i++)
{
	if (scores[i] > avg) ofile << scores[i] << endl;
}
ifile.close();
ofile.close();



return 0;
}
