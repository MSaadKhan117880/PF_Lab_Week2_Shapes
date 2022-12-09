#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a = 2, b = 3;
	int* ptr1;
	ptr1 = &a;
	cout << *ptr1;
	int* ptr2 = &a;
	delete(ptr1);
	cout << ptr2;
}