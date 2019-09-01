#include<iostream>
using namespace std;
#include"game.h"
void playGame()
{
	char a[3][3] = { {'*','*', '*' },{ '*', '*', '*'},{ '*', '*', '*'} };

	int i = 0;
	bool status = true;
	for (int j = 0; j < 9 && status; j = j + 1)
	{
		i = i + 1;
		if (j % 2 == 0)
		{
			playerOne(a);
			displayContents(a);
		}
		if (j % 2 != 0)
		{
			playerTwo(a);
			displayContents(a);
		}
		if (playerOneWon(a))
		{
			cout << "****Player 1 Won****";
			status = false;
		}
		if (playerTwoWon(a))
		{
			cout << "****Player 2 Won****";
			status = false;
		}

	}
	if ( status )
		cout << "****Drawn Game*****";
	
}
void displayContents(char arr[][3])
{
	for (int i = 0; i < 3; i = i + 1)
	{
		for (int j = 0; j < 3; j = j + 1)
		{
			cout << arr[i][j];
			
		}
		cout << "\n";
	}
}
void playerOne(char arr[][3])
{
	int pos;
	cout << "Player 1 enter the position (1-9)";
	cin >> pos;
	switch (pos)
	{
	case 1:
	{
	    arr[0][0] = 'x';
		break;
	}
	case 2:
	{
		arr[0][1] = 'x';
		break;
	}
	case 3:
	{
		arr[0][2] = 'x';
		break;
	}
	case 4:
	{
		arr[1][0] = 'x';
		break;
	}
	case 5:
	{
		arr[1][1] = 'x';
		break;
	}
	case 6:
	{
		arr[1][2] = 'x';
		break;
	}
	case 7:
	{
		arr[2][0] = 'x';
		break;
	}
	case 8:
	{
		arr[2][1] = 'x';
		break;
	}
	case 9:
	{
		arr[2][2] = 'x';
		break;
	}
	}
	//displayContents(arr);
}
void playerTwo(char arr[][3])
{
	int pos;
	cout << "Player 2 enter the position (1-9)";
	cin >> pos;
	switch (pos)
	{
	case 1:
	{
		arr[0][0] = 'o';
		break;
	}
	case 2:
	{
		arr[0][1] = 'o';
		break;
	}
	case 3:
	{
		arr[0][2] = 'o';
		break;
	}
	case 4:
	{
		arr[1][0] = 'o';
		break;
	}
	case 5:
	{
		arr[1][1] = 'o';
		break;
	}
	case 6:
	{
		arr[1][2] = 'o';
		break;
	}
	case 7:
	{
		arr[2][0] = 'o';
		break;
	}
	case 8:
	{
		arr[2][1] = 'o';
		break;
	}
	case 9:
	{
		arr[2][2] = 'o';
		break;
	}
	}
	//displayContents(arr);
}
bool playerOneWon(char arr[][3])
{
	bool status = false;
	if (arr[0][0] == 'x'&& arr[0][1] == 'x' && arr[0][2] == 'x')
	{
		status = true;
	}
	else if (arr[1][0] == 'x'&& arr[1][1] == 'x' && arr[1][2] == 'x')
	{
		status = true;
	}
	else if (arr[2][0] == 'x'&& arr[2][1] == 'x' && arr[2][2] == 'x')
	{
		status = true;
	}
	else if (arr[0][0] == 'x'&& arr[1][0] == 'x' && arr[2][0] == 'x')
	{
		status = true;
	}
	else if (arr[0][1] == 'x'&& arr[1][1] == 'x' && arr[2][1] == 'x')
	{
		status = true;
	}
	else if (arr[0][2] == 'x'&& arr[1][2] == 'x' && arr[2][2] == 'x')
	{
		status = true;
	}
	else if (arr[0][0] == 'x'&& arr[1][1] == 'x' && arr[2][2] == 'x')
	{
		status = true;
	}
	else if (arr[0][2] == 'x'&& arr[1][1] == 'x' && arr[2][0] == 'x')
	{
		status = true;
	}
	return status;
}
bool playerTwoWon(char arr[][3])
{
	bool status = false;
	if (arr[0][0] == 'o'&& arr[0][1] == 'o' && arr[0][2] == 'o')
	{
		status = true;
	}
	else if (arr[1][0] == 'o'&& arr[1][1] == 'o' && arr[1][2] == 'o')
	{
		status = true;
	}
	else if (arr[2][0] == 'o'&& arr[2][1] == 'o' && arr[2][2] == 'o')
	{
		status = true;
	}
	else if (arr[0][0] == 'o'&& arr[1][0] == 'o' && arr[2][0] == 'o')
	{
		status = true;
	}
	else if (arr[0][1] == 'o'&& arr[1][1] == 'o' && arr[2][1] == 'o')
	{
		status = true;
	}
	else if (arr[0][2] == 'o'&& arr[1][2] == 'o' && arr[2][2] == 'o')
	{
		status = true;
	}
	else if (arr[0][0] == 'o'&& arr[1][1] == 'o' && arr[2][2] == 'o')
	{
		status = true;
	}
	else if (arr[0][2] == 'o'&& arr[1][1] == 'o' && arr[2][0] == 'o')
	{
		status = true;
	}
	return status;
}