#include<iostream>
using namespace std;

int main()
{
	//Task for average age with known limit.

	/*int  class_size, scores, avg_sc = 0, i = 1;
	cout << "Enter the class size: ";
	cin >> class_size;
	cout << endl;
	while (i <= class_size)
	{
		cout << "Enter the scores of the students: ";
		cin >> scores;
		avg_sc = avg_sc + scores;
		i++;
	}
	cout << endl;
	avg_sc = avg_sc / class_size;
	cout << "Average score of a class = " << avg_sc << endl;
	return 0;*/

	//Task for average, highest, lowest score with known limit.

	int  class_size, scores, avg_sc = 0, i = 0;
	int largest, smallest;
	cout << "Enter the class size: ";
	cin >> class_size;
	cout << endl;
	while (i < class_size)
	{
		cout << "Enter the scores of the students: ";
		cin >> scores;
		avg_sc = avg_sc + scores;
		if (i == 0)
		{
			largest = scores;
			smallest = scores;
		}
		else if(scores > largest)
		{
			largest = scores;
		}
		else if(scores<smallest)
		{
			smallest = scores;
		}
		i++;
	}
	cout << endl;
	avg_sc = avg_sc / class_size;
	cout << "Average score of a class = " << avg_sc << endl;
	cout << "Largest score of a class = " << largest << endl;
	cout << "Lowest score of a class = " << smallest << endl;
	return 0;

	//Task for average age with unknown limit.

	/*int class_size, score, avg_age = 0, i = 0;
	int ans;
	cout << "Enter the age of the first person: ";
	cin >> score;
	do
	{
		avg_age = avg_age + score;
		i++;
		cout << "Enter the age of the next person. Type -1 to quit. ";
		cin >> ans;
	} while (ans != -1);
	avg_age = avg_age / i;
	cout << "Average age = " << avg_age << endl;
	return 0;*/
}