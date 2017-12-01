#include <iostream>
using namespace std;

int main(void) {
	const int MAX_SIDE_SIZE = 70;
	int n;
	cout << "Enter a positive integer value greater than 1: ";
	cin >> n;
	if (n < MAX_SIDE_SIZE)
	{
		cout << '+';
		for(int i = 0; i < (n -2); i++)
		cout << '-';
		cout << '+' << endl;
		for(int i = 0; i < (n - 2); i++) 
		{
		cout << '|';
		for(int j = 0; j < (n -2); j++)
		cout << ' ';
		cout << '|' << endl;
		}
		cout << '+';
		for(int i = 0; i < (n - 2); i++)
		cout << '-';
		cout << '+' << endl;
	}
	else 
	{
		cout << "Sorry, the side size is too big" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}