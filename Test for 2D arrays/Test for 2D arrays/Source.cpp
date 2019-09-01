#include<iostream>
using namespace std;
//void hello(int *a)
//{
//	for (int i = 0; i <= 1; i = i + 1)
//	{
//		cout << a[i];
//	}
//}
//int main()
//{
//	int a[2] = { 1,2};
//	hello(a);
//}
//
//void hello(char *p)
//{
//	
//	
//		cout << p;
//	
//}
//int main()
//{
//	char a[5] = { 'a','b','c' };
//	cout << &a[1];
//	cout << (int *)a;
//	hello(a);
//
//}

//
//void hello(char *p)
//{
//	int r, c;
//	cin >> r >> c;
//	cout << *(p + r * 10 + c);
//}
//int main()
//{
//	char a[2][10] = { "ahmed","bilal" };
//	//cout << a[1];
//	hello(&a[0][0]);
//	
//}


//
//void hello(char *arr )
//{
//	cout<<arr[1];
//}
//int main()
//{
//	char a[3][5] = {65,66,67,'\0',68,69,97,98};
//	cout << a[0];
//	hello(a[0]);
//}

void hello(char *arr)
{
	cout<<*(arr+1*5+3);//arr[1][3]
	cout << "\n";
	cout << arr[1];
}
//
//int main()
//{
//	char a[2][5] = { "hell","oops" };
//	//cout << *(a+1);
//	cout << a[1];
//	cout << "\n ";
//	cout << &a[1];
//	hello((char*)a);
//}


//
//void hello(char (*arr)[5])
//{
//	cout << arr[1][3];
//	cout << "\n";
//	cout << arr[1];
//}
//int main()
//{
//	char a[2][5] = { "hell","oops" };
//	//cout << *(a+1);
//	cout << a[1];
//	cout << "\n ";
//	cout << &a[0][0];
//	hello(a);
//}