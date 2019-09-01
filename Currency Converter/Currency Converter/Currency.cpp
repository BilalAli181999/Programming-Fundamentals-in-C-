#include<iostream>
#include"Currency.h"
using namespace std;

void convertToUsd(double cur)
{
	double res;
	res = cur*0.0095;
	cout << "YOUR AMOUNT IN US DOLLARS:-";
	cout << "  " << res;
	
}
void convertToAed(double cur)
{
	double res;
	res = cur*0.0349;
	cout << "YOUR AMOUNT IN UAE DIRHAMS:-";
	cout << "  " << res;
	
}
void convertToEur(double cur)
{
	double res;
	res = cur*0.0081;
	cout << "YOUR AMOUNT IN EUROS:-";
	cout << "  " << res;
	
}
void convertToGbp(double cur)
{
	double res;
	res = cur*0.0073;
	cout << "YOUR AMOUNT IN BRITISH POUNDS:-";
	cout << "  " << res;
	
}
void convertToInr(double cur)
{
	double res;
	res = cur*0.6057;
	cout << "YOUR AMOUNT IN  INDIAN RUPEES:-";
	cout << "  " << res;
	
}
void convertToTry(double cur)
{
	double res;
	res = cur*0.0349;
	cout << "YOUR AMOUNT IN TURKISH LIRA:-";
	cout << "  " << res;
	
}
void start()
{
	double amount;
	cout << "Enter the Amount you want to convert:-";
	cin >> amount;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		convertToUsd(amount);
		break;
	}
	case 2:
	{
		convertToAed(amount);
		break;
	}
	case 3:
	{
		convertToEur(amount);
		break;
	}
	case 4:
	{
		convertToGbp(amount);
		break;
	}
	case 5:
	{
		convertToInr(amount);
		break;
	}
	case 6:
	{
		convertToTry(amount);
		break;
	}
	}
}