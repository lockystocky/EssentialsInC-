#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int size;
	cin >> size;
	if(size % 2 == 1) size++;

	vector<int> v1;
	vector<int> v2;
	for(int i = 1; i <= size; i++)
	{
		if(i % 2 == 0) v1.push_back(i);
		if(i % 2 == 1) v2.push_back(i);
	}
	for (auto it1 = v2.begin(); it1 != v2.end(); ++it1)
	{
		for (auto it2 = v1.begin(); it2 != v1.end(); ++it2)
	    {
			cout << *it1 + *it2 << " ";
		}
	}
	for (auto it1 = v2.rbegin(); it1 != v2.rend(); ++it1)
	{
		for (auto it2 = v1.rbegin(); it2 != v1.rend(); ++it2)
	    {
			cout << *it1 + *it2 << " ";
		}
	}
	system("pause");
	return 0;
}