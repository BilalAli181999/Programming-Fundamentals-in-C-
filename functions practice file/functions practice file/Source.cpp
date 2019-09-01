#include<iostream>
using namespace std;


//even or not//


/*
bool isEven(int num)
{
	bool status;
	if (num % 2 == 0)
	{
		 status = true;
	}
	else
	{
		 status = false;
	}
	return status;
}
int main()
{
	int number;
	cout << "enter any number";
	cin >> number;
	if (isEven(number))
	{
		cout << "even number";
	}
	else
	{
		cout << "odd number";
	}
	return 0;
}*/



//table of a number//


/*

void displayTable(int number)
{
	for (int i = 1; i <= 10; i = i + 1)
	{
		cout << number << "*" << i <<"=" <<number*i<< "\n";
	}
}
int main()
{
	int tableNum;
	cout << "enter thre table number";
	cin >> tableNum;
	displayTable(tableNum);
	return 0;
}*/


//pattern//

/*
void pattern1(int n)
{

	int i, j, dots, space;
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
			cout  << " "<< "*";
		}
		cout << "\n";
	}
	

}
void pattern2(int b)
{

	int i, j, dots, space;
	int y = 1;
	int z = 1;
	for (i = b; i >0 ; i = i - 1)
	{
		for (dots = 1; dots <= z; dots = dots + 1)
		{
			cout <<" ";
		}
		dots = 1;
		for (j = 1; j <= i; j = j + 1)
		{
			cout <<"*";
		}


		for (space = 1; space <= i - y; space = space + 1)
		{
			cout << "*";
		}
		z = z + 1;
		cout << "\n";
	}


}
int main()
{
	int number;
	cout << "enter the height of pattern";
	cin >> number;
	pattern1(number-(number/2));
	pattern2(number - ((number / 2) + 1));


	return 0;
}

*/




// temperature converter//

/*
double convertToCelcius(int farenheit)
{
	double tempCelcius;
	tempCelcius = (farenheit - 32.0) * (5.0 / 9.0);
	return tempCelcius;
}
int main()
{

	for (double tempFarenheit = 1.0; tempFarenheit <= 20.0; tempFarenheit = tempFarenheit + 1.0)
	{
		cout<< tempFarenheit << "  in celcius" << convertToCelcius(tempFarenheit)<< "celcius"<<"\n";
	}


	return 0;
}   */


bool ifPrime(int n)
{
	int counter = 2;
	int flag = 1;
	while (counter<n && flag != 0)
	{
		if (n%counter == 0)
		{
			flag = 0;
		}
		counter = counter + 1;
	}
	bool status;
	if (flag == 0)
	{
		status = true;
	}
	else
	{
		status = false;
	}
	return status;
}





int main()
{
	int num;
	cout << "enter a number";
	cin >> num;
	for (int i = 1; i <= 3; i = i + 1)
	{
		int a, b, result;
		if (ifPrime(num))
		{
			cout << num << "is prime"<<"\n";
		}
		else
		{
			cout << num << "is not prime";
		}

		a = num % 10;
		b = a * 100;
		result = b + (num / 10);

		num = result;

	}




	return 0;
}