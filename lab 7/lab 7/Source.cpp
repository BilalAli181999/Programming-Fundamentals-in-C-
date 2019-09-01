#include<iostream>
using namespace std;




/*
int prod = 1;
int giveDecimal(int);

int main()
{
	int binary;
	int sum = 0;
	int rev = 0;
	cout << "enter the binary number";
	cin >> binary;
	

	while(binary!=0)
	{
		int rem;
		rem = binary % 10;

		sum = sum + giveDecimal(rem);
		prod = prod * 2;
		binary = binary / 10;
	}
	cout << sum;
	return 0;
}
int giveDecimal(int n)
{

		int result = n*prod;
		return result;
}





*/
/*
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
int giveFrequency(int);
void  seperate(int);
int main()
{
	int x;
	cout << "enter the number";
	cin >> x;
	seperate(x);
	

}
void seperate(int n)
{
	int rem;
	while (n != 0)
	{
		
		rem = n % 10;
		giveFrequency(rem);
		n = n / 10;
	}
	
}
int giveFrequency(int digit)
{
	int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0,j=0;
	if (digit == 0)
	{
		a = a + 1;
	}
	if (digit == 1)
	{
		b = b + 1;
	}
	if (digit ==2 )
	{
		c = c + 1;
	}
	if (digit == 3)
	{
		d = d + 1;
	}
	if (digit == 4)
	{
		e = e+ 1;
	}
	if (digit == 5)
	{
		f = f + 1;
	}
	if (digit == 6)
	{
		g = g + 1;
	}
	if (digit == 7)
	{
		h = h + 1;
	}
	if (digit == 8)
	{
		i = i + 1;
	}
	if (digit == 9)
	{
		j = j+ 1;
	}
	
	return a, b, c, d, e, f, g, h, i, j;
}
*/
int y = 1;
int digit1;
int reverse(int);

void repeat(int);

int main()
{
	int num;
	cout << "enter the number";
	cin >> num;
	int a = reverse(num);
	
	repeat(a);
}
int reverse(int n)
{
	int rev = 0;
	while (n != 0)
	{
		int rem;
		rem = n % 10;
		rev = (rev * 10) + rem;
		n = n / 10;
	}
	return rev;
}
/*
int noValues(int value);
{
	int count = 0;
	while (value != 0)
	{
		int value = value / 10;
		count = count + 1;
	}
	return count;
}*/
void repeat(int number)
{
	
	int y = 1;
	while(number!=0)
	{
		
		
		digit1 = number % 10;
		
		if (digit1 == 0 && y==1)
		{
			
		}
		if (digit1 == 1 && y == 1)
		{
			cout << "one";
		}
		if (digit1 == 2 && y ==1)
		{
			cout << "two";
		}
		if (digit1 == 3 && y == 1)
		{
			cout << "three";
		}
		if (digit1 == 4 && y == 1)
		{
			cout << "four";
		}
		if (digit1 == 5 && y == 1)
		{
			cout << "five";
		}
		if (digit1 == 6 && y == 1)
		{
			cout << "six";
		}
		if (digit1 == 7 && y == 1)
		{
			cout << "seven";
		}
		if (digit1 == 8 && y == 1)
		{
			cout << "eight";
		}
		
		if (digit1 == 9 && y == 1)
		{
			cout << "nine";
		}
		
		if (digit1 == 0 && y == 2)
		{

		}
		if (digit1 == 1 && y == 2)
		{
			cout << "ten";
		}
		if (digit1 == 2 && y == 2)
		{
			cout << "twenty";
		}
		if (digit1 == 3 && y == 2)
		{
			cout << "thirty";
		}
		if (digit1 == 4 && y == 2)
		{
			cout << "fourty";
		}
		if (digit1 == 5 && y == 2)
		{
			cout << "fifty";
		}
		if (digit1 == 6 && y == 2)
		{
			cout << "sixty";
		}
		if (digit1 == 7 && y == 2)
		{
			cout << "seventy";
		}
		if (digit1 == 8 && y == 2)
		{
			cout << "eighty";
		}
		if (digit1 == 9 && y == 2)
		{
			cout << "ninty";
		}
		
		if (digit1 == 0 && y == 3)
		{

		}
		if (digit1 == 1 && y == 3)
		{
			cout << "hundred";
		}
		if (digit1 == 2 && y == 3)
		{
			cout << "two hundred";
		}
		if (digit1 == 3 && y == 3)
		{
			cout << "three hundred";
		}
		if (digit1 == 4 && y == 3)
		{
			cout << "four hundred";
		}
		if (digit1 == 5 && y == 3)
		{
			cout << "five hundred";
		}
		if (digit1 == 6 && y == 3)
		{
			cout << "six hundred";
		}
		if (digit1 == 7 && y == 3)
		{
			cout << "seven hundred";
		}
		if (digit1 == 8 && y == 3)
		{
			cout << "eight hundred";
		}
		if (digit1 == 9 && y == 3)
		{
			cout << "nine hundred";
		}

		if (digit1 == 0 && y == 4)
		{

		}
		if (digit1 == 1 && y == 4)
		{
			cout << "one thousand";
		}
		if (digit1 == 2 && y == 4)
		{
			cout << "two thousand";
		}
		if (digit1 == 3 && y == 4)
		{
			cout << "three thousand";
		}
		if (digit1 == 4 && y == 4)
		{
			cout << "four thousand";
		}
		if (digit1 == 5 && y == 4)
		{
			cout << "five thousand";
		}
		if (digit1 == 6 && y == 4 )
		{
			cout << "six thousand";
		}
		if (digit1 == 7 && y == 4)
		{
			cout << "seven thousand";
		}
		if (digit1 == 8 && y == 4)
		{
			cout << "eight thousand";
		}
		if (digit1 == 9 && y == 4)
		{
			cout << "nine thousand";
		}
		number = number / 10;
		int y = y+1;
	}
}


