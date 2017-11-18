#include <iostream>
using namespace std;

int main(void)
{
	cout << "MENU:\n0 - exit\n1 - addition\n2 - subtraction\n" 
         << "3 - multiplication\n4 - division\nYour choice? ";
	int operationNumber;
	cin >> operationNumber;
	while(operationNumber != 0)
	{
		cout << "Enter first number: ";
		int x;
		cin >> x;
		cout << "Enter second number: ";
		int y, result = 0;
		cin >> y;
		switch ( operationNumber ) {
			case 1:
			  {
				  result = x + y;
				  cout << "Result: " << result << endl;
			  }
			  break;
			case 2:
			  {
				  result = x - y;
				  cout << "Result: " << result << endl;
			  }
			  break;
			case 3:
			 {
				  result = x * y;
				  cout << "Result: " << result << endl;
			  }
			  break;
			  case 4:
				  {
			          if(y!= 0) 
					  {
						  result = x / y;
						  cout << "Result: " << result << endl;
					  }
					  else
					  {
						  cout << "Cannot divide by zero!" << endl;
					  }
				  }
			  break;
		}
		cout << "MENU:\n0 - exit\n1 - addition\n2 - subtraction\n" 
         << "3 - multiplication\n4 - division\nYour choice? ";
		cin >> operationNumber;
	}
	cin.get();
	cin.get();
	return 0;
}