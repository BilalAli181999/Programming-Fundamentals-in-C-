#include<iostream>
#include<math.h>
#include"IEEE.h"
using namespace std;
void binaryMant(int bin[],float mant,int i)
{
	float c = mant;
	while (c != 0 && i<32) 
	{
		bin[i] = c * 2;
		c = (c * 2) - (int)(c * 2);
		i++;
	}
	
}

int *binaryExp(int exp,int &i)
{
	int *bin = new int[33];
	while (exp != 0)
	{
		bin[i] = exp % 2;
		exp = exp / 2;
		i++;
	}
	int x = i;
	for (int j = 0; j < i / 2; j++)
	{
		int rep;
		rep = bin[j];
		bin[j] = bin[x - 1];
		bin[x - 1] = rep;
		x--;
	}
	return bin;
}
bool * convertToBinary(float f)
{
	int exp;
	float mant;

	if (f >= 0)
	{
		exp = f;
		mant = f - (int)f;
	}
	if (f < 0)
	{
		exp = 100 - (100 + f);
		mant =-( f - (int)f);
	}
	
	bool *arr = new bool[33];
	for (int i = 0; i < 33; i++)
	{
		arr[i] = 0;
	}
	int *bin;
	int expLen = 0;
	bin=binaryExp(exp, expLen);
	binaryMant(bin, mant, expLen);
	int newAdd;
	
	if (exp > 1 )
	{
		
		bool status = true;
		for (int j = 0; j<expLen && status; j++)
		{
			if (bin[j] == 1)
			{
				newAdd = (expLen - 1) - j;
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
		for (int j = expLen; j < 33 && status; j++)
		{
			if (bin[j] == 1)
			{
				newAdd = -((j - expLen)+1);
				status = false;
			}
		}
	}
	int newBin = 127 + newAdd;
	int u;
	if (exp >= 2)
	{

		 u = 1;
		while (newBin != 0)
		{
			arr[u] = newBin % 2;
			newBin = newBin / 2;
			u++;
		}
	}
	else
	{
		 u = 2;
		while (newBin != 0)
		{
			arr[u] = newBin % 2;
			newBin = newBin / 2;
			u++;
		}
	}
	
	int z = u;
	int expLEN = u;

	
	if (exp >= 2 )
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
	if (f<1.00)
	{
		for (int j = 2; j < u / 2; j++)
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
		arr[0] = 1;
	}
	else
	{
		arr[0] = 0;
	}
	
	int d=0;
	if (newAdd > 0)
	{
		d = expLen - newAdd;
	}
	if (newAdd < 0)
	{
		d = -(newAdd);
	}
	if (exp >= 2)
	{
		for (int j = 9; j < 33; j++)
		{
			arr[j] = bin[d];
			d++;
		}
	}
	else if(exp ==1)
	{
		for (int j = 8; j < 33; j++)
		{
			arr[j] = bin[d];
			d++;
		}
	}
	else
	{
		for (int j = 9; j < 33; j++)
		{
			arr[j] = bin[d];
			d++;
		}
	}
	

	return arr;
}

float convertToFloat(bool *arr)
{
	int mant = 0;
	int y = 1;
	for (int i = 8; i >= 1; i--)
	{
		mant = mant + arr[i] * y;
		y = y * 2;
	}

	int powOf2;
	powOf2 = mant - 127;

	float mantissa = 0;
	double  s = -1;
	for (int i = 9; i < 32; i++)
	{

		mantissa = mantissa + arr[i] * pow(2.0, s);
		s = s - 1;
	}

	int signBit = arr[0];
	float result;
	if (powOf2 >= 0 )
		return pow(-1, signBit)*(1.0 + mantissa)*pow(2.0, powOf2);
	else
		return pow(-1, signBit)*(mantissa)*pow(2.0, powOf2);
}