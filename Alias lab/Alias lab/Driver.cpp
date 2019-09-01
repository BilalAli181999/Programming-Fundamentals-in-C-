#include<iostream>
#include"matrix.h"
#include<iomanip>
using namespace std;
int main()
{
	int rows = 2;
	int cols = 2;
	int rows1 = 2;
	int cols1 = 2;
	int rows2 = 2;
	int cols2 = 2;
	int**mat=0 ;
	int **mat1;
	int **mat2;
	int resultRows = 2;
	int resultCols = 2;
	createMatrix(mat, rows, cols);
	createMatrix(mat1, rows1, cols1);
	createMatrix(mat2, rows2, cols2);
	
	at(mat, 0, 0) = 1;
	at(mat, 0, 1) = 1;
	at(mat, 1, 0) = 0;
	at(mat, 1, 1) = 1;
	at(mat1, 0, 0) = 4;
	at(mat1, 0, 1) = 1;
	at(mat1, 1, 0) = 2;
	at(mat1, 1, 1) = 5;
	at(mat2, 0, 0) = 8;
	at(mat2,0, 1) = 2;
	at(mat2, 1, 0) = 3;
	at(mat2, 1, 1) = 7;
	printMatrix(mat1, resultRows, resultCols);
	printMatrix(mat2, resultRows, resultCols);
	mat=multiply(mat1, rows1, cols1, mat2, rows2, cols2, resultRows, resultCols);
	printMatrix(mat, resultRows, resultCols);

	//cout << mat1[1][1];
	/*at(mat, 1, 0) = 5;
	at(mat, 0, 1) = 9;*/
	/*for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			cin >> mat[i][j];
		}
	}*/
	//cout << at(mat, 2, 5);
	//cout << "\n" << at(mat, 2, 2);
	/*printMatrix(mat, rows, cols);
	if (isIdentity(mat, rows, cols))
		cout << "IDENTITY MATRIX";
	else
		cout << "NOT IDENTITY";
	if (isLowerTriangular(mat, rows, cols))
		cout << "\n lower triangular";
	else
		cout << "\n not lower triangular";
	if (isUpperTriangular(mat, rows, cols))
		cout << "\n upper triangular";
	else
		cout << "\n not upper triangular";


*/








	delete[] mat;
	mat = 0;
	return 0;
}
