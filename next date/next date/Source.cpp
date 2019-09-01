#include<iostream>
using namespace std;
int main()
{
	int day, month, year;
	cout << "enter date,month and year";
	cin >> day >> month >> year;
	
	if (day <= 31 && month <= 12 && year > 0)
	{
		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (year % 4 != 0))
		{
			if (day == 31 && month < 12)
			{
				month = month + 1;
				day = 0;
			}
			if (day == 31 && month == 12)
			{
				year = year + 1;
				month = 1;
				day = 0;
			}
			if(day<31)
			{
				day = day + 1;
			}
			cout << day << " " << month << " " << year;
		}

		if ((month == 4 || month == 6 || month == 9 || month == 11) && (year % 4 != 0))
		{
			if (day == 30 && month < 11)
			{
				month = month + 1;
				day = 0;
			}
			if (day == 30 && month == 11)
			{
				year = year + 1;
				month = 1;
				day = 0;
			}
			if (day < 30)
			{
				day = day + 1;
			}
			cout << day << " " << month << " " << year;
		}
		if ((month == 2) && (year % 4 == 0))
		{
			if (day == 29)
			{
				month = month + 1;
				day = 0;
			}
			if (day < 29)
			{
				day = day + 1;
			}
			else
			{
				cout << "faulty input";
			}
			cout << day << " " << month << " " << year;
		}

		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (year % 4 == 0))
		{
			if (day == 31 && month < 12)
			{
				month = month + 1;
				day = 0;
			}
			if (day == 31 && month == 12)
			{
				year = year + 1;
				month = 1;
				day = 0;
			}
			if (day < 31)
			{
				day = day + 1;
			}
			cout << day << " " << month << " " << year;
		}

		if ((month == 4 || month == 6 || month == 9 || month == 11) && (year % 4 == 0))
		{
			if (day == 30 && month < 11)
			{
				month = month + 1;
				day = 0;
			}
			if (day == 30 && month == 11)
			{
				year = year + 1;
				month = 1;
				day = 0;
			}
			if(day<30)
			{
				day = day + 1;
			}
			cout << day << " " << month << " " << year;

		}
		if ((month == 2) && (year % 4 != 0))
		{
			if (day == 28)
			{
				month = month + 1;
				day = 0;
			}
			if(day<28)
			{
				day = day + 1;
			}
			else
			{
				cout << "fauly input";
			}
			cout << day << " " << month << " " << year;
		}
		
	}
	else
	{
		cout << "faulty input";
	}

	return 0;
}
	
	