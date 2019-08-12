//Carson Hom, Hw 2.3, CSCI10-03
#include <iostream>
#include <string>
using namespace std;
int main(){

//3
double base; //Double for triangle base
double height; //Double for triangle height
cout << "Enter triangle's base : " << endl; //Prompt user for base variable
cin >> base; //Take in base value
cout << "Enter triangle's height : " << endl; //Prompt user for height variable
cin >> height; //Take in the height value
cout << "The area of the triangle is " << (base * height) / 2 << endl; //Print out the area of the triangle using the equation (b*h)/2

return 0;
}
