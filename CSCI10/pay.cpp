//
//  pay.cpp
//  cs10-hw1
//
//  Created by Sukanya Manna on 09/19/18.
//

//This program calculates the user's gross pay

#include <iostream>
using namespace std;

int main() {
    //identifier declarations
    double hours;	//number of hours worked
    double rate;	//hourly pay rate
    double pay;		//gross pay

    //display prompts and get input
    cout << "How many hours did you work? " << endl;
    cin >> hours;
    cout << "How much do you get paid per hour? " << endl;
    cin >> rate;
    
    //calculations
    if(hours <= 40)
        pay = hours * rate;
    else
        pay = (hours - 40) * (1.5 * rate) + 40 * rate;
    
    //display results
    cout << "You earned $" << pay << endl;

    return 0;
}
