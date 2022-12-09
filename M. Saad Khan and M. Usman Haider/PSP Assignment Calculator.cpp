#include<iostream>
using namespace std;

int main()
{
	float operand1, operand2;
	char op, ans;
	do
	{
		cout << "Enter the first operand: ";
		cin >> operand1;
		cout << "Enter the second operand: ";
		cin >> operand2;
		cout << "Enter your operator. '+' for addition,'-' for substraction,'*' for multiplication, '/' for division: ";
		cin >> op;
		switch (op)
		{
		case'+':
			cout << operand1 << " + " << operand2 << " = " << operand1 + operand2;
			break;
		case'-':
			cout << operand1 << " - " << operand2 << " = " << operand1 - operand2;
			break;
		case'*':
			cout << operand1 << " * " << operand2 << " = " << operand1 * operand2;
			break;
		case'/':
			cout << operand1 << " / " << operand2 << " = " << operand1 / operand2;
			break;
		otherwise:
			cout << "Invalid Operator!";
			break;
		}
		cout << endl;
		cout << "For another calculation. Press 'y' or 'Y'. To exit press 'n' or 'N'.";
		cin >> ans;
	} while (ans == 'y' ||ans  == 'Y');
}