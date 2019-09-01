#include<iostream>
using namespace std;
int main()
{


	int num;
	cout << "ENTER THE NUMBER";
	cin >> num;
	int count = 1;
	int sum = 0;
	while (num < 0)
	{
		cout << "enter the number again";
		cin >> num;
	}
	while (count <= num)
	{
		sum = sum + count;
		count = count + 1;
	}
	cout << "sum" << sum;
	return 0;

}

		/*int num;
		cout << "ENTER THE NUMBER";
		cin >> num;
		int count=1;
		int fact = 1;
		while (count <= num)
		{
			fact = fact*count;
			count = count + 1;
		}
		cout << fact;
		return 0; 

		}



		/*int num;
		num=0;
		while (num <= 127)
		{
			cout << char(num)<<"\t";
			if (num % 16 == 0)
			{
				cout << "\n";
			}
			num = num + 1;
		}

		return 0;*/




		/*


		float rise,total=0;
		rise = 1.5;
		int counter = 1;
		while (counter <= 25)
		{
			total = total + rise;
			cout << total<<"\n";
			counter = counter + 1;
		}

		return 0;*/





		/*
			float calories;
			float total;
			calories = 3.6;
			int counter = 5;
			while (counter <= 30)
			{
				total = calories*counter;
				cout << total << "\n";
				counter = counter + 5;
			}
			return 0;*/





			/*
				int fees ,total=0;
				fees = 2500;
				int increase;
				increase = fees*0.04;
				int counter = 1;
				cout << increase << "\n";

				while (counter <= 6)
				{
					total = total +increase;
					cout << total + fees << "\n";
					counter = counter + 1;
				}
				return 0;*/




/*

	int speed, hours, distance;
	cout << "What is the speed of vehicle";
	cin >> speed;
	while (speed < 0)
	{
		cout << "enter speed again";
		cin >> speed;
	}

	cout << "how many hours has it traveled";
	cin >> hours;
	while (hours < 1)
	{
		cout << "enter hours again";
		cin >> hours;
	}
	int counter = 1;

	while (counter <= hours)
	{
		distance = speed*counter;
		cout << "distance traveled" << distance << "\n";
		counter = counter + 1;
	}
	return 0;*/




/*                                                          
int noDays;
cout << "enter no of days";
cin >> noDays;
while (noDays < 0)
{
	cout << "enter no of days again";
	cin >> noDays;
}
int counter = 1, total=0,count=1;
while (count <= noDays)
{
	total = total + counter;
	cout << total << "\n";
	counter = counter * 2;                                                 
	count = count + 1;
}
cout << "total" << (long double)(total / 100.0) << "$";

 return 0;
}*/



