#include<iostream>
using namespace std;
/*
int countCarry(int, int);
int main()
{
	int num1, num2;
	cout << "enter number 1";
	cin >> num1;
	cout << "enter number 2";
	cin >> num2;
	cout<<"carry count"<<countCarry(num1, num2);

	return 0;
}
int countCarry(int n1, int n2)
{
	int a, b;

	int count = 0;
	while (n1 != 0 || n2!=0)
	{
		
		a = n1 % 10;
		n1 = n1 / 10;
		b = n2 % 10;
		n2 = n2 / 10;
		int result = a + b;
		if (result > 9)
		{
			count = count + 1;
		}
	}
	return count;
}*/







/*

bool ifOverflow(int, int);
bool ifUnderflow(int, int);
int add(int, int);
int main()
{
	int num1, num2;
	cout << "enter number 1"<<"\n";
	cin >> num1;
	cout << "enter number 2"<< "\n";
	cin >> num2;
	cout << "sum=" << add(num1, num2);

	return 0;
}

bool ifOverflow(int r)
{
	bool status;
	if (r > 32767)
	{
		status = true;
	}
	else
	{
		status = false;
	}
	return status;
}

bool ifUnderflow(int r)
{
	bool status;
	if (r < -32767)
	{
		status = true;
	}
	else
	{
		status = false;
	}
	return status;
}


int add(int n1, int n2)
{
	int result = n1 + n2;
	if (ifOverflow(result))
	{
		cout << "arithmetic overflow";
		exit(0);
	}
	if (ifUnderflow(result))
	{
		cout << "arithmetic underflow";
		exit(0);
	}
	
	return result;
}  
*/




/*
int power(int, int);
int fact(int);
int main()
{
	int i=1;
	int base, exp;
	cout << "enter the number to find cos of";
	cin >> base;
	exp = 2;
	int result;
	int sum = 1;
	do
	{
		
		
		for (int counter = 1; counter <= base; counter = counter + 1)
		{
			if (counter % 2 == 1)
			{
				sum = sum -( power(base, exp)/fact(exp));
			}
			if (counter % 2 ==0)
			{
				sum = sum +( power(base, exp)/fact(exp));
			}
			exp = exp + 2;
		}
	} 
	while (i <= base);
	cout << "cos of" << base << " " << sum;

	return 0;
}
int power(int base, int exp)
{
	int pow=1;
	for (int j = 1; j <= exp; j = j + 1)
	{
		pow = pow*base;
	}
	return pow;
}
int fact(int exp)
{
	int factorial = 1;
	for (int k = 1; k <= exp; k = k + 1)
	{
		factorial = factorial*k;
	}
	return factorial;
}  */


/*
#include<ctime>
int main()
{
	srand(time(0));
	cout << 100 + rand() %(200-100+1)<<"\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";
	cout << 100 + rand() % (200 - 100 + 1) << "\n";


	return 0;

}*/

/*
int main()
{
	cout << "enter ";
	char ch[10];
	cin.getline(ch, 10);
	while (!cin.good())
	{
		cin.clear();
		while (cin.get() != '\n')
		{

		}
		cout << "enter again";
		cin.getline(ch, 10);
	}
	return 0;
}*/



int main()
{
	int age;
	cin >> age;
	char name[50];
	cin.getline(name, 50);
	cout << age <<"\n"<< name;
	return 0;
}