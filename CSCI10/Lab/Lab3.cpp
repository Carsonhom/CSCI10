#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define PI 3.141592653897

int main() {

//A2
// double angl, v, yin;
// double g = 9.81;
// cout << "Enter value for theta in degrees: " << endl;
// cin >> angl;
// cout << "Enter value for initial velocity: " << endl;
// cin >> v;
// cout << "Enter value for initial y position: " << endl;
// cin >> yin;
// double x = 0;
// while (x <= 9) {
// 	double y = yin + (x * tan(angl * PI / 180.0)) - ((g * pow(x, 2)) / (2 * pow((v * cos(angl * PI / 180.0)), 2)));
// 	cout << "(" << x << ", " << y << ")" << endl;
// 	x++;
// }


//A4
// double angl, v, yin;
// double g = 9.81;
// cout << "Enter value for theta in degrees: " << endl;
// cin >> angl;
// cout << "Enter value for initial velocity: " << endl;
// cin >> v;
// cout << "Enter value for initial y position: " << endl;
// cin >> yin;
// for (double x = 0; x <= 9; x++) {
// 	double y = yin + (x * tan(angl * PI / 180.0)) - ((g * pow(x, 2)) / (2 * pow((v * cos(angl * PI / 180.0)), 2)));
// 	cout << "(" << x << ", " << y << ")" << endl;
// }


//A6
// double angl, v, yin;
// double g = 9.81;
// cout << "Enter value for theta in degrees: " << endl;
// cin >> angl;
// cout << "Enter value for initial velocity: " << endl;
// cin >> v;
// cout << "Enter value for initial y position: " << endl;
// cin >> yin;
// double x = 0;
// double y;
// while (y >= 0) {
// 	y = yin + (x * tan(angl * PI / 180.0)) - ((g * pow(x, 2)) / (2 * pow((v * cos(angl * PI / 180.0)), 2)));
// 	cout << "(" << x << ", " << y << ")" << endl;
// 	x++;
// 	y = yin + (x * tan(angl * PI / 180.0)) - ((g * pow(x, 2)) / (2 * pow((v * cos(angl * PI / 180.0)), 2)));
// }


//A8
double angl, v, yin;
double g = 9.81;
cout << "Enter value for theta in degrees: " << endl;
cin >> angl;
cout << "Enter value for initial velocity: " << endl;
cin >> v;
cout << "Enter value for initial y position: " << endl;
cin >> yin;
double y;
for (double x = 0; y >= 0;) {
	y = yin + (x * tan(angl * PI / 180.0)) - ((g * pow(x, 2)) / (2 * pow((v * cos(angl * PI / 180.0)), 2)));
	cout << "(" << x << ", " << y << ")" << endl;
	x++;
	y = yin + (x * tan(angl * PI / 180.0)) - ((g * pow(x, 2)) / (2 * pow((v * cos(angl * PI / 180.0)), 2)));
}
  return 0;
}
