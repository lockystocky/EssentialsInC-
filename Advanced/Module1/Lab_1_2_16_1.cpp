#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);

	deque<int> d2;
	d2.push_back(4);
	d2.push_back(3);
	d2.push_back(2);
	cout << d1.front() + d2.front() << " ";
	for (int d: d1)
	{
		cout << d + d2.back() << " ";
		d2.pop_back();
	}
	system("pause");
	return 0;
}