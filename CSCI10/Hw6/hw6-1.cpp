#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){


double rainfall[12]; // Array to store amount of rainfall each month
string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; // Array parallel to rainfall[] which stores names of each month
double ttl, avg; // ttl stores total amount of rainfall, avg stores average rainfall per month
int max =0, min = 0; //max stores location of highest value in rainfall[], min stores location of lowest value in rainfall[]

for(int i = 0; i < 12; i++) // For loop which runs 12 times
{
	
	do
	{
		cout << "Enter the rainfall for " << month[i] << ": "; // Prompts user to enter value for rainfall
		cin >> rainfall[i]; // set element i in array rainfall[] to user input

	}
	while(cin && rainfall[i] < 0); // If input is negative, prompt user to input another value  
	
	ttl += rainfall[i]; // Add the input to total
}

avg = (ttl / 12); // avg equals total divided by 12

for(int i = 0; i < 12; i++) // For loop which runs 12 times and checks each element of rainfall[]
{
	if(rainfall[i] > rainfall[max]) // If element i in rainfall is larger than current max, store its location
	{
		max = i;
	}
	else if(rainfall[i] < rainfall[min]) // If element i in rainfall is smaller than current min, store its location
	{
		min = i;
	}
}

cout << "Total rainfall of the year: " << ttl << endl; // Print out ttl
cout << "Average monthly rainfall: " << avg << endl; // Print out avg
cout << month[max] << " has the highest rainfall." << endl; // Print out month corresponding to highest value in rainfall[]
cout << month[min] << " has the lowest rainfall." << endl; // Print out month corresponding to lowest value in rainfall[]

return 0;
}
