#include<iostream>
using namespace std;

int giveTextLength(char text[])
{
	int i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	return i ;
}
char *enchiper(char (*arr)[26],char text[],int key[],int length)
{
	
	int textLength = giveTextLength(text);
	int pos;
	int *position = new int[textLength];
	for (int x = 0; x < textLength; x++)
	{
		int j = 0;
		while (arr[0][j] != text[x])
		{
			j++;
		}
		position[x] = j;	
	}
	int j = 0;
	char *enc = new char [textLength];
	for (int x = 0; x < textLength; x++)
	{
		
		int z = position[x];
		int i = key[j];
		enc[x] = arr[z][i];
		j++;
		if (j == length)
		{
			j = 0;
		}	
		
	}
	return enc;
}




char * decipher(char arr[][26], char text[], int key[], int length,int n)
{
	int x = 0;
	int *pos = new int[length];
	char *decipher = new char[length];
	for (int i = 0; i < length; i++)
	{
		int j = 0;
		while (arr[key[x]][j] != text[i])
		{
			j++;
		}
		pos[i] = j;
		x++;
		if (x == n)
		{
			x = 0;
		}

	}
	int y = 0;
	
	for (int i = 0; i < length; i++)
	{
		int k = key[y];
		int e = pos[i];
		decipher[i] = arr[0][pos[i]];
		y++;
		if (y == n)
		{
			y = 0;
		}
	}

	return decipher;
}





int main()
{
	char arr[26][26] = {};
	char ch;
	for (int i = 0; i < 26; i++)
	{
		ch = 'A'+i;
		for (int j = 0; j < 26; j++)
		{
			arr[i][j] = ch;
			ch = ch + 1;
		}
		if (arr[i][25] != 'Z')
		{
			for (int x = 0; x < 26; x++)
			{
				if (arr[i][x] == 'Z')
				{
					char ch1='A';
					for (int y = x+1; y < 26; y++)
					{
						arr[i][y] = ch1;
						ch1++;
					}
				}
			}
		}
	}
	int n;
	int key[100] = {};
	char text[100];
	cout << "Enter text to encipher:";
	cin >> text;
	cout << "Enter no of keys:";
	cin >> n;
	cout << "Enter key:";
	for (int i = 0; i < n; i++)
	{
		cin >> key[i];
	}
	int length = giveTextLength(text);
	char *enc;
	enc=enchiper( arr,text, key ,n);
	cout << "***Enciphered text***:\n";
	for (int i = 0; i <length ; i++)
	{
		cout << enc[i]<<" ";
	}
	char *dec;
	dec = decipher(arr, enc, key, length,n);
	cout << "\n***Diciphered text***:\n";
	for (int i = 0; i <length; i++)
	{
		cout << dec[i] << " ";
	}
	return 0;
}
