#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int phone;

public:
	void printName();
	void setName(string);
	void setPhone(int);
};

void Person::printName(){
	cout << name << endl;
}

void Person::setName(string Name) {
	name = Name;
}

void Person::setPhone(int Phone) {
	phone = Phone;
}