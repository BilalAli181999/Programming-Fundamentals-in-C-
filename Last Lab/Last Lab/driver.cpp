#include<iostream>
#include"lab.h"
using namespace std;

int main()
{
	matrix matrix1;
	
	createMatrix(matrix1,4,6);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
	      matrix1.data[i][j]=0;
		 
		}
	}
	at(matrix1, 0, 0) = 2;
	at(matrix1, 2, 4) = 11;
	at(matrix1, 1, 2) = 3;
	at(matrix1, 1, 4) = 23;
	at(matrix1, 3, 5) = 19;
	at(matrix1, 0, 1) = 1;
	at(matrix1, 3, 0) = 21;
	at(matrix1, 1, 3) = 1;
	at(matrix1, 3, 0) = 13;
	at(matrix1, 0, 2) = 29;
	at(matrix1, 1, 0) = 31;
	at(matrix1, 1, 1) = 2;
	matrix clone;
	clone = getClone(matrix1);
	printMatrix(clone);
	cout << "\n";
	matrix mat1;
	mat1 = transpose(clone);
	printMatrix(mat1);
	if (isSymmetric(clone))
	{
		cout << "*****is symmetric*****";
	}
	else
	{
		cout << "****not symmetric****\n";
	}
	
	matrix sum;
	sum=add(clone,clone);
	printMatrix(sum);

}

