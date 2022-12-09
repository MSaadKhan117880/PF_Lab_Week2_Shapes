#include<iostream>
using namespace std;

int main()
{
	float num1, num2, num3, num4;
	float smallest, mid1,mid2, largest;
	cout << "Enter a 3-digit number: ";
	cin >> num1 >> num2 >> num3 >> num4;
	smallest = num1;
	largest = num2;
	mid1 = num3;
	mid2 = num4;
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
		mid1 = largest;
		largest = num3;
	}
	if (num3 < smallest)
	{
		mid1 = smallest;
		smallest = num3;
	}
	if (num4 > largest)
	{
		mid2 = largest;
		largest = num4;
	}
	if (num4 < smallest)
	{
		mid2 = smallest;
		smallest = num4;
	}
	cout << "smallest number = " << smallest << endl;
	cout << "Middle number = " << mid1 << endl;
	cout << "Middle number = " << mid2 << endl;
	cout << "Largest number = " << largest << endl;
	return 0;
}