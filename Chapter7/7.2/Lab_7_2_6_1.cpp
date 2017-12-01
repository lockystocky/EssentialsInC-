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

class SimpleClass  {
private:
	int value;
	int min;
	int max;
public: SimpleClass(int _value, int _min, int _max)
		{			
			min = _min;
			max = _max;
			if(_value < _min || _value > _max)
				throw Exception("Value exceed limit.");
			value = _value;
		}
		void Add(int par)
		{
			if((value + par) > max)
				throw Exception("Value could exceed limit.");
			value += par;
		}
		void Subtract(int par)
		{
			if((value - par) < min)
				throw Exception("Value could exceed limit.");
			value -= par;
		}	
		string ToString()
		{
			return to_string(value);
		}
};





int main(void) {
	SimpleClass a = SimpleClass(5, 0, 10);
	SimpleClass b = SimpleClass(9, 0, 100);
	try
	{
		a.Add(15);
	}
	catch (Exception exp)
	{
		cout << exp.msg << endl;
	}
	try
	{
		a.Subtract(15);
	}
	catch (Exception exp)
	{
		cout << exp.msg << endl;
	}
	try
	{
		b.Subtract(15);
	}
	catch (Exception exp)
	{
		cout << exp.msg << endl;
	}
	try
	{
		b.Add(15);
	}
	catch (Exception exp)
	{
		cout << exp.msg << endl;
	}
	cout << a.ToString() << endl;
	cout << b.ToString() << endl;
	system("pause");
	return 0;
}