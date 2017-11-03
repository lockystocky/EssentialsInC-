#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
	if(num == 0) return false;
	bool prime = true;
	for(int i = 2; i < num; i++)
	{
		if((num % i) == 0) prime = false;
	}
	return prime;
}
int main(void) {
	for(int i = 0; i <= 21; i++)
	if(isPrime(i))
	cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}