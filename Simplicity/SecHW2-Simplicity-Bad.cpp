#include<String>
#include <iostream>

using namespace std;
int main() {

	bool keepGoing = true;
	char answer;
	while (keepGoing == true) {
		cout << "Do you want to keep going? (Y/N): ";
		cin >> answer;
		if (answer == 'Y') {
			keepGoing = true;
		}
		else if (answer == 'N') {
			keepGoing = false;
		}
		else {
			cout << "You have not selected anything.\n";
		}
	}
	cout << "Done.\n";
	return 0;
}