#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Banknote
{
public: int value;
		int number;
		Banknote(int _val, int _number)
		{
			value = _val;
			number = _number;
		}
};

int GetMaxValue(vector<Banknote> b)
{
	int max = 0;
	for(int i = 0; i < b.size(); i++)
	{
		max += b[i].number * b[i].value;
	}
	return max;
}

int main()
{
	vector<Banknote> store;
	store.push_back(Banknote(10, 5));
	store.push_back(Banknote(20, 6));
	store.push_back(Banknote(50, 3));
	store.push_back(Banknote(100, 4));
	store.push_back(Banknote(200, 5));
	int sum1, sum2;
	cin >> sum1;
	cin >> sum2;

	if(sum1 % 10 != 0) 
		cout << "Incorrect amount of money. ";
	else if(sum1 > GetMaxValue(store))
	{
		cout << "Not enough money. ";
	}
	else
		cout << "Enough money. ";

	if(sum2 % 10 != 0) 
		cout << "Incorrect amount of money. " << endl;
	else if(sum2 > GetMaxValue(store))
	{
		cout << "Not enough money. " << endl;
	}
	else
		cout << "Enough money. " << endl;
	system("pause");
	return 0;
}