#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

//B2
// int die(int n) 
// {
// 	srand(time(NULL));
// 	int r = (rand() % n + 1);
// 	return r;
// }

//B4
bool is_even(int n) 
{
	if (n % 2 == 0)
	{
		return true;
	} else 
	{
		return false;
	}
}

int evens_between(int n, int m)
{
	int evens;
	for (int i = n; i <= m; i++)
	{
		if (is_even(i) == true)
		{
			evens++;
		} 
	}
	return evens;
}

int main() {

	//A4
	// for (int i = 0; i < 5; i++) 
	// {
	// 	for (int j = 3; j > 0; j--) 
	// 	{
	// 		cout << i * j << " ";
	// 	}
	// }


	//B2
	// int num;
	// cout << "Enter number: " << endl;
	// cin >> num;
	// cout << is_even(num) << endl;

	//B4
	int num1;
	int num2;
	cout << "Enter a number: " << endl;
	cin >> num1;
	cout << "Enter a larger number number: " << endl;
	cin >> num2;
	cout << evens_between(num1, num2) << endl;



  return 0;
}