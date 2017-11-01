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
	void setName(string);
	void setID();
};

void Person::printName(){
	cout << name;
}

void Person::setName(string Name) {
	name = Name;
}

void Person::setID() {
	ID = rand();
}