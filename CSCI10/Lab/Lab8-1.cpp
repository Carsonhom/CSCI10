#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

struct Date{
	int d;
	int m;
	int y;
};

struct Item{
	string n;
	string a;
	double p;
	string t[20];
	Date dor;
};

void initializeItem(Item& it){
	int tsize;
	cout << "Enter Name: ";
	cin.ignore();
	getline(cin, it.n);
	cout << "Enter Author/Artist: ";
	getline(cin, it.a);
	cout << "Enter Price: ";
	cin >> it.p;
	cin.ignore();
	cout << "Enter Number of Chapters/Tracks (20 Max): ";
	cin >> tsize;
	cin.ignore();
	cout << "Enter Chapter/Track Names: ";
	for(int i = 0; i < tsize; i++){
		getline(cin, it.t[i]);
	}
	cout << "Enter Day/Month/Year: ";
	cin >> it.dor.d;
	cin >> it.dor.m;
	cin >> it.dor.y;
}

void printItem(Item it) {
	cout << it.n << endl;
	cout << it.a << endl;
	cout << it.p << endl;
	for(int i = 0; i < 20 || it.t[i] == "/n"; i++)
	{
		cout << it.t[i] << ", ";
	}
	cout << endl;
	cout << it.dor.d << "/" << it.dor.m << "/" << it.dor.y << endl;
}

int main(){
	int size;
	cout << "Enter Number of Items: ";
	cin >> size;
	Item it[size];
	for(int i = 0; i < size; i++){
		initializeItem(it[i]);
	}
	for(int i = 0; i < size; i++){
		printItem(it[i]);
	}

	return 0;
}

