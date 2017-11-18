#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter the number of courses taken by the student: ";
	int courseCount;
	cin >> courseCount;
	int ** ptrarr = new int* [courseCount]; 
	int* numbersOfGrades= new int[courseCount];
	double* finals = new double[courseCount];
	for(int i = 0; i < courseCount; i++)
	{
		cout << "Enter number of grades received during course " << i + 1 << " and grades: ";
		int gradesNumber;
		cin >> gradesNumber;
		numbersOfGrades[i] = gradesNumber;
		ptrarr[i] = new int[gradesNumber];
		for(int curGradesNum = 0; curGradesNum < gradesNumber; curGradesNum++)
		{
			int grade;
			cin >> grade;
			ptrarr[i][curGradesNum] = grade;
		}
	}
	cout << endl;
	for(int i = 0; i < courseCount; i++)
	{
		finals[i] = 0;
		for(int j = 0; j < numbersOfGrades[i]; j++)
		{
			finals[i] += ptrarr[i][j];
		}
		finals[i] /= numbersOfGrades[i];
		cout.precision(2);
		cout << "Course " << i + 1 << ": final " << fixed << finals[i] << ", grades: ";
		for(int j = 0; j < numbersOfGrades[i]; j++)
		{
			cout << ptrarr[i][j] << " ";
		}
		cout << endl;
	}

	double overalFinal = 0;
	for(int i = 0; i < courseCount; i++)
	{
		overalFinal += finals[i];
	}
	overalFinal /= courseCount;
	cout << "Overal final " << overalFinal << endl;

	for(int i = 0; i < courseCount; i++)
		delete[] ptrarr[i];
	delete[] numbersOfGrades;
	delete[] finals;
	system("pause");
	return 0;
}