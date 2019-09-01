# include<iostream>
using namespace std;
//int giveMaximum(int s[])
//{
//	int max = s[0];
//	int index;
//	for (int i = 0; i < 10; i = i + 1)
//	{
//		if (s[i] > max)
//		{
//			max = s[i];
//			index = i;
//		}
//	}
//	return index;
//}
//int main()
//{
//	const int M=2;
//	const int N = 3;
//	int arr[M][N];
//	for (int i = 0; i < M; i = i + 1)
//	{
//		for (int j = 0; j < N; j = j + 1)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int sum[100] = {};
//	for (int i = 0; i < N-1; i = i + 1)
//	{
//		sum[0] = sum[0] + arr[0][i];
//	}
//	for (int i = 0; i < N-1; i = i + 1)
//	{
//		sum[1] = sum[1] + arr[1][i];
//	}
//	for (int i = 0; i < N ; i = i + 1)
//	{
//		sum[2] = sum[2] + arr[0][i];
//	}
//	for (int i = 0; i < N; i = i + 1)
//	{
//		sum[3] = sum[3] + arr[1][i];
//	}
//	for (int i = 0; i < M ; i = i + 1)
//	{
//		sum[4] = sum[4] + arr[i][0];
//	}
//	for (int i = 0; i < M; i = i + 1)
//	{
//		sum[5] = sum[5] + arr[i][1];
//	}
//	for (int i = 0; i < M; i = i + 1)
//	{
//		sum[6] = sum[6] + arr[i][2];
//	}
//	for (int i = 0; i < M; i = i + 1)
//	{
//		for (int j = 0; j < N-1; j = j + 1)
//		{
//			sum[7] = sum[7] + arr[i][j];
//		}
//	}
//	for (int i = 0; i < M; i = i + 1)
//	{
//		for (int j = 1; j < N ; j = j + 1)
//		{
//			sum[8] = sum[8] + arr[i][j];
//		}
//	}
//	for (int i = 0; i < M; i = i + 1)
//	{
//		for (int j = 0; j < N; j = j + 1)
//		{
//			sum[9] = sum[9] + arr[i][j];
//		}
//	}
//	/*for (int i = 0; i < 10; i = i + 1)
//	{
//		cout << sum[i] << "\n";
//	}*/
//	cout<<"Maximum sub array is of sum index"<<giveMaximum(sum);
//}


