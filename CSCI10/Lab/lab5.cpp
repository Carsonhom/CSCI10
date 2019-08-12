#include <iostream>
#include <cmath>
using namespace std;

void maxAVG() 
{
	double val = 0, total = 0, count = 0, max = -1; 
	cout << "Please enter a value, or -1 when you're done." << endl;
	cin >> val;
	while(val != -1)
	{
		total += val;
		count++;
		if(val > max)
		{
			max = val;
		}
		cout << "Please enter a value, or -1 when you're done." << endl;
		cin >> val;
	}
	cout << "The average is " << total/count << endl;
	cout << "The max is " << max << endl;
}

int main(){

maxAVG();

return 0;
}
