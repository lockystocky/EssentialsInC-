#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <float> v(5);
	float val;
	cin >> val;
	v[0] = val;
	v[1] = val + 5;
	v[2] = val + 0.5;
	v[3] = val + 2.3;
	v[3] = val + 4.7;
	float sum = 0.0;
	for(int i = 0; i < v.size(); i++)
	{
	    sum += v[i];
	}
	float avg =  sum / v.size();
	cout << "sum: " << sum << " avg " << avg << endl;
	
	return 0;
}