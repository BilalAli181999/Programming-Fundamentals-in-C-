#pragma once
struct Time
{
	int hours;
	int minute;
	int second;
};
void inputTime(Time *);
void printTwentyFourHourFormat(Time);
void printTwelveHourFormat(Time );
void incSec(Time *, int );