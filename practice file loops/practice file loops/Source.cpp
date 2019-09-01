

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int counter = 1, i = 1;
	while (counter <= 10)
	{

		while (i <= counter)
		{
			cout << "+";
			i = i + 1;

		}
		i = 1;
		counter = counter + 1;
		cout << "\n";
	}
	cout << "\n\n\n";

	    int count = 10;
		int y = 1;
		while (count > 0)
		{

			while (y <= count)
			{
				cout << "+";
				y = y + 1;

			}
			y = 1;
			count = count - 1;
			cout << "\n";
		}




	/*int size;
	cout << "ënter size";
	cin >> size;
	int i = 1;
	int y = 1;
	while (size < 0 || size>15)
	{
		cout << "enter the size again";
		cin >> size;
	}
	while (i <= size)
	{
		while (y <= size)
		{
			cout << "X";
			y = y + 1;
		}
		y = 1;
		cout << "\n";
		i = i + 1;
	}*/


/*
	int number,x=100/2,y=100/4;
	srand(time(0));
	number = rand() % 99;
	int guess;
	cout << "enter the guessed number within 0-100";
	cin >> guess;
	while (guess!=number)
	{
		if (guess > number)
		{
			cout << "your guess is greater than number";
			cin >> guess;
		}

		if (guess < number)
		{
			cout << "your guess is smaller than number";
			cin >> guess;
		}

		if (guess == number)
		{
			cout << "your guess is correct"<<"\t";
			cout << "the number was" << number << "\n";
			cout << "you guessed" << guess;
		}
	}*/




		return 0; 
}