#include<iostream>
using namespace std;

void binary1(bool a[], int);
void binary2(bool a[], int);
void decimal(bool a[], float);
int main()
{
	float val;
	cout << "Enter the Value to Convert";
	cin >> val;
	int v;
	float d;
	v =  (int)val;
	d = val - v;
	bool array[32] = {};
	bool arr[32] = {};
	if (val > 0)
	{
		array[0] = 0;
	}
	else
	{
		array[0] = 1;
	}
	binary1(arr, v);
	decimal(arr, d);
	int pow;
	bool status = true;
	for (int i = 0; i <32 && status; i++)
	{
		if (arr[i] == 1)
		{
			pow = 7 - i;
			status = false;
		}
	}
	int cof;
	cof = 127 + pow;
	binary2(array, cof);
	int z = 8 - pow;
	for (int i = 9; i < 32; i++)
	{
		
		array[i] = arr[z];
		z++;
	}
	cout << "|";
	for (int i = 0; i < 32; i++)
	{
		cout << array[i];
		if (i == 0)
			cout << "|";
		if (i == 8)
			cout << "|";
	}
	cout << "|";

	return 0;

}



void binary1(bool a[],int  val)
{
	int i = 7;
	while (val != 0)
	{
		a[i] = val % 2;
		val = val / 2;
		i--;
	}
}


void binary2(bool a[], int  val)
{
	int i = 8;
	while (val != 0 && i>0)
	{
		a[i] = val % 2;
		val = val / 2;
		i--;
	}
}
void decimal(bool a[], float v)
{
	int x;
	for (int i = 8; i < 31; i++)
	{
		x = v * 2;
		a[i] = x;
		v = (v*2)-x;
	}
}