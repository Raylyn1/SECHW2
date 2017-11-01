#include<String>
#include <iostream>
#include "Object.h"

using namespace std;
int main() {
	string name;
	cout << "Enter a name: ";
	cin >> name;
	Person a;
	a.setName(name);
	a.setID();
	cout << "Person ";
	a.printName();
	cout << " has a random ID.\n";

	system("pause");
	return 0;
}