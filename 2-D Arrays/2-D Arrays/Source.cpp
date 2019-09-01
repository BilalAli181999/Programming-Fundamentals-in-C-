#include<iostream>
using namespace std;
void start();
int getTotal(int[][3], int, int);
int getAverage(int[][3], int, int);
int getRowTotal(int[][3], int);
int getColTotal(int[][3], int);
int getHighestInRow(int[][3], int);
int getLowestInRow(int[][3], int);
int main()
{
	start();
	return 0;
}
void start()
{
	const int rows = 3;
	const int col = 3;
	int rIndex;
	int cIndex;
	int rNo;
	int cNo;
	int arr[rows][col] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };
	cout<<"TOTAL:"<<getTotal(arr, rows, col);
	cout << "\n AVERAGE:" << getAverage(arr, rows, col);
	cout << "\n";
	cout <<"Enter the row  want to get the sum of:";
	cin >> rIndex;
	cout << "ROW TOTAL:" << getRowTotal(arr, rIndex);
	cout << "\n";
	cout << "Enter the column  to get the sum of:";
	cin >> cIndex;
	cout << "ROW TOTAL:" << getColTotal(arr, cIndex);
	cout << "\n";
	cout << "Enter the row  want to get the highest of:";
	cin >> rNo;
	cout << "\n";
	cout << "ROW HIGHEST:" << getHighestInRow(arr, rNo);
	cout << "\n";
	cout << "Enter the row to get lowest from:";
	cin >> rNo;
	cout << "\n";
	cout << "ROW LOWEST" << getLowestInRow(arr, rNo);
	cout << "\n";

}
int getTotal(int arr[][3], int rows, int col)
{
	int total = 0;
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < col; j = j + 1)
		{
			total = total + arr[i][j];
		}
	}
	return total;
}
int getAverage(int arr[][3], int rows, int col)
{
	int total = 0;
	int count = 0;
	int avg;
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < col; j = j + 1)
		{
			total = total + arr[i][j];
			count = count + 1;
		}
	}
	avg = total / count;
	return avg;
}
int getRowTotal(int arr[][3], int rowNo)
{
	int total = 0;
	for (int j = 0; j < 3; j = j + 1)
	{
		total = total + arr[rowNo][j];
		
	}
	return total;
}
int getColTotal(int arr[][3], int colNo)
{
	int total = 0;
	for (int j = 0; j < 3; j = j + 1)
	{
		total = total + arr[j][colNo];

	}
	return total;
}
int getHighestInRow(int arr[][3], int rowNo)
{
	int max = arr[rowNo][0];
	for (int j = 0; j < 3; j = j + 1)
	{
		if (arr[rowNo][j] > max)
		{
			max = arr[rowNo][j];
		}
	}
	return max;
}
int getLowestInRow(int arr[][3], int rowNo)
{
	int min = arr[rowNo][0];
	for (int j = 0; j < 3; j = j + 1)
	{
		if (arr[rowNo][j]<min)
		{
		min=arr[rowNo][j];
		}
	}
	return min;
}
