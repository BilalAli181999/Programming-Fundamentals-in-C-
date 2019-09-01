#include<iostream>
using namespace std;


//struct hello
//{
//	int hi;
//	char ch;
//};
//hello copy(hello *s)
//{
//	hello s3;
//	s3 = *s;
//	return s3;
//}
//
//int main()
//{
//	hello s1,s4;
//	s1.hi = 21;
//	s1.ch = 'a';
//	
//	s4=copy(&s1);
//	cout<<s4.hi;
//	cout << s4.ch;
//}

//
//struct matrix
//{
//	int **data;
//};
//void createSet(matrix &set)
//{
//	set.data = new int*[3];
//	for (int i = 0; i < 3; i++)
//	{
//		set.data[i] = new int[3];
//	}
//	
//}
//void displayData(matrix & s)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << s.data[i][j]<<" ";
//		}
//		cout << "\n";
//	}
//}
//matrix transverse(matrix s1)
//{
//	
//	
//		matrix s;
//		s.data = new int*[3];
//		for (int j = 0; j < 3; j++)
//		{
//
//			s.data[j] = new int[3];
//		}
//
//		for (int i = 0; i < 3; i++)
//		{
//
//			for (int j = 0; j < 3; j++)
//			{
//				s.data[i][j] = s1.data[j][i];
//			}
//		}
//
//		return s;
//
//	
//}
//
//
//void addData(matrix &s,int r,int c,int val)
//{
//	s.data[r][c] = val;
//}
//int main()
//{
//	matrix set1;
//	set1.data = 0;
//	createSet(set1);
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//	      set1.data[i][j]=0;
//		 
//		}
//	}
//	addData(set1, 2, 1, 21);
//	addData(set1, 2, 0, 1);
//	addData(set1, 1, 2, 11);
//	addData(set1, 0, 0, 31);
//	addData(set1, 2, 2, 71);
//	displayData(set1);
//	matrix s5;
//	s5 = transverse(set1);
//	displayData(s5);
//}


//
//int main()
//{
//	int n = 5;
//	char ch = 'A';
//	for (int i = 0; i < n; i++)
//	{
//		for (int s = 0; s <= n - i; s++)
//		{
//			cout << " ";
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			cout << ch;
//			if (ch == 'F')
//				ch = 'A';
//			ch = ch + 1;
//
//		}
//	
//		for (int dots = 0; dots <= i - 1; dots++)
//		{
//			cout << ch;
//			if (ch == 'F')
//				ch = 'A';
//			ch = ch + 1;
//		}
//	
//		cout << "\n";
//	}
//}


struct task
{
	char ch[50];
	date d;
	time t;
};
struct date
{
	int date;
	int month;
	int year;
};
struct time
{
	int second;
	int minute;
	int hour;
};
struct taskList
{
	task data[5];
};
int main()
{

}