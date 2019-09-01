#include<iostream>
#include "time.h"
using namespace std;
int main()
{
	Time time;
	inputTime(&time);
	printTwentyFourHourFormat(time);
	printTwelveHourFormat(time);
	cout << "Enter no of increments";
	int inc;
	cin >> inc;
	incSec(&time, inc);
	printTwentyFourHourFormat(time);
	printTwelveHourFormat(time);
	return 0;
}