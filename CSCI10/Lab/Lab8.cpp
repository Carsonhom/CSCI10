#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

#define MAX_LENGTH 20

struct Date {
	int d;
	int m;
	int y;
};

struct Item {
string name;
string artist;
double price;
string tracks[MAX_LENGTH];
Date dor;
};

void printItem(Item it) {
	cout << it.name << endl;
	cout << it.artist << endl;
	cout << it.price << endl;
	int i = 0;
	while (it.tracks[i] != "" && i < MAX_LENGTH)
	{
		cout << it.tracks[i] << ", ";
		i++;
	}
	cout << "\b\b  " << endl;
	cout << it.dor.d << "/" << it.dor.m << "/" << it.dor.y << endl;
}

void initializeItem(Item& it) {
	cout << "Enter name: ";
	getline(cin, it.name);
	cout << "Enter artist / author: ";
	getline(cin, it.artist);
	cout << "Enter price: ";
	cin >> it.price;
	cin.ignore();
	cout << "Enter names of tracks: " << endl;
	int i = 0;
	do
	{
		getline(cin, it.tracks[i]);
		i++;
	}
	while (it.tracks[i-1] != "" && i < MAX_LENGTH);
	cout << "Enter day: ";
	cin >> it.dor.d;
	cout << "Enter month: ";
	cin >> it.dor.m;
	cout << "Enter year: ";
	cin >> it.dor.y;
}

double fillCart(Item a[], int size) {
		string input;
		double cost;
		for (int i = 0; i < size; i++)
		{
			cout << "Item: " << a[i].name << ", by " << a[i].artist << " for $" << a[i].price << endl;
			cout << "Would you like to \"purchase\", see more \"details\" or \"pass\"?" << endl;
			cin >> input;
			if (input == "purchase")
			{
				cost += a[i].price;
			}
			else if (input == "details")
			{
				cout << "Name: " << a[i].name << " by the " << a[i].artist << endl;
				cout << "Price: " << a[i].price << endl;
				cout << "Contents: ";
				int k = 0;
				while (a[i].tracks[k] != "" && k < MAX_LENGTH)
				{
					cout << a[i].tracks[k] << ", ";
					k++;
				}
				cout << "\b\b  " << endl;
				cout << "Released: " << a[i].dor.d << "/" << a[i].dor.m << "/" << a[i].dor.y << endl;
				cout << "Would you like to \"purchase\" or \"pass\"?" << endl;
				cin >> input;
				if (input == "purchase")
				{
					cost += a[i].price;
				}
			}			
		}
		cout << "Total cost: " << cost << endl;
		return cost;
}


int main(){
string a = "apples";
string b = "pears";
cout << a.compare(b) << endl;
Item inventory[3];		
Item it1 = {"Communication", "Junko Yagami", 14.99, {"Imagination", "チーター", "Communication", "1984", "Miss D.J.", "カシミヤのほほえみ", "ジョハナスバーグ", "どんな手段使っても", "Believing", "Reaching Out"}, {10, 02, 1985}};
Item it2 = {"America (2)", "America", 25.00, {"Riverside", "Sandman", "Three Roses", "Children", "A Horse With No Name", "Here", "I Need You", "Rainy Day", "Never Found The Time", "Clarice", "Donkey Jaw", "Pigeon Song"}, {26, 12, 1971}};
Item it3 = {"Led Zeppelin", "Led Zeppelin", 9.99, {"Good Times Bad Times", "Babe I'm Gonna Leave You", "You Shook Me", "Dazed And Confused", "Your Time Is Gonna Come", "Black Mountain Side", "Communication Breakdown", "I Can't Quit You Baby", "How Many More Times"}, {12, 01, 1969}};
inventory[0] = it1;
inventory[1] = it2;
inventory[2] = it3;

Item it;
initializeItem(it);
printItem(it);
fillCart(inventory, 3);

return 0;
}
