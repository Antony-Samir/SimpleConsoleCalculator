#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int inputNumber(long double &num1, long double &num2, char &operation);

int main()
{//system based on using numbers only
	system("Color 0D");

	cout << "Welcome to the calculator program v.1.0 written by Dr_Tony" << endl;
	cout << "**********************************************************" << endl;

	do
	{//Do loop is used so that the program can be used more then one time //without exiting the run screen
		cout << endl;
		long double num1 = -1000000, num2 = -1000000; //declaration for 2 numbers
		char operation; //declare for the operation
		char choice = 0;

		cout << "Please enter an operation to make on 2 numbers (+  -  *  /)  ";
		cin >> operation;
		cout << endl;

		switch (operation)
		{
		case'+':
			//inputNumber(num1, num2, operation);
			if (inputNumber(num1, num2, operation) == 0)
			{
				return 0;
			}
			cout << "Result: (" << num1 << " + " << num2 << ") = " << num1 + num2 << endl;
			break;
		case'-':
			//inputNumber(num1, num2, operation);
			if (inputNumber(num1, num2, operation) == 0)
			{
				return 0;
			}
			cout << "Result: (" << num1 << " - " << num2 << ") = " << num1 - num2 << endl;
			break;
		case'*':
			//inputNumber(num1, num2, operation);
			if (inputNumber(num1, num2, operation) == 0)
			{
				return 0;
			}
			cout << "Result: (" << num1 << " * " << num2 << ") = " << num1 * num2 << endl;
			break;
		case'/':
			//inputNumber(num1, num2, operation);
			if (inputNumber(num1, num2, operation) == 0)
			{
				return 0;
			}
			cout << "Result: (" << num1 << " / " << num2 << ") = " << num1 / num2 << endl;
			break;
		default:
			cout << "Invaled command.  Please try again!" << endl;
		}

		cout << endl;

	label:
		cout << "New Calculation?" << endl;
		cout << "1 for YES || 2 for NO" << endl;
		cin >> choice;

		if (choice == '1')
		{
			continue;
		}
		else if (choice == '2')
		{
			break;
		}
		else
		{
			cout << "Invaled Choice.  Please try again!" << endl << endl;
			goto label;
			//cout << "Sorry! System will Terminate :(" << endl << endl;   //optional to temninate the program if programmer wish
			system("pause");
			return 0; //terminate the program
		}

	} while (true);
	cout << endl;
	cout << "                      (: Thank you for using our system :)" << endl << endl;
	system("pause");
	return 0; //end of the program
}

int inputNumber(long double &num1, long double &num2, char &operation)
{//take the input from user
	cout << "Please enter two numbers to apply your requested operation(" << operation << ")" << endl;
	cout << "Fisrt  number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	cout << endl;
	if ((num1 == -1000000) || (num2 == -1000000))
	{
		cout << endl;
		cout << "***************Sorry You didn't entered numbers so...  Program will terminate!***************" << endl << endl;
		system("pause");
		return 0;
	}
}
/*
Output simple run >>>>>>>>>

Welcome to the calculater program v.1.0 written by Dr_Tony
**********************************************************

Please enter an operation to make on 2 numbers (+  -  *  /)  +

Please enter two numbers to apply your requested operation(+)
Fisrt  number: 66
Second number: 77

Result: (66 + 77) = 143

New Calculation?
1 for YES || 2 for NO
2

(: Thank you for using our system :)

Press any key to continue . . .

*/