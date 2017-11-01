#include<String>
#include <iostream>
#include <vector>

using namespace std;
int main() {
	const string pswrd = "password";
	const string rpswrd = "12345";
	const string username1 = "Joe";
	const string username2 = "Bob";
	const string username3 = "Abe";
	const string username4 = "root";
	const vector<int> data = { 1,2,3 };
	string name;
	string password;

	cout << "Enter username (-1 to exit): ";
	cin >> name;
	while (name != "-1") {
		//Checks for valid username
		if (name.compare(username1) == 0) {
			cout << "Enter the password: ";
			cin >> password;
			if (password.compare(pswrd) == 0) {
				cout << "Joe's data: ";
				cout << data[0] << "\n\n";
			}
			else {
				cout << "Incorrect password\n\n";
			}
		}
		else if (name.compare(username2) == 0) {
			cout << "Enter the password: ";
			cin >> password;
			if (password.compare(pswrd) == 0) {
				cout << "Bob's data: ";
				cout << data[1] << "\n\n";
			}
			else {
				cout << "Incorrect password\n\n";
			}
		}
		else if (name.compare(username3) == 0) {
			cout << "Enter the password: ";
			cin >> password;
			if (password.compare(pswrd) == 0) {
				cout << "Abe's data: ";
				cout << data[2] << "\n\n";
			}
			else {
				cout << "Incorrect password\n\n";
			}
		}
		else if (name.compare(username4) == 0) {
			cout << "Enter the password: ";
			cin >> password;
			if (password.compare(rpswrd) == 0) {
				cout << "root's data: ";
				cout << data[0] << ", " << data[1] << ", " << data[2] << "\n\n";
			}
			else {
				cout << "Incorrect password\n\n";
			}
		}
		else {
			cout << "Not a valid username.\n\n";
		}
		cout << "Enter username (-1 to exit): ";
		cin >> name;
	}

	return 0;
}