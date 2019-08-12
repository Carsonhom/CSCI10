#include <iostream>
#include <cmath>
using namespace std;

struct Fraction { // Fraction which contains a numerator and denominator
double numerator;
double denominator;
};

void printFraction(Fraction f) { // Prints the numerator and denominator of Fraction
	cout << f.numerator << "/" << f.denominator << endl;
}

Fraction mult(Fraction f1, Fraction f2) { // Multiplies the two fractions
	Fraction product;
	product.numerator = f1.numerator * f2.numerator; // Multiply both numerators
	product.denominator = f1.denominator * f2.denominator; // Multiply both denominators
	return product;
}

Fraction add(Fraction f1, Fraction f2) {
	Fraction sum;
	sum.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator); // Multiply numerators by the other's denominator and add the results
	sum.denominator = (f1.denominator * f2.denominator) + (f2.denominator * f1.denominator); // Multiply denominators by the other's denominator and add the results
	return sum;
}


int main(){
Fraction f1;
Fraction f2;

cout << "For fraction 1, enter a numerator: "; // Ask users for numerators and denominators for Fraction f1 and f2
cin >> f1.numerator;
cout << "For fraction 1, enter a denominator: ";
cin >> f1.denominator;
cout << "For fraction 2, enter a numerator: ";
cin >> f2.numerator;
cout << "For fraction 2, enter a denominator: ";
cin >> f2.denominator;

cout << "Fraction 1 is: "; // Print out fraction 1 
printFraction(f1);
cout << "Fraction 2 is: "; // Print out fraction 2
printFraction(f2);

cout << "The product of fraction 1 and fraction 2 is: "; // Print out the product of fraction 1 and 2
printFraction(mult(f1, f2));
cout << "The sum of fraction 1 and fraction 2 is: "; // Print out the sum of fraction 1 and 2
printFraction(add(f1, f2));

return 0;
}
