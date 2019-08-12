// Carson Hom, Hw 3.1, CSCI10-03
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

int startPoint; // Starting point of the series
int endPoint; // Ending point of the series
int series; // Value of incrementation for the series
int sum;

cout << "Enter the starting point of the series: " << endl;
cin >> startPoint; // Set the value of startPoint from user input
cout << "Enter the ending point of the series: " << endl;
cin >> endPoint; // Set the value of endPoint from user input
cout << "enter the size of each incrementation: " << endl;
cin >> series; // Set the value of series from user input

for (int i = startPoint; i <= endPoint; i += series){ // For loop which computes the value of the sum 
	sum += i; // On each loop add value of series to sum
}

cout << sum << endl; // Print out the final value of sum

  return 0;
}