#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int ID;

public:
	void printName();
	void printID();
	void setName(string);
	void setID(int);
};

void Person::printName() {
	cout << name;
}

void Person::setName(string Name) {
	name = Name;
}

void Person::setID(int id) {
	ID = id;
}

void Person::printID() {
	cout << ID;
}