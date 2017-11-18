#include <iostream>
using namespace std;

 int main(void)
 {
	 cout << "Enter a number N: ";
	 int N;
	 cin >> N;
	 long long result = 0;
	 for (int i = 1; i <= N; i++)
	 {
		 result += i;
	 }
	 cout << result << endl;
	 system("pause");
	 return 0;
 }