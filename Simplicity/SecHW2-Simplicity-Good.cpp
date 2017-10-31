#include<String>
#include <iostream>

using namespace std;
int main() {
	char answer = 'Y';
	while (answer != 'N') {
		cout << "Do you want to keep going? (Y/N): ";
		cin >> answer;
		if (answer != 'N' && answer != 'Y') {
			cout << "Please enter a \'Y\' or \'N\'\n";
		}
	}
	cout << "Done.\n";
	return 0;
}