#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table;
	ip_table.push_back("127.0.0.1");
	ip_table.push_back("192.168.0.1");
	ip_table.push_back("192.168.1.100");
	ip_table.push_back("255.255.255.255");
	vector <string> ip_copy(ip_table);
	int num;
	cin >> num;
	if(num > ip_copy.size())
		cout << "Too big - value must be smaller than or equal to vector size." << endl;
	else
	{
		for(int i = 0; i < num; i++)
		{
			cout << ip_copy[i] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}