#include<iostream>
using namespace std;
//struct hello
//{
//	char ch[50];
//};
//int main()
//{
//	hello ch1;
//	cin.get(ch1.ch, 50);
//	cout << ch1.ch;
//}

int main()
{
	char ch1[50];
	strcpy_s(ch1, "hello");
	cout << ch1;
}