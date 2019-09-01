#include<iostream>
#include<math.h>
#include"IEEE.h"
using namespace std;
bool * convertToBinary(float f)
{
	int exp;
	float mant;
	
	if (f >= 0)
	{
		exp = f;
	}
	if (f < 0)
	{
		exp = 100 - (100 + f);
	}
	mant = f - (int)f;
	bool *arr = new bool[33];
	int bin[33] = {};
	for (int i = 0; i < 33; i++)
	{
		arr[i] = 0;
	}
	int e = exp;
	int i = 0;
	while (e != 0)
	{
		bin[i] = e % 2;
		e = e / 2;
		i++;
	}
	int x=i;
	for (int j = 0; j < i / 2; j++)
		{
			int rep;
			rep = bin[j];
			bin[j] = bin[x - 1];
			bin[x - 1] = rep;
			x--;
		}
	
	int count = i;
	float c = mant;
	while (c != 0 && i<32) 
	{
		bin[i] =c * 2;
		c = (c * 2) - (int)(c * 2);
		i++;
	}
	/*for (int r = 0; r<32; r++)
	{
		cout << bin[r] << " ";
		if (r == count)
			cout << "\t";
	}*/
	int newAdd;
	if (exp > 1)
	{
		bool status = true;
		for (int j = 0; j<count && status; j++)
		{
			if (bin[j] == 1)
			{
				newAdd = (count - 1) - j;
				status = false;
			}
		}
	}
	if (exp == 1)
	{
		newAdd = 0;
	}
	if (exp == 0)
	{
		bool status = true;
		for (int j = count; j < 33 && status; j++)
		{
			if (bin[j] == 1)
			{
				newAdd = -(j - count);
				status = false;
			}
		}
	}
	
	int newBin = 127 + newAdd;
	int u = 1;
	while (newBin != 0)
	{
		arr[u] = newBin % 2;
		newBin = newBin / 2;
		u++;
	}
	
	int z = u;
	int count1 = u;
	if (exp > 1)
	{
		for (int j = 1; j < u / 2; j++)
		{
			int rep;
			rep = arr[j];
			arr[j] = arr[z - 1];
			arr[z - 1] = rep;
			z--;
		}
	}
	if (f < 0)
	{
		arr[0]=1;

	}
	else
	{
		arr[0] = 0;
	}
	
	int d;
	if (newAdd > 0)
	{	
		d = count - newAdd;
	}
	if (newAdd < 0)
	{
		d = -(newAdd);
	}
	
	for (int j = 9; j < 33; j++)
	{
		arr[j] = bin[d];
		d++;
	}
	
	return arr;
}
float convertToFloat(bool *arr)
{
	int mant=0;
	int y=1;
	for (int i = 8; i >= 1; i--)
	{
		mant = mant + arr[i] * y;
		y = y * 2;
	}
	
	int powOf2;
	powOf2 = mant - 127;

	float mantissa=0;
	double  s=-1;
	for (int i = 9; i < 32; i++)
	{
	
		mantissa = mantissa + arr[i] * pow(2.0, s);
		s = s - 1;
	}
	
	int signBit = arr[0];
	float result ;
	if(powOf2>=0)
	return pow(-1,signBit)*(1.0+mantissa)*pow(2.0,powOf2);
	else
		return pow(-1, signBit)*(mantissa)*pow(2.0, powOf2);
}