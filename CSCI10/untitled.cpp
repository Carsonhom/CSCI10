#include <iostream>
#include <cmath>
using namespace std;

int main(){

double temps[] = {1, 2, 3};
double avgTemp, total;
int k, n = 3;

avgTemp = 0;
for(k = 0; k < n; k++) {
	avgTemp += temps[k];
	total++;
}
avgTemp = avgTemp/total;

cout << avgTemp << endl;
return 0;
}
