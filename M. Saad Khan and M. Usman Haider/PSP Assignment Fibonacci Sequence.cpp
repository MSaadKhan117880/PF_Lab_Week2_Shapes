#include<iostream>
using namespace std;

int main()
{

	int fib1, fib2, fibn, nth_term;
	int i = 3;
	cout << "Enter the first number: ";
	cin >> fib1;
	cout << "Enter the second number: ";
	cin >> fib2;
	cout << "Enter the terms of fibonacci sequence: ";
	cin >> nth_term;
	cout << fib1 << ", " << fib2 <<", ";
	while (i <= nth_term)
	{
		fibn = fib1 + fib2;
		cout << fibn << ", ";
		fib1 = fib2;
		fib2 = fibn;
		++i;
	}
	return 0;
}