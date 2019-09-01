// practice file 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	/*
	int gold, pirates;
	cout << "enter gold";
	cin >> gold;
	cout << "enter no of pirates";
	cin >> pirates;
	if (gold >= pirates && gold + pirates < 100)
	{
		cout << "success";
	}
	else
	{
		cout << "failure";
	}*/
	/*
	int cookies;
	double boxes, container;
	cin >> cookies ;
	boxes = cookies / 24.00;
	container = cookies / 1800.00;
	cout << "boxes=" <<boxes << "\n";
	cout << "containers=" << container;
	if ( fmod(boxes,10.0) != 0.00)
	{
		cout << "remaining cookies" << fmod(boxes, 10.0) * 24.00;
	}
	if (fmod(container, 10.0) != 0.00)
	{
		cout << "container" << fmod(container, 10.0) * 75.00;

	}*/
	/*	int num, den;
	cin >> num >> den;
	int result = num / den;
	int rem = num%den;
	int fraction = (rem * 10) / den;
	if (fraction > 5)
		{
			cout << result + 1;
		}
	else
	{
		cout << result;
	}*/
	/*int num1, num2;
	cin >> num1 >> num2;
	int result = num1 / num2;
	switch (result)
	{
	case 0:
		cout << num2 << "is larger";
		break;
	default:
		cout << num1 << "is larger";
	}
	return 0;
}*/


	int num1, num2;
	cin >> num1 >> num2;
	int result = num1 / num2;
	if (result)
	{
		cout << num1 << "is larger";
	}
	else
	{
		cout << num2 << "is larger";
	}




	return 0;
}
	
	
