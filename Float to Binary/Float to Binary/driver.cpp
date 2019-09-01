#include<iostream>
#include<math.h>
#include"IEEE.h"
using namespace std;
int main()
{
	bool *array;
	float number;
	cout << "Enter the number";
	cin >> number;
	array = convertToBinary(number);
	cout << "\n\nIEEE-754 BINARY FORMAT:\t";
	for (int r = 0; r<32; r++)
	{
		cout << array[r] << " ";
		if (r == 0 || r == 8)
			cout << "\t";
	}
	// Binary to Float
	bool arr[33] = {};
	cout << "\n\nEnter in array";
	for (int r = 0; r<32; r++)
	{
		cin >> arr[r];
	}
	cout << "\n\n***FLOATING POINT***:\t" << convertToFloat(arr) << "\n\n";
	return 0;
}