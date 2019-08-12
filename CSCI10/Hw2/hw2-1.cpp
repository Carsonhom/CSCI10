//Carson Hom, Hw 2.1, CSCI10-03
#include <iostream>
#include <string>
using namespace std;
int main(){

//1a.
//Pseudocode
// 1) Print out “Input age of passenger: “
// 2) Take in the age of the passenger
// 3) Check if the age of the passenger is less than or equal to 5, if this is true reduce the price of the ticket by 100% and print out new price, if not move on to next step.
// 4) Check if the age of the passenger is greater than five and less than or equal to 12, if true reduce the price of the ticket by 50% and print out new price, if not move on to the next step.
// 5) Check if the age of the passenger is greater than 12 and less than or equal to 26, if true reduce the price of the ticket by 10% and print out new price, if not move on to the next step.
// 6) Check if the age of the passenger is greater than 60, if true reduce the price of the ticket by 25% and print out new price, if not move on to the next step.
// 7) Do not apply any discount to the price of the ticket and print out original price.



//1b.
int passAge; //Integer variable for passengers age
double tickPrice = 13.50; //Standard price for ticket
cout << "Input passengers age : " << endl; //Prompt the passenger for their age
cin >> passAge; //Assign variable passAge to passengers age

if (passAge <= 5) { //Check if passAge is less than or equal to 5
  cout << "You are eligible for a 100% discount, your ticket is $" << tickPrice - (tickPrice * 1) << endl; //Reduce price of ticket by 100%
} else if ((passAge > 5) && (passAge <= 12)) { //Check if passAge is greater than 5 and less than or equal to 12
  cout << "You are eligible for a 50% discount, your ticket is $" << tickPrice - (tickPrice * .5)  << endl; //Reduce price of ticket by 50%
} else if ((passAge > 12) && (passAge <= 26)) { //Check if passAge is greater than 12 and less than or equal to 26
  cout << "You are eliglible for a 10% discount, your ticket is $" << tickPrice - (tickPrice * 0.1) << endl; // Reduce price of ticket by 10%
} else if (passAge > 60) { //Check if passAge is greater than 60
  cout << "You are eligible for a 25% discount, your ticket is $" << tickPrice - (tickPrice * 0.25) << endl; //Reduce price of ticket by 25%
} else cout << "Your ticket is $" << tickPrice << endl; //If none of the age requirements are met

return 0;
}
