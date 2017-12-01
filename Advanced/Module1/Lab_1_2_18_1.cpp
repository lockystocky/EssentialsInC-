#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> elements1;
	elements1.push_back(1);
	elements1.push_back(2);
	elements1.push_back(3);
	list<int> elements2;
	elements2.push_back(5);
	elements2.push_back(8);
	elements2.push_back(6);
	cout << elements1.front() + elements2.front() << " ";
	elements1.remove(2);
	elements2.remove(8);
	cout << elements1.back() + elements2.back() << " ";
	elements1.pop_back();
	elements2.pop_back();
	elements2.insert(elements2.begin(), 7);
	cout << elements1.back() + elements2.back() << " ";
	elements2.pop_back();
	cout << elements1.back() + elements2.back() << " ";
	return 0;
}