#include<iostream>
#include<ctime>
using namespace std;
int main()
{
/*	
    int tosses;
	cout << "enter number of tosses";
	cin >> tosses;
	srand(time(0));
	int head, tail;
	head = 0;
	tail = 0;
	int result;
	for (int i = 1; i <= tosses; i = i + 1)
	{
		result = rand() % 1;
		if (result = 0)
		{
			head = head + 1;
		}
		if (result = 1)
		{
			tail = tail + 1;
		}
	}
	cout << "heads:" << head;
	cout << "tails:" << tail;
*/ 




	/*
	int x = 500;
	int y = x / 2;
	cout << "if your no is = "<< x<<"press 1 if no >"<< x<<" press 2 if no < "<<x<< "press 3";
	int no;
	cin >> no;
	while (!(no == 1))
	{
		
		if (no == 2)
		{
			x = x + y;
			y = y - y / 2;
			cout << "is your num=" << x;
			cin >> no;
		}
		if (no == 3)
		{
			x = x - y;
			y = y - y / 2;
			cout << "is your no" << x;
			cin >> no;
		}
		
	}
	cout << "number" << x;  */




	/*

	int range;
	cout << "enter range";
	cin >> range;
	int x, y;
	x = range / 2;
	y = x / 2;
	cout << "if your no is = " << x << "press 1 if no >" << x << " press 2 if no < " << x << "press 3";
	int no;
	cin >> no;
	while (!(no == 1))
	{

	if (no == 2)
	{
	x = x + y;
	y = y - y / 2;
	cout << "is your num=" << x;
	cin >> no;
	}
	if (no == 3)
	{
	x = x - y;
	y = y - y / 2;
	cout << "is your no" << x;
	cin >> no;
	}

	}
	cout << "number" << x;   */




	/*

	int years;
	cout << "years";
	cin >> years;
	int avg;
	int totalRain;
	totalRain = 0;
	while (years < 1)
	{
		cout << "enter years";
		cin >> years;
	}
	for (int counter = 1; counter <= years; counter = counter + 1)
	{
		int yearlyRain = 0;
		for (int i = 1; i <= 12; i = i + 1)
		{ 
			int rain;
			cout << "enter rain fall in inches";
			cin >> rain;
			while (rain < 0)
			{
				cout << "enter rainfall";
				cin >> rain;
			}
			yearlyRain = yearlyRain + rain;
		}
		
		totalRain = totalRain + yearlyRain;
	}
	
	avg = totalRain / years;
	cout << "average rain=" << avg;
	cout << "total inches of rain fall=" << totalRain;
	cout << "total months=" <<years*12;
	*/

	
	/*
int terms;
cout << "enter the number of terms you want";
cin >> terms;
int a,b, result;
for (int counter = 1; counter <= terms; counter = counter + 1)
{
	if (counter == 1)
	{
		a = 0;
		b = 0;
		result = a + b;
		a = b;
		b = result;
	}
	if (counter == 2)
	{
		a = 0;
		b = 1;
		result = a + b;
		a = b;
		b = result;
	}
	if (counter == 3)
	{
		a = 0;
		b = 1;
		result = a + b;
		a = b;
		b = result;
	}
	if(counter>3)
	{
		
		result = a + b;
		a = b;
		b = result;

	}
}
cout << result;
*/
/*

int n;
cout << "enter number of terms";
cin >> n;
int base, exp,sum;
sum = 0;
int result;
int a, b;
int prod = 1;
int c, d;
int answer;

for (int counter = 1; counter <= n; counter = counter + 1)
{
	if (counter == 1)
	{
		a = 0;
		b = 1;
		result = a + b;
		a = b;
		b = result;
	}
	if (counter == 2)
	{
		a = 0;
		b = 1;
		result = a + b;
		a = b;

		b = result;
	}
	if (counter ==3)
	{ 
		a = 1;
		b = 1;
		result = a + b;
		a = b;
		b = result;
	}
	if (counter > 3)
	{
		
		result = a + b;
		a = b;
		b = result;
	}
	if (counter == 1)
	{
		c = 0;
		d= 0;
		answer = c + d;
		c = d;
		d= answer;
	}
	if (counter == 2)
	{
		c = 0;
		d = 1;
		answer = c + d;
		c = d;
		d = answer;
	}
	if (counter == 3)
	{
		c = 0;
		d = 1;
		answer = c + d;
		c = d;
		d = answer;
	}
	if (counter>3)
	{
		answer = c + d;
		c = d;
		d = answer;
	}
	base = result;
	exp = answer;
	//cout << base<<" "<<exp<<"\n";
	int count;
	for (count = 0; count<= exp; count = count + 1)
	{
		prod = prod*base;
		
	}

	if (counter % 2 == 0)
	{
		sum = sum - prod;
	}
	if (counter % 2 != 0)
	{
		sum = sum + prod;
	}
}
cout << "sum" << sum<<"\n";  
*/




int n;
cout << "enter no of rows";
cin >> n;
int i, j, dots;
int a = n-1;
int y = 1;
int space;
 j = 1;
 for (i = 1; i <=n; i = i +1)
 {
	 for (dots = 1; dots <= n - i; dots = dots + 1)
	 {
		 cout << ".";
	 }
	 dots = 1;
	 for (; j <= i; j = j + 1)
	 {
		 cout << n - a;
		 a = a - 1;

	 }

	 for (space = 1; space <= i - y;space=space+1)
	 {
		 cout << ".";
		 
	 }
	 
	
	 cout << "\n";
 }   
return 0;
}




