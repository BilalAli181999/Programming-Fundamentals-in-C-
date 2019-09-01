#include<iostream>
using namespace std;
int main()
{
	float startingTime, noMinutes;
	cout << "Enter starting time";
	cin >> startingTime;
	cout << "Enter no of Minutes";
	cin >> noMinutes;
	float totalTime;
	totalTime = startingTime +( noMinutes/60);
	int a,b;
	int minutes = totalTime - (int)totalTime;
	if (minutes > 59)
	{
		totalTime = totalTime + 1;
		minutes = minutes - 59;
	}
	if (totalTime >= 00.00 && totalTime <= 23.59 && minutes <= 59)
	{
		if (totalTime >= 00.00 && totalTime <= 06.59)
		{
			cout << "charges" << " " << (int(totalTime)*60+minutes)*0.12;
		}
		if (startingTime >= 00.00 && startingTime<=06.59 && totalTime>=07.00 && totalTime <= 19.00)
		{
			b = totalTime - 06.59;
			a = (int(b) * 60 + minutes)*0.55;
			cout << "charges" << " " << ((int(06.59) * 60 + minutes)*0.12) + a;
		}
		if (startingTime >= 00.00 && startingTime <= 06.59 && totalTime >= 19.01 && totalTime <= 23.59)
		{
			b = totalTime - 19.00;
			a = (int(b) * 60 + minutes)*0.35;
			cout << "charges" << " " << ((int(06.59) * 60 + minutes)*0.12) + ((int(06.59) * 60 + minutes)*0.55) + a;
		}
		if (startingTime >= 07.00 && startingTime <= 19.00 && totalTime >= 07.00 && totalTime <= 19.00)
		{
			cout << "charges" << " " << (int(totalTime) * 60 + minutes)*0.55;
		}
		if (startingTime >= 07.00 && startingTime <= 19.00 && totalTime >= 19.01  && totalTime <= 23.59)
		{
			b = totalTime - 06.59;
			a = (int(b) * 60 + minutes)*0.35;
			cout << "charges" << " " << ((int(totalTime) * 60 + minutes)*0.55)+a;
		}
		if (startingTime >= 19.00 && startingTime <= 23.59 && totalTime >= 19.00 && totalTime <= 23.59)
		{
			cout << "charges" << " " << (int(totalTime) * 60 + minutes)*0.55;
		}
	}
	else
	{
		cout << "faulty input";
	}
	






	return 0;
}