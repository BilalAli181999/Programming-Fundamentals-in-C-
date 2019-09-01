#include<iostream>
using namespace std;
struct Rational
{
	int num;
	int den;
};
void inputRational(Rational & fraction)
{
	cout << "Enter numerator";
	cin >> fraction.num;
	cout << "Enter denominator";
	cin >> fraction.den;
}
void printRational(Rational & fraction)
{
	cout << "Rational Variable : ";
	cout << fraction.num << "/" << fraction.den;
}
Rational addRational(Rational a, Rational b)
{
	
	Rational x;
	x.num = (a.num)*(b.den) + (b.num)*(a.den);
	x.den = (a.den)*(b.den);
	return x;
}

Rational diffRational(Rational a, Rational b)
{
	Rational x;
	x.num = (a.num)*(b.den) - (b.num)*(a.den);
	x.den = (a.den)*(b.den);
	return x;
}
Rational divRational(Rational a, Rational b)
{
	Rational x;
	x.num = (a.num)*(b.den) ;
	x.den = (a.den)*(b.num);
	return x;
}
void reduce(Rational &a)
{
	
	int gcd = 1;
	for (int i = 2; i<a.num && i<a.den ; i++)
	{
		if ((a.num) % i == 0 && (a.den) % i == 0)
		{
			gcd = i;
		}
	}

	if (gcd != 1)
	{
		a.num = a.num / gcd;
		a.den = a.den / gcd;
	}
}
int main()
{
	Rational fraction,a,b,result;
//	inputRational(fraction);
	inputRational(a);
	inputRational(b);
//	printRational(fraction);
	result = addRational(a, b);
	printRational(result);
	result = diffRational(a, b);
	printRational(result);
	result = divRational(a, b);
	printRational(result);
	reduce(result);
	printRational(result);
	return 0;
}