#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
//int main()
//{
//	char ch;
//	ch = 'ab'; //prints b
//	cout << ch;
//}

//int main()
//{
//	char ch;
//	ch = 'ab';
//	cout <<sizeof(char);
//}

//int main()
//{
//	char ch;
//	cin >> ch;
//	cout << ch;
//}

//int main()
//{
//	float a;
//	a = 12.345l;
//	cout << a;
//}
//
//
//int main()
//{
//	double d;
//	d = 12 / 5;
//	cout << d<<" ";
//	d = (float)12 / 5;
//	cout << d;
//	d = (char) 65/ 5;
//	cout << d << " ";
//}

//
//int main()
//{
//	srand(time(0));
//	int x;
//	int min, max;
//	min = 6;
//	max = 10;
//	 
//	
//		cout << min + rand() % (max - min + 1);
//		cout << min + rand() % (max - min + 1);
//		cout << min + rand() % (max - min + 1);
//		cout << min + rand() % (max - min + 1);
//		cout << min + rand() % (max - min + 1);
//	
//}

//int main()
//{
//	int min, hour;
//	min = 1; hour = 2;
//	cout.fill('*');
//	cout << setw(2) << min;
//	cout.fill('0');
//	cout<< setw(2) << hour;
//
//}
//
//int main()
//{
//	double a;
//	a = 21345.567;
//	//cout << setprecision(5)<<fixed<<a<<"\n";
//	float i = 23.0;
//	cout <<showpoint<< i;
//}
//int main()
//{
//	int i = 23;
//	cout << hex << i;
//	cout << "\n";
//	cout << oct << i;
//	i = 023;
//	cout << i;
//
//}


//int main()
//{
//	int i = 0;
//	char ch;
//	cin.get(ch);
//	cout << ch;
//}

//
//int main()
//{
//	const int i = 20;
//	char ch[i];
//	/*cin >> ch;
//	cout << ch;*/
//	/*cin.get(ch, 10);
//	cout << ch;*/
//	cin.getline(ch, 5);
//	cout << ch;
//	/*strcpy(ch, "hello bilal");
//	cout << ch;*/
//	/*strcpy_s(ch, "hello bila");
//	cout << ch;*/
//}


//
//int main()
//{
//	int ran;
//	srand(time(0));
//	ran = rand() % 5;
//	switch (ran)
//	{
//	case 1:
//	{
//		cout << "1";
//		break;
//	}
//	case 2:
//	{
//		cout << "2";
//		break;
//	}
//	case 3:
//	{
//		cout << "3";
//		break;
//	}
//	case 4:
//	{
//		cout << "4";
//		break;
//	}
//	case 0:
//	{
//		cout << "0";
//		break;
//	}
//	default:
//	{
//		cout << "5";
//	}
//	}
//}


//int main()
//{
//	int x, y;
//	char ch;
//	cin.get(ch);
//	cin.ignore(50, '\n');
//	cin >> x;
//	cin.ignore(50, 'E');
//	cin >> y;
//	cout << x << " " << y << " " << ch;
//}

//int main()
//{
//	int age;
//	char ch[50];
//	cin >> age;
//	cin.getline(ch, 50);
//	cout << age << " ";
//	cout << ch;
//}



//

//int main()
//{
//	char ch;
//	cin >> ch;
//	if (ch <= 90 && ch >= 65)
//	{
//		ch = ch + 32;
//		cout << ch;
//	}
//}

//int main()
//{
//	char ch;
//	for (int i = 0; i <= 127; i++)
//	{
//		ch = i;
//		if (i % 20==0)
//			cout << "\n";
//		cout << ch;
//	}
//}

//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		cout << i;
//		if (i == 5)
//		{
//			continue;
//		}
//		i = i + 1;
//	}
//	cout << "hello";
//}



//
//bool isPrime(int);
//int main()
//{
//	int num;
//	cout << "Enter number";
//	cin >> num;
//	if (isPrime(num))
//	{
//		cout << "Prime";
//	}
//	else
//		cout << "not prime";
//}
//bool isPrime(int num)
//{
//	bool status = true;
//	int c = 2;
//	for (; c < num && status; c++)
//	{
//		if (num%c == 0)
//		{
//			status = false;
//		}
//	}
//	return status;
//}

//
//int main()
//{
//	char ch;
//	cin >> ch;
//	cout << ch;
//}
//
//int main()
//{
//	double a = 2.375;
//	/*if (a == 2.43)
//	{
//		cout << "hello";
//	}
//	else if (a == 2.43f)
//		cout << "hi";*/
//	float b = 2.375;
//	if (a > b)
//		cout << "a>b";
//	else if (a == b)
//		cout << "a==b";
//	else
//		cout << "dont know";
//}
//
//void f(int *a)
//{
//	a[3] = 1;
//}
//int main()
//{
//	int  arr[5];
//	f(arr);
//	cout << arr[3];
//}


////int main()
////{
////
////	int n, i, j;
////	cout << "enter no of rows";
////	cin >> n;
////	char ch = 'A';
////	for (int i = n; i > 0; i--)
////	{
////		for (int d = 1; d <= n - i; d++)
////		{
////			cout << " ";
////		}
////		for(int j=1;j<=i;j++)
////		{
////			cout << ch;
////			ch++;
////		}
////		for (int s = 1; s <= i - 1; s++)
////		{
////			cout << ch;
////			ch++;
////		}
////		ch = 'A';
////		cout << "\n";
////	}
////}
//
//int main()
//{
//	cout << "\h";
//}


//int main()
//{
//	int a;
//	double y;
//	cin >> a;
//	cout << a << " " ;
//}

//
//int main()
//{
//	char ch[20];
//	cin.get(ch,20);
//	cout << ch;
//}

//
//namespace hello
//{
//	int a = 10;
//}
//namespace hi
//{
//	int a = 20;
//	
//}
//using namespace hello;
////using namespace hi;
////int a = 21;
//int main()
//{
//	//int a = 2;
//	cout << a;
//////}

//int main()
//{
//	 int a = 10;
//	 const  int * const ptr = &a;
//	 cout<<*ptr;
//	 a--;
//	 
//	 cout << *ptr << " " << a;
//
//
//}

//
//void f(char p[])
//{
//	cout << p;
//}
//int main()
//{
//	char s[20] = {"hello bilal"};
//	f(s);
//}

//
//int main()
//{
//	char s[6] = {"hi\0le"};
//	cout << s<<" "<<(int *)s;
//}

//int main()
//{
//	char ch[2][4] = { "hel","bil" };
//	cout << ch[1]<<" ";
//	cout << ch[1][0];
//}

//
//int main()
//{
//	int *p = new int[3];
//	p[1] = 23;
//	cout << p[1];
//	delete []p;
//	p = 0;
//	
//}


void f(int *p)
{
	cout<<*(p+1*4+2);
}
int main()
{
	int (*p)[4] = new int[3][4];
	p[1][2] = 23;
	cout << p[1][2];
	f((int*)p);
}
//
//int main()
//{
//	int a = 21;
//	int c = 2;
//	int &b = a;
//	cout << b;
//	int &e = c;
//	
//}

//
//int main()
//{
//	char ch[3][3];
//	cout << (void*)&ch[1]<<" ";
//	cout << (void*)ch[1];
//}

//
//int main()
//{
//	const int a = 90;
//	 int &p = (int &) a;
//	p= 9; 
//	cout << a << p;
//}


//void f(int *);
//int main()
//{
//	int *p;
//	void f(int *);
//		int a = 10;
//		p = &a;
//		f(&a);
//		cout << a;
//	
//	cout << *p;
//}
//
//void f(int *p)
//{
//	*p = 93;
//}

//
//int main()
//{
//	const int *p;
//
//	int a = 10;
//	p = &a;
//	//*p = 93;
//	cout << a;
//	cout << *p;
//}
