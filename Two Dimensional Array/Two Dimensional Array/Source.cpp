#include<iostream>
using namespace std;
/*
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
	cout << "TOTAL:" << getTotal(arr, rows, col);
	cout << "\n AVERAGE:" << getAverage(arr, rows, col);
	cout << "\n";
	cout << "Enter the row  want to get the sum of:";
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
	cout << "ROW LOWEST:" << getLowestInRow(arr, rNo);
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
			min = arr[rowNo][j];
		}
	}
	return min;
}

*/






void takeInput();
void findTreasure(int [][6]);
int main()
{
	 takeInput();
	 return 0;
}
void takeInput()
{
	int arr[6][6] = { {0,0,0,0,0,0}, 
					{0,33,21,32,41,25},
					{0,14,42,43,14,31},
					{0,54,45,52,42,23},
					{0,33,15,51,31,35},
					{0,21,11,33,13,23} 
	};
/*	for (int i = 1; i < 6; i = i + 1)
	{
		for (int j = 1; j < 6; j = j + 1)
		{
			cin >> arr[i][j];
		}
	}*/
	findTreasure(arr);
}
void findTreasure(int arr[][6])
{
	
	int num;
	int i = 1;
	int j = 1;
	bool status = true;
	while(status)//!(i == (arr[i][j] / 10) && j == (arr[i][j] % 10)))
	{
		cout << "Visited:";
		cout << "(" << i << "," << j << ")\n";
		num = arr[i][j];
		j = num %10;
		i = num/ 10;
		if (i == (arr[i][j] / 10) && (j == arr[i][j] % 10))
			status = false;
	}
	
		cout<<"TREASURE AT:"<< "(" << i << "," << j << ")";
}


/*

void takeInput();
void giveSaddle(int[][3], int, int);



int main()
{
	takeInput();
	return 0;
}
void takeInput()
{
	//int row, col;
	int arr[3][3] = { { 12,13,11 },{ 23,45,13},{ 22,47,51 } };
	for (int i = 0; i < 3; i = i + 1)
	{
		for (int j = 0; j < 3; j = j + 1)
		{
			//row = i;
			//col = j;
			giveSaddle(arr, i, j);
		}
	}
}
void giveSaddle(int arr[][3], int rNo, int cNo)
{
	int z = 0;
	bool status = true;
	int val = arr[rNo][cNo];
	int count = 0;
	//for (int x = 0; x < 3; x = x + 1)
	//{
		//for (int y = 0; y < 3; y = y + 1)
		//{
		/*	if (arr[x][y] == val)
			{
				z = z + 1;
			}*/
	
		/*	while (status)
			{
				for (; z < 3  ; z = z + 1)
				{


					if (arr[z][cNo] == val)
					{
						z = z + 1;
					}
					if (arr[rNo][cNo] >= arr[rNo][z] && arr[rNo][cNo] <= arr[z][cNo] && status)
					{
						cout << "\n Saddle Point Coordinates:" << "ROW:" << " " << rNo << "\t" << "COLUMNS:" << " " << cNo;
						status = false;
						count = count + 1;
					}
					
				}
			}
		
	
	if (count == 0)
		cout << "No Saddle Points";
}

*/