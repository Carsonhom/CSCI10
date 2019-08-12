#include <iostream>
#include <string>
using namespace std;
int main(){

//4
int a = 5;
int b = 4;
int c = 3;

if (a < b || a < c && b > c)
cout << "YES" << endl;
else
cout << "NO" << endl;
cout << a + b % c << endl;

return 0;
}
