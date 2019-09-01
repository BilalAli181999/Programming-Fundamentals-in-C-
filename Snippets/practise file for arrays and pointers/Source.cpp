#include<iostream>
using namespace std;

//SNIPPET-1

//int main()
//{
//	int a[5] = { 10,11,12,13,14 };
//	cout << sizeof(a) << "\n";  //gives no of bytes in a
//	cout << sizeof(a) / sizeof(int);   //give size of array
//	return 0;
//}

//SNIPPET-2

int main()
{
	float a = 12.375;
	int q = a; 
	cout<<q<<"\n";
	short int *p = (short int*)&a;  
	cout << *p << "\n";
	cout << hex << *p;
	return 0;


}


//SNIPPET-3

//int main()
//{
//	int a = 90;
//	int *p = &a;
//	cout << *p<<"\n";
//	unsigned long int aAddress = (unsigned long int)&a;  //converts address of a in int form
//	p =(int *) aAddress;  //again (int*)converts address of aAddress from int to hexadecimal
//	cout << *p;
//	return 0;
//}


//SNIPPET-4

//int main()
//{
//	int a = 854759;  //11010000101011100111(binary)
//	short int *p = (short*)&a;  //0000101011100111
//	cout << *p << "\n";
//	p = p + 1;
//	cout << *p;  //print data on remaining 2 bytes(1101)
//}


//SNIPPET-5

//int main()
//{
//	int a = 854759;  //11010000101011100111(binary)
// 	short int *p = (short*)&a;  //0000101011100111
//	cout << p[0] << "\n"; //take first 2 bytes
//	cout << p[1]; //take second two bytes
//	return 0;
//}


//SNIPPET-6

//int main()
//{
//	int a = 854759;  //11010000101011100111(binary)
//	short int *p = (short*)&a;  //0000101011100111
//	cout << *p << "\n";
//	p = p + 1;
//	cout << *p<<"\n";  //print data on remaining 2 bytes(1101)
//	cout << p[-1]<<"\n"; //prits 2791 as now p contains address of remaining two bytes
//	cout << p[0];  //prints 13
//	return 0;
//}


//SNIPPET-7
//
//int main()
//{
//	int a = 1145258561;
//	char *p = (char*)&a;
//	cout << p[0] << "\n" << p[1] << "\n" << p[2] << "\n" << p[3] << "\n";//prints A,B,C,D
//	return 0;
//}

//SNIPPET-8
//
//int main()
//{
//	int a[10] = { 65,66,67,68,69};
//	char *p = (char*)a;
//	cout << a[0];
//	cout << "\n" << p[0]; //reads first memory address of a[0]
//  cout << "\n" << p[4]; //reads first memory address of a[1]
//  cout << "\n" << p[1]; //reads second memory address of a[0]=000000
//}

//SNIPPET-9

//int main()
//{
//	int a[10] = { 1,2,3,4,5 };
//	char *p = (char*)a;
//	strcpy(p, "power of type casting");  //prints (power of type casting)
//	cout << p << "\n";
//	strcpy(p, "operations validity : based on data type ");  //prints(operations validity : based on data type) but with stack overflow runtime error
//	cout << p << "\n";
//	return 0;
//}

//SNIPPET-10

//int main() 
//{
//	int a[10] = { 1,2,3,4,5 };
//	double *p = (double*)a;
//	p[0] = 4.5;
//	p[1] = 4.5;
//	cout << p[1];  //prints 4.5
//}

//SNIPPET-11

//int main()
//{
//	int a = 10;
//	int b = 12;
//	cout << &a << "\n" << &b << "\n";
//	int *p = &b;
//	cout << p[0] << "\n";  //prints 12
//	cout<< p[1];  //prints garbage data
//  return 0;
//}

//SNIPPET=12

//int main()
//{
//	int a = 576;
//	float b = 9.5;
//	char c = 'a';
//	double d = 90.4;
//	void *p;
//	p = &a;
//	cout << *p;  //error due to no datatype pointer is unable to determine size
//	p = &b;
//	cout << *p; 
//	p = &c;
//	cout << *p;
//	p = &d;
//	cout << *p;
//}

//SNIPPET-13


//int main()
//{
//	int a = 576;
//	void *vp = &a;
//	cout << *(int *)vp << "\n";
//	int *pa = &a;
//	void **pda = (void**)&pa;
//	cout << "&a=" << &a << "\n";
//	cout << "pa=" << pa << "\n";
//	cout << "&pa" << &pa << "\n";
//	cout << "pda" << pda << "\n";
//	cout << "*pda" <<*pda << "\n";
//	cout << "**(int**)**pda" << **(int**)pda << "\n";
//}

//SNIPPET-14

//int main()
//{
//	int a = 576;
//	cout << &a << "\n";
//	cout << (void*)((char*)&a + 0)<<"\n";//char* converts &a in char and of first byte  but void* converts it again in hex and is same as &a(4 bytes)
//	cout << (int)(*(char*)&a + 0) << "\n";//*(char*) converts &a in char and of first byte and ponts to a's first byte
//	cout << (void*)((char*)&a + 1) << "\n";//char* converts &a in char and of second byte  but void* converts it again in hex and is same as &a(4 bytes)
//	cout << (int)(*(char*)&a + 1) << "\n";//*(char*) converts &a in char and of second byte and ponts to a's first byte
//	cout << (void*)((char*)&a + 2) << "\n";//char* converts &a in char and of third byte  but void* converts it again in hex and is same as &a(4 bytes)
//	cout << (int)(*(char*)&a + 2) << "\n";//*(char*) converts &a in char and of third byte and ponts to a's first byte
//	cout << (void*)((char*)&a + 3) << "\n";//char* converts &a in char and of fourth byte  but void* converts it again in hex and is same as &a(4 bytes)
//	cout << (int)(*(char*)&a + 3) << "\n";//*(char*) converts &a in char and of fourth byte and ponts to a's first byte

//}


//SNIPPET-15


//int *f(int*a)
//
//{
//	return a;
//}
//int main()
//{
//	int x = 90;
//	*(f(&x)) = 100; //it sends the address of x to function f
//	cout << x;
//	return 1;
//}


//SNIPPET-16

//int main()
//{
//	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  //since here row number is 0 thus *(a+0*4+i(col)) 
//	for (int i = 0; i < 12; i++)
//	{
//		cout << a[0][i]<<":";  //prints (1-12)
//
//	}
//}


//SNIPPET-17

//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	cout << a[0]<<":"<<&a[0][0]<<"\n"; //both print the address of row 0's first memoery
//	cout << a[1] << ":" << &a[1][0] << "\n";  //both print the address of row 1's first memoery
//	cout << a[2] << ":" << &a[2][0];  //both print the address of row 2's first memoery
//
//}


//SNIPPET-18
//
//#include<iomanip>
//int main()
//{
//
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int(*p)[4] = a;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << left << setw(4) << p[i][j];  //prints (1-12)
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << left << setw(4) << a[i][j];  //prints (1-12)
//		}
//	}
//}


//SNIPPET-19


//#include <iomanip>
//void printArray(int *p, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << left << setw(4) << p[i] << ":";
//	}
//}
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	printArray(a[0], 4);
//	cout << "\n";
//	printArray(&a[0][0], 4);
//	cout << "\n";
//	printArray(&a[1][2], 4);
//	cout << "\n";
//	return 1;
//}


//SNIPPET-20

//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int(*p)[4] = a;
//	int(*q)[5] = (int(*)[5])a;  //it has made array a of size a[3][5]
//	cout << q[0][2] << "\n" << q[1][2];  //prints 3 & 8
//}


//SNIPPET-21

//
//#include<iomanip>
//int main()
//{
//	int *q[3];
//	int row1[4] = { 1,2,3,4 };
//	int row2[4] = { 10,11,12,13 };
//	int row3[4] = { 45,12,7,3 };
//	q[0] = row1;
//	q[1] = row2;
//	q[2] = row3;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << left << setw(4) << q[i][j];
//		}
//	}
//}


//SNIPPET-22
//
//int main()
//{
//	char a[5][7] = { "ok","bye","well","pucit","pu" };
//	cout << a[0]<<"\n";
//	cout << &a[0] << "\n"; //prints address of first memory
//	cout << &a[3][1] << "\n"; //prints ucit
//	cout <<"\n";
//	cout << (void*)a[0]<<"\n";
//	char s[15] = "pucit geeks";
//	cout << s<<"\n";
//	cout << s[3] << "\n";
//	cout << &s[3] << "\n";
//
//	cout << (int *)a[3];
//}


//SNIPPET-23
//
//void f(char p[])
//{
//	cout << "\n" << p;
//	p[0] = 'H';
//}
//void g(char *q)
//{
//	cout << "\n" << q;
//	q[0] = 'H';
//}
//int main()
//{
//	char p[] = "I am variable";
//	char *q = "I am constant . Although my data type says otherwise.Tf you change me you will get error";  //since is a pointer
//	cout << p << "\n" << q << "\n";
//	p[0] = 'W';
//	//q[0] = 'N';
//	f(p);
//	//f(q);  //error since q is not address
//	g(p);
////	g(q);  //error since q is not address 
//	cout << "\n";
//	return 1;
//
//
//}

//SNIPPET-24

#include<iomanip>
//void showBytes(unsigned char* start, int len)
//{
//	int i;
//	for (i = len - 1; i >= 0; i = i - 1)
//	{
//		cout << hex << setw(2) << setfill('0') << (int)(*(start + i)) << " ";
//	}
//		cout << "\n";
//	
//}
//void showInt(int x)
//{
//	showBytes((unsigned char*)&x, sizeof(int));
//}
//void showFloat(float x)
//{
//	showBytes((unsigned char*)&x, sizeof(float));
//}
//void showPointer(void *x)
//{
//	showBytes((unsigned char*)&x, sizeof(void*));
//}
//int main()
//{
//
//	int i = 1;
//	float f = 1.0;
//	int *p = &i;
//	showFloat(f);
//	showInt(i);
//	showPointer(p);
//	showInt(i);
//	return 1;
//}

//SNIPPET-25

//void f(const int *p)
//{
//	//*p = 91;
//	cout << *p;
//}
//int main()
//{
//	int a = 90;
//	f(&a);
//	return 1;
//}