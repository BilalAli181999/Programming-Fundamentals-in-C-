#include<iostream>
#include "sets.h"
using namespace std;
void createSet(set &s, int n)
{
	s.noOfElements = 0;
	s.capacity = n;
	s.data = new int [s.capacity];
}
bool addElement(set &s, int element)
{
	s.data[s.noOfElements] = element;
	s.noOfElements++;
	return true;
}
bool removeElement(set &s, int element)
{
	bool status = true;
	if (searchElement(s, element))
	{
		for (int i = 0; i < s.noOfElements && status; i++)
		{
			if (s.data[i] == element)
			{
				for (int j = i; j < s.noOfElements; j++)
				{
					s.data[j] = s.data[j + 1];
					status = false;
				}
				s.noOfElements--;
			}
		}
	}
	else
		cout << element <<" not found";
	return true;
}
bool searchElement(set s, int element)
{
	bool status = false;
	for (int i = 0; i < s.noOfElements && !(status); i++)
	{
		if (s.data[i] == element)
		{
			status = true;
		}
	}
	return status;
}
int searchElementPosition(set s, int element)
{
	
		for (int i = 0; i < s.noOfElements; i++)
		{
			if (s.data[i] == element)
			{
				return i+1;
			}
		}
	
	
}
bool isEmpty(set s)
{
	if (s.noOfElements == 0)
		return true;
	else
		return false;
}
bool isFull(set s)
{
	if (s.noOfElements == s.capacity)
		return true;
	else
		return false;
}
void displaySet(set s)
{
	cout << "{";
	for (int i = 0; i < s.noOfElements; i++)
	{
		cout << s.data[i];
		if (i != s.noOfElements - 1)
		{
			cout << ",";
		}
	}
	cout << "}";
}
set setIntersection(set s1, set s2)
{
	set x;
	createSet(x, 10);
	for (int i = 0; i < s1.noOfElements; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if (s1.data[i] == s2.data[j])
			{
				x.data[x.noOfElements] = s1.data[i];
				x.noOfElements++;
			}
		}
	}
	return x;
}
set createClone(set &source)
{
	set x;
	createSet(x, source.capacity);
	x.capacity = source.capacity;
	x.noOfElements = source.noOfElements;
	for (int i = 0; i < x.noOfElements; i++)
	{
		x.data[i] = source.data[i];
	}
	return x;
}
void deAllocate(set & s)
{
	delete[]s.data;
	s.data = 0;
}
set difference(set a, set b)
{
	set difference;
	createSet(difference, a.capacity);
	for (int i = 0; i < a.noOfElements; i++)
	{
		difference.data[i] = a.data[i] - b.data[i];
		difference.noOfElements++;
	}
	return difference;
}
set calcUnion(set a, set b)
{
	int index;
	set x,intersection;
	createSet(x, a.capacity + b.capacity);
	for (int i = 0; i < a.noOfElements; i++)
	{
		x.data[i] = a.data[i];
		x.noOfElements++;
		index = i+1;
	}
	for (int i = 0; i < b.noOfElements; i++)
	{
		x.data[index] = b.data[i];
		index++;
	}
	x.noOfElements = index ;
	displaySet(x);
	
	intersection=setIntersection(a, b);
	displaySet(intersection);
	for (int i = 0; i < intersection.noOfElements; i++)
	{
		removeElement(x, intersection.data[i]);
		cout << intersection.data[i];
	}
	return x;
}
//
//int isSubset(set a, set b)
//{
//	int ps=0;
//	for (int i = 0; i < a.noOfElements; i++)
//	{
//		if (searchElement(b, a.data[i]))
//		{
//			ps++;
//		}
//	}
//	if (ps == a.noOfElements && ps < b.noOfElements)
//		return 1;
//	else 
//		return 0;
//}

int ** binary(int r, int c)
{
	int q;
	int **arr = new int*[r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j]=0;
		}
	}

	for (int x = 0; x < r; x++)
	{
		int j = c - 1;
		q = x;
		while (x != 0 && j >= 0)
		{
			arr[x][j] = q % 2;
			q = q / 2;
			j--;
		}
	}
	return arr;
}
void powerSet(set a)
{
	
		
		
		int r, c;
		r = pow(2, a.noOfElements);
		c = a.noOfElements;
		
		
	  int **newA=binary(r, c);
	  for (int i = 0; i < r; i++)
	  {
		  for (int j = 0; j < c; j++)
		  {
			  if (newA[i][j] == 1)
			  {
				  cout << "{";
				  cout << a.data[j]<<" ";
				  cout << "}";
			  }
			 
		  }
		  cout << "\n";
	  }
	  
}
int isSubset(set a, set b)
{
	bool status = false;
	int c=0;
	for (int i = 0; i < b.noOfElements; i++)
	{
		for (int j = 0; j < a.noOfElements; j++)
		{
			if (b.data[i] == a.data[j])
			{
				c++;
			}
		}
	}
		if (c == b.noOfElements && c == a.noOfElements - 1)
		{
			return 1;
		}
		else if (c == a.noOfElements)
		{
			return 2;
		}
		else
		{
			return 0;
		}
}
