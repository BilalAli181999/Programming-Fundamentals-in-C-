# include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
	int num1, num2, operation, sign, result;
	srand(time(0));
	num1 = 1 + rand() % 99999;
	num2 = 1 + rand() % 99999;
	operation = 1 + rand() % 5;
	sign = 1 + rand() % 4;
	switch (sign)
	{
	case 1:
		cout << "+" << " " << num1 << "\n";
		cout << "+" << " " << num2;
		cout << "----------------------";
		break;
	case 2:
		cout << "+" << " " << num1 << "\n";
		cout << "-" << " " << num2;
		cout << "----------------------";
		break;
	case 3:
		cout << "-" << " " << num1 << "\n";
		cout << "+" << " " << num2;
		cout << "----------------------";
		break;

	case 4:
		cout << "-" << " " << num1 << "\n";
		cout << "-" << " " << num2;
		cout << "----------------------";
		break;
	}
	switch (operation)
	{
	case 1:
		if (sign == 1)
		{
			result = num1 + num2;
			cout << result << "sum";
		}
		if (sign == 2 && num1 < num2)
		{
			result = num2 - num1;
			cout << result*(-1) << "sum";
		}
		else if (sign == 2 && num1 > num2)
		{
			result = num1 + num2;
			cout << result << "sum";
		}


		if (sign == 3 && num1 > num2)
		{
			result = num1 - num2;
			cout << result*(-1) << "sum";
		}
		if (sign == 3 && num1 < num2)
		{
			result = num2 - num1;
			cout << result << "sum";
		}

		if (sign == 4)
		{
			result = num1 + num2;
			cout << result << "sum";
		}
		break;

	case 2:
		if (sign == 1 && num1 < num2)
		{
			result = num1 - num2;
			cout << result*(-1) << "sub";
		}
		else if (sign == 1 && num1 > num2)
		{
			result = num1 - num2;
			cout << result << "sub";
		}
		if (sign == 2 && num1 < num2)
		{
			result = num2 + num1;
			cout << result << "sub";
		}
		else if (sign == 2 && num1 > num2)
		{
			result = num1 + num2;
			cout << result << "sub";
		}


		if (sign == 3 && num1 > num2)
		{
			result = num1 + num2;
			cout << result*(-1) << "sub";
		}
		else if (sign == 3 && num1 < num2)
		{
			result = num2 + num1;
			cout << result*(-1) << "sub";
		}

		if (sign == 4 && num1 > num2)
		{
			result = num1 - num2;
			cout << result*(-1) << "sub";
		}
		else if (sign == 4 && num1 < num2)
		{
			result = num2 - num1;
			cout << result << "sub";
		}
		break;
	case 3:
		if (sign == 1)
		{
			result = num1*num2;
			cout << result << "multiply";
		}

		if (sign == 2)
		{
			result = num2 * num1;
			cout << result*(-1) << "multiply";
		}

		if (sign == 3)
		{
			result = num1 * num2;
			cout << result*(-1) << "multiply";
		}

		if (sign == 4)
		{
			result = num1 * num2;
			cout << result << "multiply";
		}

		break;
	case 4:
		if (sign == 1)
		{
			result = num1 / num2;
			cout << result << "sub";
		}

		if (sign == 2)
		{
			result = num2 / num1;
			cout << result*(-1) << "div";
		}


		if (sign == 3)
		{
			result = num1 / num2;
			cout << result*(-1) << "div";
		}


		if (sign == 4)
		{
			result = num1 / num2;
			cout << result << "sub";
		}

		break;

	case 5:
		if (sign == 1)
		{
			result = num1 % num2;
			cout << result << "mod";
		}

		if (sign == 2)
		{
			result = num2 % num1;
			cout << result << "mod";
		}



		if (sign == 3 && num1 > num2)
		{
			result = num1 % num2;
			cout << result*(-1) << "mod";
		}
		else if (sign == 3 && num1 < num2)
		{
			result = num2 % num1;
			cout << result*(-1) << "mod";
		}

		if (sign == 4)
		{
			result = num1 % num2;
			cout << result << "mod";
		}

		break;
	}

	return 0;
}




