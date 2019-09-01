#include<iostream>
using namespace std;
int main()
{
	int birthDay, birthMonth, birthYear;
	cout << "enter birthday";
	cin >> birthDay;
	cout << "enter birth month";
	cin >> birthMonth;
	cout << "enter birth year";
	cin >> birthYear;
	int flag = 0;
	int appointDay, appointMonth, appointYear;
	cout << "enter appoint day";
	cin >> appointDay;
	cout << "enter appoint month";
	cin >> appointMonth;
	cout << "enter appoint year";
	cin >> appointYear;
	int counterAppoint, counterBirth;
	for (counterAppoint = 1; counterAppoint <= 35; counterAppoint = counterAppoint + 1)
	{
		appointYear = appointYear + 1;
	}
	for (counterBirth = 1; counterBirth <= 60; counterBirth = counterBirth + 1)
	{
		birthYear = birthYear + 1;
	}
	cout << appointYear << "  " << birthYear;
	if (appointYear < birthYear)
	{
		cout << "retirement date:" << appointDay << ":" << appointMonth << ":" << appointYear;
	}
	if (birthYear < appointYear)
	{
		cout << "retirement date:" << birthDay << ":" << birthMonth << ":" << birthYear;
	}
	/*if (counterBirth >35 && counterBirth <=60)
	{
		cout << "retirement date:" << birthDay << ":" << birthMonth << ":" << birthYear;
	}
	if (counterAppoint == 35)
	{
		cout << "retirement date:" << appointDay << ":" << appointMonth << ":" << appointYear;
	}*/

	
	return 0;
}