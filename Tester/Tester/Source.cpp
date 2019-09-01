
#include<iostream>
using namespace std;
/*
void swapPointers(int **, int **);
int main()
{

	////double x = 3.41;
	//float a = 9.81f;
	//
	//if(a>9.81)
	//	cout << "hello";
	//else if (a<9.81)
	//	cout << "not ok";
	//else
	//	cout << "h";
	int a = 10;
	int b = 20;
	int *pA = &a;
	int *pB = &b;
	swapPointers(&pA, &pB);
	cout << "pA : "<<*pA;
	cout << "pB : " << *pB;

	cout << "\n";
	return 0;
}
void swapPointers(int **pAAddress, int **pBAddress)
{
	int third = **pAAddress;
	**pAAddress = **pBAddress;
	**pBAddress = third;

}*/


/*
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i = i + 1)
	{
		int n, m;
		cin >> n;
		cin >> m;
		bool a[100] = {};
		for (int i = 0; i < n; i = i + 1)
		{
			cin >> a[i];
		}
		for(int j=1;j<=m;j=j+1)
		{
			bool b[100] = {};
			for (int i = 0; i < n; i = i + 1)
			{
				b[i]= a[i];
			}

			if (b[1] == 1)
			{
				a[0] = 1;
			}
			else
			{
				a[0] = 0;
			}
			if (b[n - 2] == 1)
			{
				a[n - 1] = 1;
			}
			else
			{
				a[n - 1] = 0;
			}
			for (int i = 1; i < n-1; i = i + 1)
			{
				if (b[i - 1] == 1 && b[i + 1] == 1)
				{
					a[i] = 1;
				}
				else
				{
					a[i] = 0;
				}
			}
		}
		for (int i = 0; i < n; i = i + 1)
		{
			cout << a[i]<<" ";
		}
		cout << "\n";
	}
}*/


/*
#include<iostream>
using namespace std;
int main()
{
	int N,X;
	cin >> N;
	cin >> X;
	int count=0;
	int skip = 0;
	int a[100000] = {};
	for (int i = 0; i < N; i = i + 1)
	{
		cin >> a[i];
	}
	for (int i = 0; i < N && skip<2; i = i + 1)
	{
		if (a[i] <= X)
		{
			count = count + 1;
		}
		if (a[i] > X)
		{
			skip = skip + 1;
		}
	}
	cout << count;
	return 0;
}*/

/*
#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int *p = a;
	p = p + 1;
	for (int i = 0; i < 4; i = i + 1)
	{
		//p[i] = 1;
		cout << p[i];
	}
	for (int i = 0; i < 5; i = i + 1)
	{
		cout << a[i];
	}
}*/
//#include<iostream>
//using namespace std;
//
//void takeInput();
//void findTreasure(int[][6]);
//int main()
//{
//	takeInput();
//	return 0;
//}
//void takeInput()
//{
//	int arr[6][6] = { { 0,0,0,0,0,0 },{ 0,33,21,32,41,25 },{ 0,14,42,43,14,31 },{ 0,54,45,52,42,23 },{ 0,33,15,51,31,35 },{ 0,21,52,33,13,23 } };
//	/*	for (int i = 1; i < 6; i = i + 1)
//	{
//	for (int j = 1; j < 6; j = j + 1)
//	{
//	cin >> arr[i][j];
//	}
//	}*/
//	findTreasure(arr);
//}
//void findTreasure(int arr[][6])
//{
//	//int e;
//	//int c = 1;
//	int i = 1;
//	int j = 1;
//	//bool status = true;
//	while (!(i == arr[i][j] / 10 && j == arr[i][j] % 10))
//	{
//		cout << "Visited:";
//		cout << "(" << i << "," << j << ")";
//		cout << "\n";
//		//e = arr[i][j];
//		//cout << e;
//		j == arr[i][j] % 10;
//		//	cout << j;
//		i == arr[i][j] / 10;
//		//	if (i == arr[i][j] / 10 && j == arr[i][j] % 10)
//		//	status = false;
//		//	c = c + 1;
//	}
//	if (i == (arr[i][j] / 10) && (j == arr[i][j] % 10))
//		cout << "TREASURE AT:" << "(" << i << "," << j << ")";
//}
//#include<iostream>
//using namespace std;
//void getStringLength(char *s)
//{
//	char v[30] ;
//	*v = *s;
//	cout << v;
//}
//int main()
//{
//char s[10];
//cout << "Enter string";
//cin >> s;
////cout << s;
//getStringLength(s);
//}


//#include<iostream>
//using namespace std;
//void hello(int a[][3]);
//int main()
//{
//	int a[2][3] = {};
//	hello(a);
//	
//
//}
//void hello(int a[][3])
//{
//	cout << a[1][2];
//}

//
//
//struct set
//{
//	int data[10];
//	int a;
//	int b;
//	int c;
//};
//int main()
//{
//	set ab;
//	cout<<sizeof(ab);
//
//}


//
//struct set
//{
//	int * ch;
//	int a;
//	int b;
//	int c;
//};
//int main()
//{
//	int h[10];
//
//	set ab = {h,2,3,4};
//	h[0] = 22;
//	cout << ab.ch[0] << ab.a << ab.b << ab.c;
//	
//
//}

//
//struct set
//{
//	char  *ch;
//	int a;
//	int b;
//	int c;
//};
//int main()
//{
//	int h[10];
//
//	set ab = { "abcdeghf",2,3,4 };
//	h[0] = 22;
//	//cout << ab.ch<< ab.a << ab.b << ab.c;
//	cout << sizeof(ab);
//
//}


