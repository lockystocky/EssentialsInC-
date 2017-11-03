#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter number: ";
	int number;
	cin >> number;
	int banknotes[5] = {50, 20, 10, 5, 1};
	int values[5] = {0};
	for(int i = 0; i < 5; i++)
	{
		values[i] = number / banknotes[i];
		number %= banknotes[i];
	}
	for(int j = 0; j < 5; j++)
	{
		for(int i = 0; i < values[j]; i++)
		{
			cout << banknotes[j] << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}