#include<iostream>
#include<iomanip>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
	/*int elapsedTime;
	cin >> elapsedTime;
	int hours, min, sec;
	hours = elapsedTime / 3600;
	min = (elapsedTime - (hours * 3600) )/ 60;
	sec = elapsedTime - (hours * 3600)-(min * 60);
	cout<<setw(2);
	cout.fill('0');
	cout << hours << ":" << min << ":" << sec;

	return 0;*/
	int num1, num2;
	cout << "enter num1 and num2";
	cin >> num1 >> num2;
	int result;
	result = num1 + num2;
	if (result > 2147483647)
	{
		cout << "overflow occured";
		cout << result;
	}
	if (result < 2147483647)
	{
		cout << "underflow occured";
		cout << result;
	}
	else
	{
		cout << result;
	}
	return 0;
}