#include <iostream>
#include <string>
using namespace std;
//add your own exception class here
//add functions code here

class Exception {
public:
	string msg;
	Exception(string txt) { msg = txt;}
};

class Matrix {
public:
	int rowCount;
	int colCount;
	int** matrix;
	Matrix(int _rowCount, int _colCount)
	{
		rowCount = _rowCount;
		colCount = _colCount;
		matrix = new int*[rowCount];
		for(int i = 0; i < rowCount; i++)			
		{
			matrix[i] = new int[colCount];
			
		}

		for(int i = 0; i < rowCount; i++)
			for(int j = 0; j < colCount; j++)
			{	
				matrix[i][j] = 0;
			}

	}
	void AddValue(int _rowCount, int _colCount, int value)
	{
		if(_rowCount > rowCount || _colCount > colCount)
			throw Exception("Index out of range exeption.");
		matrix[_rowCount][_colCount] = value;
	}
	int GetValue(int _rowCount, int _colCount)
	{
		if(_rowCount > rowCount || _colCount > colCount)
			throw Exception("Index out of range exeption.");
		return matrix[_rowCount][_colCount];
	}
	void Print()
	{
		for(int i = 0; i < rowCount; i++)
		{
			for(int j = 0; j < colCount; j++)
				cout << matrix[i][j] << " ";
			cout << endl;
		}
	}
};

Matrix AddMatrixes(Matrix m1, Matrix m2)
{
	if(m1.colCount != m2.colCount || m1.rowCount != m2.rowCount)
		throw Exception("Matrices don't fit");
	Matrix resultMatrix(m1.rowCount, m1.colCount);
	for(int i = 0; i < m1.rowCount; i++)
		for(int j = 0; j < m1.colCount; j++)
			resultMatrix.AddValue(i, j, m1.GetValue(i, j) + m2.GetValue(i, j));
	return resultMatrix;

}

void PrintMatrix(Matrix m)
{
	for(int i = 0; i < m.rowCount; i++)
		{
			for(int j = 0; j < m.colCount; j++)
			{
				cout << m.matrix[i, j] << " " << endl;
			}
			cout << endl;
	}
	
}





int main(void) {
	int m1X = 2, m1Y = 2, m2X = 2, m2Y = 2, m3X = 3, m3Y = 3;
	Matrix m1 = Matrix(m1X, m1Y);
	Matrix m2 = Matrix(m2X, m2Y);
	Matrix m3 = Matrix(m3X, m3Y);
	try
	{		
		Matrix m1Plusm2 = AddMatrixes(m1, m2);
		m1Plusm2.Print();
	}
	catch(Exception exp)
	{
		cout << exp.msg << endl;
	}
	try
	{		
		Matrix m2Plusm3 = AddMatrixes(m2, m3);
		m2Plusm3.Print();
	}
	catch(Exception exp)
	{
		cout << exp.msg << endl;
	}
	try
	{		
		Matrix m1Plusm3 = AddMatrixes(m1, m3);
		m1Plusm3.Print();
	}
	catch(Exception exp)
	{
		cout << exp.msg << endl;
	}
	system("pause");
	return 0;
}