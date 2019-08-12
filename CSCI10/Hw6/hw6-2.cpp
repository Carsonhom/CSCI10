#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void find_greater(int a[], int size, int n) // Function with return type void that takes in an array, size of array and int n and prints out all the numbers in the array which are greater than n
{
	int greater = 0; // Variable which store the total number of elements in array which are greater than n

	{
		int num = 0; // Temporary variable which equals greater
	for(int i = 0; i < size; i++) // For loop which runs size number of times
	{
		if(a[i] > n) // If element in array is larger than n, add one to num
		{
			num++;
		}
	}
	greater = num; // Set greater equal to num
	}

	int numGreater[greater]; // Initialize array with size greater to store elements of initial array that are larger than n
	int pos = 0; // Integer which controls the position of greater


	for(int i = 0; i < size; i++) // For loop which runs size amount of times
	{
		if(a[i] > n) // If element in initial array is larger than n, set numGreater[pos] equal to it
		{
			numGreater[pos] = a[i];
			pos++;
		}
	}

	cout << "The numbers greater than " << n << " are: ";
	for(int i = 0; i < greater; i++) // Print out all elements in numGreater
	{
		cout << numGreater[i] << " ";
	}
	cout << endl;
}

int main(){

int a[] = {30, 40, 12, 35, 56, 59, 60};
int size = 7, n = 30;
find_greater(a, size, n);

return 0;
}
