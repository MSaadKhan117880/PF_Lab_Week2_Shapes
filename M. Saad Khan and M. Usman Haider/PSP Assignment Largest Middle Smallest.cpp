#include<iostream>
using namespace std;

int main()
{
	float num1, num2, num3;
	float smallest, mid, largest;
	cout << "Enter a 3-digit number: ";
	cin >> num1 >> num2 >> num3;
	smallest = num1;
	largest = num2;
	mid = num3;
	if (num1 > largest)
	{
		largest = num1;
	}
	if (num2 < smallest)
	{
		smallest = num2;
	}
	if (num3 > largest)
	{
		mid = largest;
		largest = num3;
	}
	if (num3 < smallest)
	{
		mid = smallest;
		smallest = num3;
	}
	cout << "smallest number = " << smallest << endl;
	cout << "Middle number = " << mid << endl;
	cout << "Largest number = " << largest << endl;
}