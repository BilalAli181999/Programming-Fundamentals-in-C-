#include<iostream>
#include "time.h"
using namespace std;
void inputTime(Time *t)
{
	cout << "Enter no of hours";
	cin >> (*t).hours;
	cout << "Enter no of minutes";
	cin >> (*t).minute;
	cout << "Enter no of seconds";
	cin >> (*t).second;
	
}
void printTwentyFourHourFormat(Time t)
{
	cout << "24-hour Format = ";
	cout << t.hours << ":" << t.minute << ":" << t.second;
}
void printTwelveHourFormat(Time t)
{
	cout << "\n 12-hour Format = ";
	if (t.hours < 12 && t.hours >0)
	{
		 cout << t.hours << ":" << t.minute << ":" << t.second <<" Am";
	}
	else if (t.hours <= 23 && t.hours >= 12)
	{
		t.hours = t.hours - 12;
		cout << t.hours << ":" << t.minute << ":" << t.second << " Pm";
	}

	else if (t.hours == 0)
	{
		cout << t.hours << ":" << t.minute << ":" << t.second << " Am";
	}
	cout << "\n";
}
void incSec(Time *t, int inc = 1)
{
	(*t).second = (*t).second + inc;
	if ((*t).second >= 60)
	{
		(*t).minute = (*t).minute + (*t).second / 60;
		
		if ((*t).minute >= 60)
		{
			(*t).hours = (*t).hours + (*t).minute/ 60;
		}
		
		(*t).second = (*t).second % 60;
		(*t).minute =  (*t).minute % 60;
		(*t).hours =  (*t).hours % 24;
		
	}

}






