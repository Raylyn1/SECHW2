#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num;
	vector<int> Name;
	cout << "Enter number: ";
	cin >> num;
	Name.push_back(num);
	cout << "Enter another number: ";
	cin >> num;
	Name.push_back(num);
	cout << "Your numbers are " << Name[0]<< " and " << Name[1] << endl;
	system("pause");
	return 0;
}