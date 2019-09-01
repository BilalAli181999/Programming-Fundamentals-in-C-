#include<iostream>
using namespace std;
int main()
{
	int numSheets;
	cout << "enter required no of sheets";
	cin >> numSheets;
	int price1, price2, price3, price4;
	price1 = numSheets*0.10;
	if (numSheets > 100)
	{
		price2 = (numSheets / 100.0)*0.055 * 100;
	}
	else
	{
		price2 = (100 / numSheets)*numSheets*0.055;
	}
	if (numSheets > 500)
	{
		price3 = (numSheets / 500.0)*0.04 * 500;
	}
	else
	{
		price3 = (100 / numSheets)*numSheets*0.04;
	} 
	if (numSheets > 1000)
	{
		price4 = (numSheets / 1000.0)*0.03 * 1000.0;
	}
	else
	{
		price4 = (1000 / numSheets)*numSheets*0.03;
	}
	
	if (price4 < price3 && price4 < price2 &&price4 < price1)
	{
		cout << "package 4" << price4;
	}

	if (price3 < price4 && price3 < price2 &&price3 < price1)
	{
		cout << "package 3 " << price3;
	}
	if (price2< price4 && price2 < price3 &&price2< price1)
	{
		cout << "package 2 " << price2;
	}
	if (price1< price4 && price1 < price3 &&price1< price2)
	{
		cout << "package 1 " << price1;
	}
	return 0;
}