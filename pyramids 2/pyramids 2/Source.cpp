#include<iostream>
using namespace std;
int main()
{
	
	
	int n;
	cout << "enter no of rows";
	cin >> n;
	int i, j, dots;
	int y = n - 2;
	j = 1;
	for (i = 1; i <= n; i = i + 1)
	{
		for (dots = 1; dots <= n - i; dots = dots + 1)
		{
			cout << "-";
		}
		dots = 1;
		for (; j <= i; j = j + 1)
		{
			cout << "*";
		}
		j = 1;
		cout << "\n";
	}
	
	
	/*
	
	int n,num;
	cout << "enter no of rows";
	cin >> n;
	num = 1;
	int i = 1;
	int j = n;
	while (j >= 0)
	{
		while (i <= j)
		{
			cout << num<<"  ";
			i = i + 1;
			num = num + 1;
		}
		i = 1;
		j = j - 1;
		cout << "\n";
	}  

	*/

	/*

	int n, num;
	cout << "enter no of rows";
	cin >> n;
	int i = 1;
	int j = n;
	while (j >= 0)
	{
		while (i <= j)
		{
			cout << n << "  ";
			i = i + 1;
			
		}
		i = 1;
		j = j - 1;
		n = n - 1;
		cout << "\n";
	}    

	*/
	/*
	int n, num;
	cout << "enter no of rows";
	cin >> n;
	num = 1;
	int y=4;
	int i = 1;
	int j = n;
	while (j >= 0)
	{
		while (i <= j)
		{
			cout << n - y;
			cout<< "*";
			i = i + 1;
			y = y -1;
			num = num + 1;
		}
		y = 4;
		i = 1;
		j = j - 1;
		
		cout << "\n";
	}     

	*/
	/*

	int n, i, j, dots, space;
	cout << "enter number of rows";
	cin >> n;
	int y = 1;
	for (i = 1; i <= n; i = i + 1)
	{
		for (dots = 1; dots <= n - i; dots = dots + 1)
		{
			cout << ".";
		}
		dots = 1;
		for (j = 1; j <= 1; j = j + 1)
		{
			cout << i;
		}
		

		for (space = 1; space <= i - y; space = space + 1)
		{
			cout << ".";
		}

		
		cout << "\n";
	}
	*/

/*
int n, i, j, dots, space;
cout << "enter number of rows";
cin >> n;
int y = 1;
for (i = 1; i <= n; i = i + 1)
{
	for (dots = 1; dots <= n - i; dots = dots + 1)
	{
		cout << " ";
	}
	dots = 1;
	for (j = 1; j <= 1; j = j + 1)
	{
		cout << "*";
	}


	for (space = 1; space <= i - y; space = space + 1)
	{
		cout << " "<<"*";
	}
	cout << "\n";
}


	
*/

/*

int n, i, j, dots, space;
cout << "enter number of rows";
cin >> n;
int a = 4;
int y = 1;
for (i = 5; i>0; i = i - 1)
{
	for (dots = 1; dots <= n - i; dots = dots + 1)
	{
		cout << " ";
	}

	for (j = 1; j <= i; j = j + 1)
	{
		cout << j;
		
	}
	
	int b = 6;

	for (space = 1; space <= i - y; space = space + 1)
	{
		cout  <<b ;
		b = b + 1;
	}
	cout << "\n";
}

	*/

/*

int n, i, j;
cout << "enter number of rows";
cin >> n;

cout << "*"<<"\n";

for (i = 1; i <= n; i = i + 1)
{
	
	for (j = 1; j <= (2 * i) + 1; j = j + 1)
	{
		cout << "*";
	} 
	cout << "\n";

}


*/
/*

int a, b;
int n = 5;
for (a = n; a >=0; a = a-1)
{

	for (b = 1; b <= (2 * a) + 1; b = b + 1)
	{
		cout << "*";
	}
	cout << "\n";

}
*/
/*
int n, i, j;
cout << "enter no of rows";
cin >> n;
char ch = 'A';
for (i = n; i > 0; i = i - 1)
{
	for (j = 1; j <= i; j = j + 1)
	{
		cout << ch;
		ch = ch + 2 ;
	}
	ch = 'A';
	cout << "\n";
}*/

char ch1[20];
char ch2;
ch2='a';
int n;
cout << "enter number of students";
cin >> n;
for (int i = 1; i <= n; i = i + 1)
{
	cout << "enter names of students";
	cin.getline(ch1, 20);
	
	if ( (int)ch1>(int)ch2)
	{
		ch2 =(int) ch1;
	}
}
cout << ch2;


/*
int num; 
cout << "enter a number";
cin >> num;
int a,b;
b = -1;
int flag=0;
int flag1 = 0;
int quotient;
int remainder;/*
while (flag != 1)
{
	/*
	while (num != 0 && flag1 != 1)
	{
		quotient = num / 2;
		remainder = num % 2;
		num = quotient;
		a = remainder;

		if (a == b)
		{
			flag1 = 0;
		}
		b = a;
	}
	if (flag1 = 0)
	{
		cout << "not sparse";
	}
	else if(flag1 = 0)
	{
		cout << "sparse";
	}


	

	*/
	
return 0;
}

