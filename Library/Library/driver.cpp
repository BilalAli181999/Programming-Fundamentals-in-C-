#include<iostream>
#include"library.h"
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct book
{
	char author[30];
	char bookName[30];
	date d1;
};

int main()
{
	book b[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "***FOR BOOK-" << i+1 << "***"<<"\n";
		cout << "Enter date\n";
		cin >> b[i].d1.day;
		cout << "Enter month\n";
		cin >> b[i].d1.month;
		cout << "Enter year\n";
		cin >> b[i].d1.year;
		cin.ignore();
		cout << "Enter author name\n";
		cin.get (b[i].author,30);
		cin.ignore();
		cout << "Enter book name";
		cin.get(b[i].bookName,30);
	}
}