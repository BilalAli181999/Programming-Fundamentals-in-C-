//#include<iostream>
//using namespace std;
//struct rational
//{
//	int numerator;
//	int denominator;
//};
//void reduce(rational & fraction)
//{
//	int i;
//	bool status = true;
//	int gcd = 1;
//	if (fraction.numerator < fraction.denominator)
//	{
//		i = fraction.numerator;
//	}
//	else if (fraction.numerator > fraction.denominator)
//	{
//		i = fraction.denominator;
//	}
//	for ( ; i >=2 && status; i--)
//	{
//		if (fraction.numerator%i == 0 && fraction.denominator%i == 0)
//		{
//			gcd = i;
//			status = false;
//		}
//	}
//	fraction.numerator = fraction.numerator / gcd;
//	fraction.denominator = fraction.denominator / gcd;
//		
//	cout << fraction.numerator << "/" << fraction.denominator;
//	
//}
//int main()
//{
//	rational fraction;
//	cout << "Enter numerator";
//	cin >> fraction.numerator;
//	cout << "Enter denominator";
//	cin >> fraction.denominator;
//	reduce(fraction);
//}