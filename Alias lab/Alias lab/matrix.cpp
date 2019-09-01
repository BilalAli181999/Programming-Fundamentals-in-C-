#include<iostream>
#include<iomanip>
#include"matrix.h"
using namespace std;

void createMatrix(int **&m, int row=1 , int col=1 )
{
	m = new int*[row];
	for (int i = 0; i < row; i = i + 1)
	{
		m[i] = new int[col];
	}
}
int &at(int **p, int r, int c)
{
	return *(*(p+r)+c);
}

void printMatrix(int **p, int rows, int cols)
{
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			cout << left << setw(5) << p[i][j];
		}
		cout << "\n";
	}
}


int isIdentity(int **p, int rows, int cols)
{
	int status1 = 1;
	int status2 = 1;
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			if (i == j)
			{
				if (p[i][j] != 1)
				{
					status1 = 0;
				}
			}
			if (i != j)
			{
				if (p[i][j] != 0)
				{
					status2 = 0;
				}
			}
		}
	}
	if (status1 == 1 && status2 == 1)
		return 1;
	else
		return 0;
}
//bool isLowerTriangular(int **p, int rows, int cols)
//{
//	int flag1 = 0;
//	int flag2 = 0;
//	int status1 = 1;
//	int status2 = 1;
//	
//	for (int i = 0; i < rows; i = i + 1)
//	{
//		for (int j = 0; j < cols; j = j + 1)
//		{
//			if (i == j)
//			{
//				if (p[i][j] != 1 && flag1==0)
//				{
//					status1 = 0;
//					flag1 = 1;
//				}
//			}
//			if (i < j)
//			{
//				if (p[i][j] != 0 && flag2 == 0)
//				{
//					status2 = 0;
//					flag2 = 1;
//				}
//			}
//			
//		}
//		if (status1 == 1 && status2 == 1)
//			return 1;
//		else
//			return 0;
//
//			
//		}
//}
//
//bool isUpperTriangular(int **p, int rows, int cols)
//{
//	int flag1 = 0;
//	int flag2 = 0;
//	int status1 = 1;
//	int status2 = 1;
//
//	for (int i = 0; i < rows; i = i + 1)
//	{
//		for (int j = 0; j < cols; j = j + 1)
//		{
//			if (i == j)
//			{
//				if (p[i][j] != 1 && flag1 == 0)
//				{
//					status1 = 0;
//					flag1 = 1;
//				}
//			}
//			if (i > j)
//			{
//				if (p[i][j] != 0 && flag2 == 0)
//				{
//					status2 = 0;
//					flag2 = 1;
//				}
//			}
//
//		}
//		if (status1 == 1 && status2 == 1)
//			return 1;
//		else
//			return 0;
//
//	}
//}
int **multiply(int** a, int row1, int col1, int**b, int row2, int col2, int&resultRow, int & resultCol)
{
	int **p;
	createMatrix(p, resultRow, resultCol);
	
	for (int i = 0; i < row1; ++i)
		for (int j = 0; j < col2; ++j)
		{
			p[i][j] = 0;
		}

	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col2; ++j)
		{
			for (int k = 0; k < col1; ++k)
			{
				p[i][j] += a[i][k] * b[k][j];

			}
		}
	}
	// Displaying the multiplication of two matrix.
	cout << endl << "Output Matrix: " << endl;
	for (int i = 0; i < row1; ++i)
		for (int j = 0; j < col2; ++j)
		{
			cout << " " << p[i][j];
			if (j == col2 - 1)
				cout << endl;
		}

	return p;
}






