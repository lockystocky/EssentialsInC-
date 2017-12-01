#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void) {
	int maxball;
	int ballsno;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));
	int* ballsArray = new int[ballsno];
	bool alreadyExist = false;
	int rnd;
	for(int i = 0; i < ballsno; i++)
	{
		rnd = rand() % maxball + 1;
		do{
			alreadyExist = false;
			rnd = rand() % maxball + 1;
			for(int j = 0; j < i; j++)
			{
				if(ballsArray[j] == rnd) alreadyExist = true;
			}
		} while (alreadyExist);
		ballsArray[i] = rnd;

	}
	for(int i = 0; i < ballsno; i++)
	{
		cout << ballsArray[i] << " ";
	}
	cout << endl;
	delete[] ballsArray;
	system("pause");
	return 0;
}