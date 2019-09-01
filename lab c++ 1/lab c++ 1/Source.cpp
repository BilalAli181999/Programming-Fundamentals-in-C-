#include<iostream>
using namespace std;
int main()
{
	int hardness , tensileStrength;
	double carbonContent;
	cout << "enter hardness of steel:";
	cin >> hardness;
	cout << "enter carbon content of steel:";
	cin >> carbonContent;
	cout << "enter tensile strength of steel:";
	cin >> tensileStrength;
	if (hardness > 50 && carbonContent < 0.7 && tensileStrength>5600)
	{
		cout << "Grade 10 ";
	}
	else if(hardness > 50 && carbonContent < 0.7)
	{
		cout << "Grade 9 ";
	}
	else if ( carbonContent < 0.7 && tensileStrength>5600)
	{
		cout << "Grade 8 ";
	}
	else if (hardness > 50 && tensileStrength>5600)
	{
		cout << "Grade 7 ";
	}
	else if (hardness > 50 )
	{
		cout << "Grade 6 ";
	}

	else if (carbonContent < 0.7)
	{
		cout << "Grade 6 ";
	}

	else if (tensileStrength>5600)
	{
		cout << "Grade 6 ";
	}
	else
	{
		cout << "Grade 5";
	}




	return 0;
}