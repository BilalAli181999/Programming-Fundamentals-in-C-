//#include<iostream>
//using namespace std;
//int main()
//{
//	int  N;
//	cout << "Enter number of operators";
//	cin >> N;
//	int D[100000] = {};
//	for (int i = 0; i < N; i = i + 1)
//	{
//		cout << "Enter day shift for operator" << i + 1<<":";
//		cin >> D[i];
//	}
//	int n[100000] = {};
//	for (int i = 0; i < N; i = i + 1)
//	{
//		cout<<"Enter night shift for operator" << i + 1<<":";
//		cin >> n[i] ;
//	}
//	int X;
//	cout << "Enter the overtime limit";
//	cin >> X;
//	int overTime = 0;
//	for (int i = 0; i < N; i = i + 1)
//	{
//		if ((D[i] + n[i]) > X)
//		{
//			overTime = overTime + 100 * ((D[i] + n[i]) - X);
//		}
//	}
//	cout << "***OVER TIME PAY***" << overTime;
//	return 0;
//}