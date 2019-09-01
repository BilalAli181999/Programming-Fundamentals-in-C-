#include<iostream>
using namespace std;
/*  int rev=0;
void final(int);
int reverse(int);
void isEven(int);
void binary(int);
int main()
{
	int num;
	cout << "enter a number";
	cin >> num;
	isEven(num);
}
void isEven(int number)
{
	if (number % 2 == 0)
	{
		binary(number);
		
	}
	else
		cout << "not even";
}
void binary(int n)
{
	int  rem;
	int p = 0;
	while (n != 0)
	{
		rem = n % 5;
		//cout << rem << "\t";
		
		p = (p * 10) + rem;
		n = n / 5;
	}
      //final(p);
}
int reverse(int n)
{
	
	rev = (rev * 10) + n;
	cout << "reverse" << rev;
	return rev;
}
void final(int f)
{
	while (f != 0)
	{
		int r;
		r = f % 10;
		cout << r<<"\n";
		f = f / 10;
	}

}

*/

/*

namespace hello
{
	void fun()
	{
		int a = 101;
	}
}*/
/*
int a = 101;
void fun(void);
int main()
{

	cout << "hello";
	int a = 25;
	int b = 99;
	cout << "a local \n" << a;
  //  using namespace hello;
	{ 
		cout << "a global \n" << :: a ;
		::a = ::a + 5;
	//	cout << "in braces" << a;
		cout << "\n in braces" << ::a;
	}
	fun();
	cout << a;
}
void fun()
{
	cout <<"vvv "<< a<<"\n";
}*/

/*


namespace hello
{
	int a = 10;
}
namespace hi
{
	int a = 15;
	int b = 5;
}
namespace bye
{
	int a = 20;
	int b = 8;
}
int main()
{
	int a = 757;
	{
		using namespace bye;

		cout << ::a;
		a = a - 2;
		cout << ::a;
		cout << b;
	}
		{
			using namespace hi;

			cout << a;
			a = a - 2;
			cout << a;
		}
}

*/
//#include <iostream>
//using namespace std;
/*
namespace first
{
	int x = 5;
	int a = 8;
}

namespace second
{
	double x = 3.1416;
	int a = 9;
}

int main() {
	
	{	
		using namespace first;
    	cout << second::x << '\n';
	}
	
	{
		using namespace second;
		cout << a  << '\n';
	}
	return 0;
}*/

int main()
{
	int a, b, c, d, e, f;
	a = 1;
	b = 2;
	c = 12;
	d = 5;
	e = 12;
	f = 9;
	if (a >= b&&a >= c&&a >= d&&a >= e&&a >= f)
	{
		cout << "a";
	}
	if (b > a&&b > c&&b > d&&b > e&&b > f)
	{
		cout << "b";
	}
	if (c > b&&c > a&&c > d&&c > e&&c > f)
	{
		cout << "c";
	}
	if (d > b&&d > a&&d > c&&d > e&&d > f)
	{
		cout << "d";
	}
	if (e > b&&e > a&&e > c&&e > d&&e > f)
	{
		cout << "e";
	}
	if (f> b&&f > a&&f > c&&f > e&&f > d)
	{
		cout << "d";
	}
}