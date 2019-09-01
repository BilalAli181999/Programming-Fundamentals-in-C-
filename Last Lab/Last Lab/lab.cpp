#include<iostream>
#include"lab.h"
using namespace std;

void createMatrix(matrix & m , int rows=1, int cols=1)
{
	m.rows = rows;
	m.cols = cols;
	m.data = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		m.data[i] = new int[cols];
	}
	
}
void printMatrix( matrix  s)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << s.data[i][j]<<" ";
		}
		cout << "\n";
	}
}
matrix transpose(matrix s1)
{
	
	
		matrix s;
		s.data = new int*[3];
		for (int j = 0; j < 3; j++)
		{

			s.data[j] = new int[3];
		}

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				s.data[i][j] = s1.data[j][i];
			}
		}

		return s;

	
}
int& at( matrix &s,int r,int c)
{
	return *(*(s.data + r) + c);
}
matrix getClone(matrix & m)
{
	matrix x;
	createMatrix(x, m.rows,m.cols);
	x.rows = m.rows;
	x.cols = m.cols;
	for (int i = 0; i < x.rows; i++)
	{
		for (int j = 0; j < x.cols; j++)
		{
			x.data[i][j] = m.data[i][j];
		}
	}
	return x;
}
bool isSymmetric(matrix m)
{
	bool status;
	matrix x;
	x = transpose(m);
	for (int i = 0; i < m.rows; i++)
	{
		for (int j = 0; j < m.cols; j++)
		{
			if (x.data[i][j] != m.data[i][j])
			{
				return false;
			}
			
		}
	}
	return status;
}
matrix add(matrix m1, matrix m2)
{
	
	matrix sum;
	createMatrix(sum, m1.rows, m1.cols);
	
	sum.rows = m1.rows;
	sum.cols = m1.cols;
	
	for (int i = 0; i < m1.rows; i++)
	{
		for (int j = 0; j < m1.cols; j++)
		{
			sum.data[i][j] = m1.data[i][j] + m2.data[i][j];
		}
	}
	return sum;
}