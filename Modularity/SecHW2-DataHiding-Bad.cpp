#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string name;
	vector<string> Name[2];
	cout << "Enter name: ";
	cin >> name;
	Name->push_back(name);
	cout << "Person " << Name->back() << " has an ID assigned based on the vector.\n";
	system("pause");
	return 0;
}