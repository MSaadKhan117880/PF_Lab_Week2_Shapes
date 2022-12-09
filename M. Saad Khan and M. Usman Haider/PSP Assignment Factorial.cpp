#include<iostream>
using namespace std;

int main()
{
	int fact_num;
	int fact = 1, i;
	cout << "Enter the number: ";
	cin >> fact_num;
	for (i = 1; i <= fact_num; i++)
	{
		if (fact_num != 0)
		{
			fact = fact * i;
		}
		else
		{
			fact = 1;
		}
	}
	cout << fact_num << "! = " << fact << endl;
	return 0;
}