#include<iostream>
using namespace std;
#include"Maximum.h"
void findMaximum()
{
	int a[6];
	takeInput(a, 6);
}
void takeInput(int a[], int size)
{
	for (int i = 0; i < size; i = i + 1)
	{
		cout << "Enter Data";
		cin >> a[i];
	}
	
	cout<< takeMax(a,size);
}
int takeMax(int a[], int size)
{
	int max = a[0];
	for (int i = 0; i < size; i = i + 1)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}