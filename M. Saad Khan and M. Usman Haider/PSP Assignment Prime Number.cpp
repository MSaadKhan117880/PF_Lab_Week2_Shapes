#include<iostream>
using namespace std;

int main()
{
	int num, limit,i=2;
	bool Isprime;
	cout << "Enter a positive number: ";
	cin >> num;
	limit = sqrt(num);
	Isprime = true;
	while (Isprime && i <= limit)
	{
		if (num % i == 0)
		{
			Isprime = false;
		}
		else
		{
			i++;
		}
	}
	if (Isprime)
	{
		cout << "The entered number is prime." << endl;
	}
	else
	{
		cout << "The entered number is not prime. " << endl;
	}
	return 0;
}