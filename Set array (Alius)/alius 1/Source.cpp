#include<iostream>
#include"Header.h"
using namespace std;
void start()
{
	int setACapacity = 10;
	int setANOE = 0;
	int *setA;
	int setBCapacity = 7;
	int setBNOE = 0;
	int *setB;
	createSet(setA, setACapacity);
	createSet(setB, setBCapacity);
	addElement(setA, setANOE, setACapacity, 5);
	addElement(setA, setANOE, setACapacity, 15);
	addElement(setA, setANOE, setACapacity, 9);
	addElement(setA, setANOE, setACapacity, 10);
	addElement(setB, setBNOE, setBCapacity, 9);
	addElement(setB, setBNOE, setBCapacity, 15);
	addElement(setB, setBNOE, setBCapacity, 13);
	addElement(setB, setBNOE, setBCapacity, 19);
	//removeElement(setA, setANOE, setACapacity, 15);
	displaySet(setA, setANOE);
	displaySet(setB, setANOE);
	int setCCapacity = 10;
	int setCNOE = 0;
	int *setC;
	setC = intersection(setA, setB, setANOE, setBNOE, setCNOE, setCCapacity);
	cout << "set c elements";
	displaySet(setC, setCNOE);
	
}
void createSet(int *&set, int n)
{
	 set = new int[n];
}
bool addElement(int set[], int &noe, int capacity, int element)
{
	
	set[noe] = element;
	noe = noe + 1;
	if (capacity == noe)
	{
		return false;
	}
	else
		return true;
}
void displaySet(int *set, int noe)
{
	cout << "{";
	for (int i = 0; i < noe; i = i + 1)
	{
		cout << set[i];
		if (i < noe - 1)
		{
			cout << ",";
		}
	}
	cout << "}";
}

bool removeElement(int *set, int &noe, int capacity, int element)
{
	int flag=0;
	for (int i = 0; i < capacity && flag==0; i = i + 1)
	{
		if (set[i] == element)
		{
			set[i] = set[i + 1];
			set[i + 1] = set[noe - 1];
			noe = noe - 1;
		}
	}
	displaySet(set, noe);
	if (capacity == noe)
		return false;
	else
		return true;
}
bool searchElement(int *set, int noe, int element)
{
	for (int i = 0; i < noe; i = i + 1)
	{
		if (set[i] == element)
			return true;
	}
}
int searchElementPosition(int *set, int noe, int element)
{
	for (int i = 0; i < noe; i = i + 1)
	{
		if (set[i] == element)
			return i;
	}
}
int * intersection(int *setA, int *setB, int setANoe, int setBNoe, int &newSetNoe, int &newSetCapacity)
{
	int *arr=new int[10];

	for (int i = 0; i < setANoe; i = i + 1)
	{
		for (int j = 0; j < setBNoe; j = j + 1)
		{
			if (setA[i] == setB[j])
			{
				arr[newSetNoe] = setA[i];	
				newSetNoe = newSetNoe + 1;
			}

		}
	}
	return arr;
}


bool isEmpty(int noe)
{
	if (noe == 0)
		return true;
}
bool isFull(int noe, int capacity)
{
	if (noe == capacity)
		return true;
}
