#include<iostream>
#include"game.h"
using namespace std;
void startGame()
{
	char lev0[4][4] = { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*' };
	char lev1[4][4] = { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*' };
	char lev2[4][4] = { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*' };
	char lev3[4][4] = { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*' };
	bool status = true;
	cout << "LEVEL 0:\n";
	displayContents(lev0);
	cout << "\n";
	cout << "LEVEL 1:\n";
	displayContents(lev1);
	cout << "\n";
	cout << "LEVEL 2:\n";
	displayContents(lev2);
	cout << "\n";
	cout << "LEVEL 3:\n";
	displayContents(lev3);
	
	for (int j = 0; j < 64 && status; j=j+1)
	{
		
		if (j % 2 == 0)
		{
			player1(lev0, lev1, lev2, lev3);
			cout << "LEVEL 0:\n";
			displayContents(lev0);
			cout << "\n";
			cout << "LEVEL 1:\n";
			displayContents(lev1);
			cout << "\n";
			cout << "LEVEL 2:\n";
			displayContents(lev2);
			cout << "\n";
			cout << "LEVEL 3:\n";
			displayContents(lev3);
			
			
		}
		if (j % 2 != 0)
		{
		
			player2(lev0, lev1, lev2, lev3);
			
			cout << "LEVEL 0:\n";
			displayContents(lev0);
			cout << "\n";
			cout << "LEVEL 1:\n";
			displayContents(lev1);
			cout << "\n";
			cout << "LEVEL 2:\n";
			displayContents(lev2);
			cout << "\n";
			cout << "LEVEL 3:\n";
			displayContents(lev3);	
		}
	
		if (playerOneWon(lev0, lev2, lev2, lev3))
		{
			cout << "****Player 1 Won****";
			status = false;
		}
		if (playerTwoWon(lev0, lev2, lev2, lev3))
		{
			cout << "****Player 2 Won****";
			status = false;
		}
		
	}
	
	if (status)
	{
		cout << "\n\n***DRAWN GAME***";
	}

}
void player1(char lev0[][4], char lev1[][4], char lev2[][4], char lev3[][4])
{
	int status;

	do {
		int pos, level;
		cout << "PLAYER-1 \n ENTER THE POSITION(1-16) AND LEVEL(0-3):";
		cin >> pos >> level;
		 status = false;
		if (pos == 1 && level == 0)
		{
			if (lev0[0][0] == '*')
			{
				lev0[0][0] = 'O';
			}
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 2 && level == 0)
		{
			if (lev0[0][1] == '*')
				lev0[0][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 3 && level == 0)
		{
			if (lev0[0][2] == '*')
				lev0[0][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}

		}
		else if (pos == 4 && level == 0)
		{
			if (lev0[0][3] == '*')
				lev0[0][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 5 && level == 0)
		{
			if (lev0[1][0] == '*')
				lev0[1][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 6 && level == 0)
		{
			if (lev0[1][1] == '*')
				lev0[1][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 7 && level == 0)
		{
			if (lev0[1][2] == '*')
				lev0[1][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 8 && level == 0)
		{
			if (lev0[1][3] == '*')
				lev0[1][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 9 && level == 0)
		{
			if (lev0[2][0] == '*')
				lev0[2][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 10 && level == 0)
		{
			if (lev0[2][1] == '*')
				lev0[2][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 11 && level == 0)
		{
			if (lev0[2][2] == '*')
				lev0[2][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 12 && level == 0)
		{
			if (lev0[2][3] == '*')
				lev0[2][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 13 && level == 0)
		{
			if (lev0[3][0] == '*')
				lev0[3][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 14 && level == 0)
		{
			if (lev0[3][1] = '*')
				lev0[3][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 15 && level == 0)
		{
			if (lev0[3][2] == '*')
				lev0[3][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 16 && level == 0)
		{
			if (lev0[3][3] == '*')
				lev0[3][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 1 && level == 1)
		{
			if (lev1[0][0] == '*')
				lev1[0][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 2 && level == 1)
		{
			if (lev1[0][1] == '*')
				lev1[0][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 3 && level == 1)
		{
			if (lev1[0][2] == '*')
				lev1[0][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 4 && level == 1)
		{
			if (lev1[0][3] == '*')
				lev1[0][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 5 && level == 1)
		{
			if (lev1[1][0] == '*')
				lev1[1][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 6 && level == 1)
		{
			if (lev1[1][1] == '*')
			{
				lev1[1][1] = 'O';
			}
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 7 && level == 1)
		{
			if (lev1[1][2] == '*')
				lev1[1][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 8 && level == 1)
		{
			if (lev1[1][3] == '*')
				lev1[1][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 9 && level == 1)
		{
			if (lev1[2][0] == '*')
				lev1[2][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 10 && level == 1)
		{
			if (lev1[2][1] == '*')
				lev1[2][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 11 && level == 1)
		{
			if (lev1[2][2] == '*')
				lev1[2][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 12 && level == 1)
		{
			if (lev1[0][0] == '*')
				lev1[2][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 13 && level == 1)
		{
			if (lev1[3][0] = '*')
				lev1[3][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 14 && level == 1)
		{
			if (lev1[3][1] == '*')
				lev1[3][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 15 && level == 1)
		{
			if (lev1[3][2] == '*')
				lev1[3][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 16 && level == 1)
		{
			if (lev1[3][3] == '*')
				lev1[3][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 1 && level == 2)
		{
			if (lev2[0][0] == '*')
				lev2[0][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 2 && level == 2)
		{
			if (lev2[0][1] == '*')
				lev2[0][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 3 && level == 2)
		{
			if (lev2[0][2] == '*')
				lev2[0][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			};
		}
		else if (pos == 4 && level == 2)
		{
			if (lev2[0][3] == '*')
				lev2[0][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 5 && level == 2)
		{
			if (lev2[1][0] == '*')
				lev2[1][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 6 && level == 2)
		{
			if (lev2[1][1] == '*')
				lev2[1][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 7 && level == 2)
		{
			if (lev2[1][2] == '*')
				lev2[1][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 8 && level == 2)
		{
			if (lev2[1][3] == '*')
				lev2[1][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 9 && level == 2)
		{
			if (lev2[2][0] == '*')
				lev2[2][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 10 && level == 2)
		{
			if (lev2[2][1] == '*')
				lev2[2][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 11 && level == 2)
		{
			if (lev2[2][2] == '*')
				lev2[2][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 12 && level == 2)
		{
			if (lev2[2][3] == '*')
				lev2[2][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 13 && level == 2)
		{
			if (lev2[3][0] == '*')
				lev2[3][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 14 && level == 2)
		{
			if (lev2[3][1] == '*')
				lev2[3][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 15 && level == 2)
		{
			if (lev2[3][2] == '*')
				lev2[3][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 16 && level == 2)
		{
			if (lev2[3][3] == '*')
				lev2[3][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 1 && level == 3)
		{
			if (lev3[0][0] == '*')
				lev3[0][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 2 && level == 3)
		{
			if (lev3[0][1] == '*')
				lev3[0][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 3 && level == 3)
		{
			if (lev3[0][2] == '*')
				lev3[0][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 4 && level == 3)
		{
			if (lev3[0][3] == '*')
				lev3[0][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 5 && level == 3)
		{
			if (lev3[1][0] == '*')
				lev3[1][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 6 && level == 3)
		{
			if (lev3[1][1] == '*')
				lev3[1][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 7 && level == 3)
		{
			if (lev3[1][2] == '*')
				lev3[1][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 8 && level == 3)
		{
			if (lev3[1][3] == '*')
				lev3[1][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 9 && level == 3)
		{
			if (lev3[2][0] == '*')
				lev3[2][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 10 && level == 3)
		{
			if (lev3[2][1] == '*')
				lev3[2][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 11 && level == 3)
		{
			if (lev3[2][2] == '*')
				lev3[2][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 12 && level == 3)
		{
			if (lev3[2][3] == '*')
				lev3[2][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 13 && level == 3)
		{
			if (lev3[3][0] == '*')
				lev3[3][0] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 14 && level == 3)
		{
			if (lev3[3][1] == '*')
				lev3[3][1] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 15 && level == 3)
		{
			if (lev3[3][2] == '*')
				lev3[3][2] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
		else if (pos == 16 && level == 3)
		{
			if (lev3[3][3] == '*')
				lev3[3][3] = 'O';
			else
			{
				status = true;
				cout << "**ENTER AGAIN**";
			}
		}
	}
	while (status==true);
	
}
void player2(char lev0[][4], char lev1[][4], char lev2[][4], char lev3[][4])
{
	bool status = false;

do{
	int pos, level;
	cout << "PLAYER-2 \n ENTER THE POSITION(1-16) AND LEVEL(0-3):";
	cin >> pos >> level;
	status = false;
	if (pos == 1 && level == 0)
	{
		if (lev0[0][0] == '*')
			lev0[0][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 2 && level == 0)
	{
		if (lev0[0][1] == '*')
			lev0[0][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 3 && level == 0)
	{
		if (lev0[0][2] == '*')
			lev0[0][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}

	}
	else if (pos == 4 && level == 0)
	{
		if (lev0[0][3] == '*')
			lev0[0][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 5 && level == 0)
	{
		if (lev0[1][0] == '*')
			lev0[1][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 6 && level == 0)
	{
		if (lev0[1][1] == '*')
			lev0[1][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 7 && level == 0)
	{
		if (lev0[1][2] == '*')
			lev0[1][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 8 && level == 0)
	{
		if (lev0[1][3] == '*')
			lev0[1][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 9 && level == 0)
	{
		if (lev0[2][0] == '*')
			lev0[2][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 10 && level == 0)
	{
		if (lev0[2][1] == '*')
			lev0[2][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 11 && level == 0)
	{
		if (lev0[2][2] == '*')
			lev0[2][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 12 && level == 0)
	{
		if (lev0[2][3] == '*')
			lev0[2][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 13 && level == 0)
	{
		if (lev0[3][0] == '*')
			lev0[3][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 14 && level == 0)
	{
		if (lev0[3][1] == '*')
			lev0[3][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 15 && level == 0)
	{
		if (lev0[3][2] == '*')
			lev0[3][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 16 && level == 0)
	{
		if (lev0[3][3] == '*')
			lev0[3][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 1 && level == 1)
	{
		if (lev1[0][0] == '*')
			lev1[0][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 2 && level == 1)
	{
		if (lev1[0][1] == '*')
			lev1[0][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 3 && level == 1)
	{
		if (lev1[0][2] == '*')
			lev1[0][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 4 && level == 1)
	{
		if (lev1[0][3] == '*')
			lev1[0][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 5 && level == 1)
	{
		if (lev1[1][0] == '*')
			lev1[1][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 6 && level == 1)
	{
		if (lev1[1][1] == '*')
			lev1[1][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 7 && level == 1)
	{
		if (lev1[1][2] == '*')
			lev1[1][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 8 && level == 1)
	{
		if (lev1[1][3] == '*')
			lev1[1][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 9 && level == 1)
	{
		if (lev1[2][0] == '*')
			lev1[2][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 10 && level == 1)
	{
		if (lev1[2][1] == '*')
			lev1[2][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 11 && level == 1)
	{
		if (lev1[2][2] == '*')
			lev1[2][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 12 && level == 1)
	{
		if (lev1[0][0] == '*')
			lev1[2][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 13 && level == 1)
	{
		if (lev1[3][0] == '*')
			lev1[3][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 14 && level == 1)
	{
		if (lev1[3][1] == '*')
			lev1[3][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 15 && level == 1)
	{
		if (lev1[3][2] == '*')
			lev1[3][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 16 && level == 1)
	{
		if (lev1[3][3] == '*')
			lev1[3][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 1 && level == 2)
	{
		if (lev2[0][0] == '*')
			lev2[0][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 2 && level == 2)
	{
		if (lev2[0][1] == '*')
			lev2[0][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 3 && level == 2)
	{
		if (lev2[0][2] == '*')
			lev2[0][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 4 && level == 2)
	{
		if (lev2[0][3] == '*')
			lev2[0][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 5 && level == 2)
	{
		if (lev2[1][0] == '*')
			lev2[1][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 6 && level == 2)
	{
		if (lev2[1][1] == '*')
			lev2[1][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 7 && level == 2)
	{
		if (lev2[1][2] == '*')
			lev2[1][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 8 && level == 2)
	{
		if (lev2[1][3] == '*')
			lev2[1][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 9 && level == 2)
	{
		if (lev2[2][0] == '*')
			lev2[2][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 10 && level == 2)
	{
		if (lev2[2][1] == '*')
			lev2[2][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 11 && level == 2)
	{
		if (lev2[2][2] == '*')
			lev2[2][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 12 && level == 2)
	{
		if (lev2[2][3] == '*')
			lev2[2][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 13 && level == 2)
	{
		if (lev2[3][0] == '*')
			lev2[3][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 14 && level == 2)
	{
		if (lev2[3][1] == '*')
			lev2[3][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 15 && level == 2)
	{
		if (lev2[3][2] == '*')
			lev2[3][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 16 && level == 2)
	{
		if (lev2[3][3] == '*')
			lev2[3][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 1 && level == 3)
	{
		if (lev3[0][0] == '*')
			lev3[0][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 2 && level == 3)
	{
		if (lev3[0][1] == '*')
			lev3[0][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 3 && level == 3)
	{
		if (lev3[0][2] == '*')
			lev3[0][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 4 && level == 3)
	{
		if (lev3[0][3] == '*')
			lev3[0][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 5 && level == 3)
	{
		if (lev3[1][0] == '*')
			lev3[1][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 6 && level == 3)
	{
		if (lev3[1][1] == '*')
			lev3[1][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 7 && level == 3)
	{
		if (lev3[1][2] == '*')
			lev3[1][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 8 && level == 3)
	{
		if (lev3[1][3] == '*')
			lev3[1][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 9 && level == 3)
	{
		if (lev3[2][0] == '*')
			lev3[2][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 10 && level == 3)
	{
		if (lev3[2][1] == '*')
			lev3[2][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 11 && level == 3)
	{
		if (lev3[2][2] == '*')
			lev3[2][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 12 && level == 3)
	{
		if (lev3[2][3] == '*')
			lev3[2][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 13 && level == 3)
	{
		if (lev3[3][0] == '*')
			lev3[3][0] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 14 && level == 3)
	{
		if (lev3[3][1] == '*')
			lev3[3][1] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 15 && level == 3)
	{
		if (lev3[3][2] == '*')
			lev3[3][2] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
	else if (pos == 16 && level == 3)
	{
		if (lev3[3][3] == '*')
			lev3[3][3] = 'X';
		else
		{
			status = true;
			cout << "**ENTER AGAIN**";
		}
	}
}
	
	while (status);
	
}
void displayContents(char arr[][4])
{
	for (int i = 0; i < 4; i = i + 1)
	{
		for (int j = 0; j < 4; j = j + 1)
		{
			cout << arr[i][j]<<" ";

		}
		cout << "\n";
	}
}
bool playerOneWon(char lev0[][4], char lev1[][4], char lev2[][4], char lev3[][4])
{
	bool status = false;
	if (lev0[0][0] == 'O' && lev0[0][1] == 'O' && lev0[0][2] == 'O' && lev0[0][3] == 'O')
	{
		status = true;
	}

	else if (lev0[1][0] == 'O' && lev0[1][1] == 'O' && lev0[1][2] == 'O' && lev0[1][3] == 'O')
	{
		status = true;
	}
	else if (lev0[2][0] == 'O' && lev0[2][1] == 'O' && lev0[2][2] == 'O' && lev0[2][3] == 'O')
	{
		status = true;
	}
	else if (lev0[3][0] == 'O' && lev0[3][1] == 'O' && lev0[3][2] == 'O' && lev0[3][3] == 'O')
	{
		status = true;
	}
	else if (lev0[0][0] == 'O' && lev0[1][0] == 'O' && lev0[2][0] == 'O' && lev0[3][0] == 'O')
	{
		status = true;
	}
	else if (lev0[0][1] == 'O' && lev0[1][1] == 'O' && lev0[2][1] == 'O' && lev0[3][1] == 'O')
	{
		status = true;
	}
	else if (lev0[0][2] == 'O' && lev0[1][2] == 'O' && lev0[2][2] == 'O' && lev0[3][2] == 'O')
	{
		status = true;
	}
	else if (lev0[0][3] == 'O' && lev0[1][3] == 'O' && lev0[2][3] == 'O' && lev0[3][3] == 'O')
	{
		status = true;
	}
	else if (lev0[0][0] == 'O' && lev0[1][1] == 'O' && lev0[2][2] == 'O' && lev0[3][3] == 'O')
	{
		status = true;
	}
	else if (lev0[0][3] == 'O' && lev0[1][2] == 'O' && lev0[2][1] == 'O' && lev0[3][0] == 'O')
	{
		status = true;
	}
	
	//level-1
	//rows
	else if (lev1[0][0] == 'O' && lev1[0][1] == 'O' && lev1[0][2] == 'O' && lev1[0][3] == 'O')
	{
		status = true;
	}
	else if (lev1[1][0] == 'O' && lev1[1][1] == 'O' && lev1[1][2] == 'O' && lev1[1][3] == 'O')
	{
		status = true;
	}
	else if (lev1[2][0] == 'O' && lev1[2][1] == 'O' && lev1[2][2] == 'O' && lev1[2][3] == 'O')
	{
		status = true;
	}
	else if (lev1[3][0] == 'O' && lev1[3][1] == 'O' && lev1[3][2] == 'O' && lev1[3][3] == 'O')
	{
		status = true;
	}
	//columns
	else if (lev1[0][0] == 'O' && lev1[1][0] == 'O' && lev1[2][0] == 'O' && lev1[3][0] == 'O')
	{
		status = true;
	}
	else if (lev1[0][1] == 'O' && lev1[1][1] == 'O' && lev1[2][1] == 'O' && lev1[3][1] == 'O')
	{
		status = true;
	}
	else if (lev1[0][2] == 'O' && lev1[1][2] == 'O' && lev1[2][2] == 'O' && lev1[3][2] == 'O')
	{
		status = true;
	}
	else if (lev1[0][3] == 'O' && lev1[1][3] == 'O' && lev1[2][3] == 'O' && lev1[3][3] == 'O')
	{
		status = true;
	}
	else if (lev1[0][0] == 'O' && lev1[1][1] == 'O' && lev1[2][2] == 'O' && lev1[3][3] == 'O')
	{
		status = true;
	}
	else if (lev0[0][3] == 'O' && lev0[1][2] == 'O' && lev0[2][1] == 'O' && lev0[3][0] == 'O')
	{
		status = true;
	}
	//level-2
	else if (lev2[0][0] == 'O' && lev2[0][1] == 'O' && lev2[0][2] == 'O' && lev2[0][3] == 'O')
	{
		status = true;
	}
	else if (lev2[1][0] == 'O' && lev2[1][1] == 'O' && lev2[1][2] == 'O' && lev2[1][3] == 'O')
	{
		status = true;
	}
	else if (lev2[2][0] == 'O' && lev2[2][1] == 'O' && lev2[2][2] == 'O' && lev2[2][3] == 'O')
	{
		status = true;
	}
	else if (lev2[3][0] == 'O' && lev2[3][1] == 'O' && lev2[3][2] == 'O' && lev2[3][3] == 'O')
	{
		status = true;
	}
	//columns
	else if (lev2[0][0] == 'O' && lev2[1][0] == 'O' && lev2[2][0] == 'O' && lev2[3][0] == 'O')
	{
		status = true;
	}
	else if (lev2[0][1] == 'O' && lev2[1][1] == 'O' && lev2[2][1] == 'O' && lev2[3][1] == 'O')
	{
		status = true;
	}
	else if (lev2[0][2] == 'O' && lev2[1][2] == 'O' && lev2[2][2] == 'O' && lev2[3][2] == 'O')
	{
		status = true;
	}
	else if (lev2[0][3] == 'O' && lev2[1][3] == 'O' && lev2[2][3] == 'O' && lev2[3][3] == 'O')
	{
		status = true;
	}
	else if (lev2[0][0] == 'O' && lev2[1][1] == 'O' && lev2[2][2] == 'O' && lev2[3][3] == 'O')
	{
		status = true;
	}
	else if (lev2[0][3] == 'O' && lev2[1][2] == 'O' && lev2[2][1] == 'O' && lev2[3][0] == 'O')
	{
		status = true;
	}
	//level-3
	else if (lev3[0][0] == 'O' && lev3[0][1] == 'O' && lev3[0][2] == 'O' && lev3[0][3] == 'O')
	{
		status = true;
	}
	else if (lev3[1][0] == 'O' && lev3[1][1] == 'O' && lev3[1][2] == 'O' && lev3[1][3] == 'O')
	{
		status = true;
	}
	else if (lev3[2][0] == 'O' && lev3[2][1] == 'O' && lev3[2][2] == 'O' && lev3[2][3] == 'O')
	{
		status = true;
	}
	else if (lev3[3][0] == 'O' && lev3[3][1] == 'O' && lev3[3][2] == 'O' && lev3[3][3] == 'O')
	{
		status = true;
	}
	//columns
	else if (lev3[0][0] == 'O' && lev3[1][0] == 'O' && lev3[2][0] == 'O' && lev3[3][0] == 'O')
	{
		status = true;
	}
	else if (lev3[0][1] == 'O' && lev3[1][1] == 'O' && lev3[2][1] == 'O' && lev3[3][1] == 'O')
	{
		status = true;
	}
	else if (lev3[0][2] == 'O' && lev3[1][2] == 'O' && lev3[2][2] == 'O' && lev3[3][2] == 'O')
	{
		status = true;
	}
	else if (lev3[0][3] == 'O' && lev3[1][3] == 'O' && lev3[2][3] == 'O' && lev3[3][3] == 'O')
	{
		status = true;
	}
	else if (lev3[0][0] == 'O' && lev3[1][1] == 'O' && lev3[2][2] == 'O' && lev3[3][3] == 'O')
	{
		status = true;
	}
	else if (lev3[0][3] == 'O' && lev3[1][2] == 'O' && lev3[2][1] == 'O' && lev3[3][0] == 'O')
	{
		status = true;
	}
	//levels
	else if (lev0[0][0] == 'O' && lev1[0][0] == 'O' && lev2[0][0] == 'O' && lev3[0][0] == 'O')
	{
		status = true;
	}
	else if (lev0[0][1] == 'O' && lev1[0][1] == 'O' && lev2[0][1] == 'O' && lev3[0][1] == 'O')
	{
		status = true;
	}
	else if (lev0[0][2] == 'O' && lev1[0][2] == 'O' && lev2[0][2] == 'O' && lev3[0][2] == 'O')
	{
		status = true;
	}
	else if (lev0[0][3] == 'O' && lev1[0][3] == 'O' && lev2[0][3] == 'O' && lev3[0][3] == 'O')
	{
		status = true;
	}
	else if (lev0[1][0] == 'O' && lev1[1][0] == 'O' && lev2[1][0] == 'O' && lev3[1][0] == 'O')
	{
		status = true;
	}
	else if (lev0[1][1] == 'O' && lev1[1][1] == 'O' && lev2[1][1] == 'O' && lev3[1][1] == 'O')
	{
		status = true;
	}
	else if (lev0[1][2] == 'O' && lev1[1][2] == 'O' && lev2[1][2] == 'O' && lev3[1][2] == 'O')
	{
		status = true;
	}
	else if (lev0[1][3] == 'O' && lev1[1][3] == 'O' && lev2[1][3] == 'O' && lev3[1][3] == 'O')
	{
		status = true;
	}
	else if (lev0[2][0] == 'O' && lev1[2][0] == 'O' && lev2[2][0] == 'O' && lev3[2][0] == 'O')
	{
		status = true;
	}
	else if (lev0[2][1] == 'O' && lev1[2][1] == 'O' && lev2[2][1] == 'O' && lev3[2][1] == 'O')
	{
		status = true;
	}
	else if (lev0[2][2] == 'O' && lev1[2][2] == 'O' && lev2[2][2] == 'O' && lev3[2][2] == 'O')
	{
		status = true;
	}
	else if (lev0[2][3] == 'O' && lev1[2][3] == 'O' && lev2[2][3] == 'O' && lev3[2][3] == 'O')
	{
		status = true;
	}
	else if (lev0[3][0] == 'O' && lev1[3][0] == 'O' && lev2[3][0] == 'O' && lev3[3][0] == 'O')
	{
		status = true;
	}
	else if (lev0[3][1] == 'O' && lev1[3][1] == 'O' && lev2[3][1] == 'O' && lev3[3][1] == 'O')
	{
		status = true;
	}
	else if (lev0[3][2] == 'O' && lev1[3][2] == 'O' && lev2[3][2] == 'O' && lev3[3][2] == 'O')
	{
		status = true;
	}
	else if (lev0[3][3] == 'O' && lev1[3][3] == 'O' && lev2[3][3] == 'O' && lev3[3][3] == 'O')
	{
		status = true;
	}
	else if (lev0[0][0] == 'O' &&  lev2[2][2] == 'O' && lev3[3][3] == 'O')
	{
		status = true;
	}
	else if (lev0[0][3] == 'O'  && lev2[2][1] == 'O' && lev3[3][0] == 'O')
	{
		status = true;
	}

	return status;
}











bool playerTwoWon(char lev0[][4], char lev1[][4], char lev2[][4], char lev3[][4])
{
	bool status = false;
	if (lev0[0][0] == 'X' && lev0[0][1] == 'X' && lev0[0][2] == 'X' && lev0[0][3] == 'X')
	{
		status = true;
	}
	else if (lev0[1][0] == 'X' && lev0[1][1] == 'X' && lev0[1][2] == 'X' && lev0[1][3] == 'X')
	{
		status = true;
	}
	else if (lev0[2][0] == 'X' && lev0[2][1] == 'X' && lev0[2][2] == 'X' && lev0[2][3] == 'X')
	{
		status = true;
	}
	else if (lev0[3][0] == 'X' && lev0[3][1] == 'X' && lev0[3][2] == 'X' && lev0[3][3] == 'X')
	{
		status = true;
	}
	else if (lev0[0][0] == 'X' && lev0[1][0] == 'X' && lev0[2][0] == 'X' && lev0[3][0] == 'X')
	{
		status = true;
	}
	else if (lev0[0][1] == 'X' && lev0[1][1] == 'X' && lev0[2][1] == 'X' && lev0[3][1] == 'X')
	{
		status = true;
	}
	else if (lev0[0][2] == 'X' && lev0[1][2] == 'X' && lev0[2][2] == 'X' && lev0[3][2] == 'X')
	{
		status = true;
	}
	else if (lev0[0][3] == 'X' && lev0[1][3] == 'X' && lev0[2][3] == 'X' && lev0[3][3] == 'X')
	{
		status = true;
	}
	else if (lev0[0][0] == 'X' && lev0[1][1] == 'X' && lev0[2][2] == 'X' && lev0[3][3] == 'X')
	{
		status = true;
	}
	else if (lev0[0][3] == 'X' && lev0[1][2] == 'X' && lev0[2][1] == 'X' && lev0[3][0] == 'X')
	{
		status = true;
	}

	//level-1
	//rows
	else if (lev1[0][0] == 'X' && lev1[0][1] == 'X' && lev1[0][2] == 'X' && lev1[0][3] == 'X')
	{
		status = true;
	}
	else if (lev1[1][0] == 'X' && lev1[1][1] == 'X' && lev1[1][2] == 'X' && lev1[1][3] == 'X')
	{
		status = true;
	}
	else if (lev1[2][0] == 'X' && lev1[2][1] == 'X' && lev1[2][2] == 'X' && lev1[2][3] == 'X')
	{
		status = true;
	}
	else if (lev1[3][0] == 'X' && lev1[3][1] == 'X' && lev1[3][2] == 'X' && lev1[3][3] == 'X')
	{
		status = true;
	}
	//columns
	else if (lev1[0][0] == 'X' && lev1[1][0] == 'X' && lev1[2][0] == 'X' && lev1[3][0] == 'X')
	{
		status = true;
	}
	else if (lev1[0][1] == 'X' && lev1[1][1] == 'X' && lev1[2][1] == 'X' && lev1[3][1] == 'X')
	{
		status = true;
	}
	else if (lev1[0][2] == 'X' && lev1[1][2] == 'X' && lev1[2][2] == 'X' && lev1[3][2] == 'X')
	{
		status = true;
	}
	else if (lev1[0][3] == 'X' && lev1[1][3] == 'X' && lev1[2][3] == 'X' && lev1[3][3] == 'X')
	{
		status = true;
	}
	else if (lev1[0][0] == 'X' && lev1[1][1] == 'X' && lev1[2][2] == 'X' && lev1[3][3] == 'X')
	{
		status = true;
	}
	else if (lev0[0][3] == 'X' && lev0[1][2] == 'X' && lev0[2][1] == 'X' && lev0[3][0] == 'X')
	{
		status = true;
	}
	//level-2
	else if (lev2[0][0] == 'X' && lev2[0][1] == 'X' && lev2[0][2] == 'X' && lev2[0][3] == 'X')
	{
		status = true;
	}
	else if (lev2[1][0] == 'X' && lev2[1][1] == 'X' && lev2[1][2] == 'X' && lev2[1][3] == 'X')
	{
		status = true;
	}
	else if (lev2[2][0] == 'X' && lev2[2][1] == 'X' && lev2[2][2] == 'X' && lev2[2][3] == 'X')
	{
		status = true;
	}
	else if (lev2[3][0] == 'X' && lev2[3][1] == 'X' && lev2[3][2] == 'X' && lev2[3][3] == 'X')
	{
		status = true;
	}
	//columns
	else if (lev2[0][0] == 'X' && lev2[1][0] == 'X' && lev2[2][0] == 'X' && lev2[3][0] == 'X')
	{
		status = true;
	}
	else if (lev2[0][1] == 'X' && lev2[1][1] == 'X' && lev2[2][1] == 'X' && lev2[3][1] == 'X')
	{
		status = true;
	}
	else if (lev2[0][2] == 'X' && lev2[1][2] == 'X' && lev2[2][2] == 'X' && lev2[3][2] == 'X')
	{
		status = true;
	}
	else if (lev2[0][3] == 'X' && lev2[1][3] == 'X' && lev2[2][3] == 'X' && lev2[3][3] == 'X')
	{
		status = true;
	}
	else if (lev2[0][0] == 'X' && lev2[1][1] == 'X' && lev2[2][2] == 'X' && lev2[3][3] == 'X')
	{
		status = true;
	}
	else if (lev2[0][3] == 'X' && lev2[1][2] == 'X' && lev2[2][1] == 'X' && lev2[3][0] == 'X')
	{
		status = true;
	}
	//level-3
	else if (lev3[0][0] == 'X' && lev3[0][1] == 'X' && lev3[0][2] == 'X' && lev3[0][3] == 'X')
	{
		status = true;
	}
	else if (lev3[1][0] == 'X' && lev3[1][1] == 'X' && lev3[1][2] == 'X' && lev3[1][3] == 'X')
	{
		status = true;
	}
	else if (lev3[2][0] == 'X' && lev3[2][1] == 'X' && lev3[2][2] == 'X' && lev3[2][3] == 'X')
	{
		status = true;
	}
	else if (lev3[3][0] == 'X' && lev3[3][1] == 'X' && lev3[3][2] == 'X' && lev3[3][3] == 'X')
	{
		status = true;
	}
	//columns
	else if (lev3[0][0] == 'X' && lev3[1][0] == 'X' && lev3[2][0] == 'X' && lev3[3][0] == 'X')
	{
		status = true;
	}
	else if (lev3[0][1] == 'X' && lev3[1][1] == 'X' && lev3[2][1] == 'X' && lev3[3][1] == 'X')
	{
		status = true;
	}
	else if (lev3[0][2] == 'X' && lev3[1][2] == 'X' && lev3[2][2] == 'X' && lev3[3][2] == 'X')
	{
		status = true;
	}
	else if (lev3[0][3] == 'X' && lev3[1][3] == 'X' && lev3[2][3] == 'X' && lev3[3][3] == 'X')
	{
		status = true;
	}
	else if (lev3[0][0] == 'X' && lev3[1][1] == 'X' && lev3[2][2] == 'X' && lev3[3][3] == 'X')
	{
		status = true;
	}
	else if (lev3[0][3] == 'X' && lev3[1][2] == 'X' && lev3[2][1] == 'X' && lev3[3][0] == 'X')
	{
		status = true;
	}
	//levels
	else if (lev0[0][0] == 'X' && lev1[0][0] == 'X' && lev2[0][0] == 'X' && lev3[0][0] == 'X')
	{
		status = true;
	}
	else if (lev0[0][1] == 'X' && lev1[0][1] == 'X' && lev2[0][1] == 'X' && lev3[0][1] == 'X')
	{
		status = true;
	}
	else if (lev0[0][2] == 'X' && lev1[0][2] == 'X' && lev2[0][2] == 'X' && lev3[0][2] == 'X')
	{
		status = true;
	}
	else if (lev0[0][3] == 'X' && lev1[0][3] == 'X' && lev2[0][3] == 'X' && lev3[0][3] == 'X')
	{
		status = true;
	}
	else if (lev0[1][0] == 'X' && lev1[1][0] == 'X' && lev2[1][0] == 'X' && lev3[1][0] == 'X')
	{
		status = true;
	}
	else if (lev0[1][1] == 'X' && lev1[1][1] == 'X' && lev2[1][1] == 'X' && lev3[1][1] == 'X')
	{
		status = true;
	}
	else if (lev0[1][2] == 'X' && lev1[1][2] == 'X' && lev2[1][2] == 'X' && lev3[1][2] == 'X')
	{
		status = true;
	}
	else if (lev0[1][3] == 'X' && lev1[1][3] == 'X' && lev2[1][3] == 'X' && lev3[1][3] == 'X')
	{
		status = true;
	}
	else if (lev0[2][0] == 'X' && lev1[2][0] == 'X' && lev2[2][0] == 'X' && lev3[2][0] == 'X')
	{
		status = true;
	}
	else if (lev0[2][1] == 'X' && lev1[2][1] == 'X' && lev2[2][1] == 'X' && lev3[2][1] == 'X')
	{
		status = true;
	}
	else if (lev0[2][2] == 'X' && lev1[2][2] == 'X' && lev2[2][2] == 'X' && lev3[2][2] == 'X')
	{
		status = true;
	}
	else if (lev0[2][3] == 'X' && lev1[2][3] == 'X' && lev2[2][3] == 'X' && lev3[2][3] == 'X')
	{
		status = true;
	}
	else if (lev0[3][0] == 'X' && lev1[3][0] == 'X' && lev2[3][0] == 'X' && lev3[3][0] == 'X')
	{
		status = true;
	}
	else if (lev0[3][1] == 'X' && lev1[3][1] == 'X' && lev2[3][1] == 'X' && lev3[3][1] == 'X')
	{
		status = true;
	}
	else if (lev0[3][2] == 'X' && lev1[3][2] == 'X' && lev2[3][2] == 'X' && lev3[3][2] == 'X')
	{
		status = true;
	}
	else if (lev0[3][3] == 'X' && lev1[3][3] == 'X' && lev2[3][3] == 'X' && lev3[3][3] == 'X')
	{
		status = true;
	}
	else if (lev0[0][0] == 'X'&& lev2[2][2] == 'X' && lev3[3][3] == 'X')
	{
		status = true;
	}
	else if (lev0[0][3] == 'X' && lev2[2][1] == 'X' && lev3[3][0] == 'X')
	{
		status = true;
	}
	return status;
}