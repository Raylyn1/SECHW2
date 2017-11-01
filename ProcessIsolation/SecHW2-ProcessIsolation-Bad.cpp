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
	Name[0] = num + Name[0];
	cout << "Your numbers are " << Name[0] - num << " and " << num << endl;
	system("pause");
	return 0;
}