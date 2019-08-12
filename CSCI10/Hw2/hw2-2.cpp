//Carson Hom, Hw 2.2, CSCI10-03
#include <iostream>
#include <string>
using namespace std;
int main(){

//2
int num; //Input variable
cout << "Input a number between 0 and 6 : " << endl; //Prompt user to input a number
cin >> num; //Assign user input to int num
switch (num) {
  case 0: cout << "Sunday" << endl; //If input equals 0, print out Sunday
  break;
  case 1: cout << "Monday" << endl; //If input equals 1, print out Monday
  break;
  case 2: cout << "Teusday" << endl; //If inut equals 2, print out Teusday
  break;
  case 3: cout << "Wednesday" << endl; //If input equals 3, print out Wednesday
  break;
  case 4: cout << "Thursday" << endl; //If input equals 4, print out Thursday
  break;
  case 5: cout << "Friday" << endl; //If input equals 5, print out Friday
  break;
  case 6: cout << "Saturday" << endl; //if input equals 6, print out Saturday
  break;
  default: cout << "Error, number is not within 0 and 6" << endl; //If input is not within 0 and 6, print out an error
}

return 0;
}
