#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	vector<int> v2;
	v2.push_back(5);
	v2.push_back(2);
	v2.push_back(6);
	v2.push_back(4);
	for (auto it1 = v1.rbegin(); it1 != v1.rend(); ++it1)
	{
		for (auto it2 = v2.begin(); it2 != v2.end(); it2++)
		{
			cout << *it1 + *it2 << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}