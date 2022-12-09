#include<iostream>
using namespace std;

int main()
{
	char ans;
	int guess1, guess2, guess3, num1, num2, num3;
	int InRowGuess = 0, OutOfOrderGuess = 0, Guesses;
	do
	{
		num1 = rand() % 10;
		num2 = rand() % 10;
		num3 = rand() % 10;
		cout << "Enter first number(0-9): ";
		cin >> guess1;
		cout << "Enter second number(0-9): ";
		cin >> guess2;
		cout << "Enter third number(0-9): ";
		cin >> guess3;
		if (num1 == guess1)
		{
			InRowGuess++;
		}
		else if (num1 == guess2 || num1 == guess3)
		{
			OutOfOrderGuess++;
		}
		if (num2 == guess2)
		{
			InRowGuess++;
		}
		else if (num2 == guess1 || num2 == guess3)
		{
			OutOfOrderGuess++;
		}
		if (num3 == guess3)
		{
			InRowGuess++;
		}
		else if (num3 == guess1 || num3 == guess2)
		{
			OutOfOrderGuess++;
		}
		Guesses = InRowGuess + OutOfOrderGuess;
		if (InRowGuess == 3)
		{
			cout << "Your guesses are correct in a row.YOU WON 100$! " << endl;
		}
		else if (Guesses == 3)
		{
			cout << "Your guesses are correct but out of order. YOU WON 50$! " << endl;
		}
		else if (Guesses == 2)
		{
			cout << "Your only two guesses are correct. YOU WON 20$! " << endl;
		}
		else if (Guesses == 1)
		{
			cout << "Only one guess is correct. YOU WON 5$! ";
		}
		else
		{
			cout << "No Matches. YOU LOST! ";
		}
		cout << "Try Again? (Y/N) ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}