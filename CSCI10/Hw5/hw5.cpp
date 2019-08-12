#include <iostream>
using namespace std;
int global;
void f1(int);
void f2(int &);
void f1(int n) {
n += global;
}
void f2(int & n) {
n += global;
}
int main() {
cout << global++ << endl;
{
int global(100);
cout << ++global << endl;
}
cout << global << endl;
int local(10);
cout << local << endl;
{
int local(20);
cout << local + global << endl;
}
cout << local + global << endl;
f1(local);
cout << local << endl;
f1(global);
cout << global << endl;
f2(local);
cout << local << endl;
f2(global);
cout << global << endl;
return 0;
}