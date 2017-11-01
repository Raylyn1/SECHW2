#include<String>
#include <iostream>
#include "Object.h"

using namespace std;
int main() {
	string name;
	int ID;
	cout << "Enter a name: ";
	cin >> name;
	cout << "Enter an ID: ";
	cin >> ID;
	Person a;
	a.setName(name);
	a.setID(ID);
	cout << "Person ";
	a.printName();
	cout << " has ID ";
	a.printID();
	cout << endl;

	system("pause");
	return 0;
}