#include <iostream>
using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);	
	int* p = vector;
	int minElement = *p;
	for (int i=0; i<n; i++) 
	{
		if(*p < minElement) minElement = *p;
		p++;
	}
	cout << minElement << endl;
	system("pause");
	return 0;
}