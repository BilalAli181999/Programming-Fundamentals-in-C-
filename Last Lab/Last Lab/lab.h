#pragma once
struct matrix
{
	int rows;
	int cols;
	int **data;
};
void createMatrix(matrix & , int , int );
void printMatrix(matrix  );
int& at(matrix &, int , int );
matrix transpose(matrix );
matrix getClone(matrix & );
bool isSymmetric(matrix m);
matrix add(matrix , matrix );