#include<iostream>
using namespace std;
#include"MyString.h"
#include <string.h>
void start()
{
	char ch;
	do
	{
		int inp;
		cout << "\n press 1 to get length";
		cout << "\n press 2 to concatenate";
		cout << "\n press 3 to copy string";
		cout << "\n press 5 to convert to integer";
		cout << "\n press 6 to convert to float";
		cout << "\n press 7 to get sub string";
		cout << "\n press 8 to find char";
		cout << "\n press 9 to enter charachter";
		cout << "\n press 10 to enter string";
		cout << "\n press 15 to get upper case chars";
		cout << "\n press 16 to get  lower case chars";
		cout << "\n press 17 to reverse string";
		cout << "\n press 18 to compare";


		cin >> inp;
		switch (inp)
		{
		case 1:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			cout << "length" << getStringLength(s);
			break;
		}
		case 2:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			char v[30];
			cout << "Enter source string";
			cin >> v;
			concatenate(s, v);
			break;
		}
		case 3:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			char v[30];
			cout << "Enter source string";
			cin >> v;
			copyString(s, v);
			break;
		}
		case 5:
		{
			char s[1000];
			cout << "Enter string";
			cin >> s;
			convertToInteger(s);
			break;

		}
		case 6:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			convertToFloat(s);
			break;

		}
		case 7:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			char v[30];
			cout << "Enter key string";
			cin >> v;
			int index = 0;
			cout << "matched at index:" << findSubString(s, v, index);
			break;

		}
		case 8:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			char v;
			cout << "Enter key charachter";
			cin >> v;
			int index = 0;
			cout << findChar(s, v, index);
			break;
		}
		case 15:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			makeUpper(s);
			break;
		}
		case 16:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			makeLower(s);
			break;
		}
		case 17:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			reverse(s);
			break;
		}
		case 18:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			char v[30];
			cout << "Enter key charachter";
			cin >> v;
			cout << compare(s, v);
		}
		case 9:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			int index;
			cout << "Enter the index";
			cin >> index;
			char ch;
			cout << "Enter the charachter to insert";
			cin >> ch;
			cout << "\nlength of new string" << insertString(s, index, ch);
			break;
		}
		case 10:
		{
			char s[30];
			cout << "Enter string";
			cin >> s;
			int index;
			cout << "Enter the index";
			cin >> index;
			char key[30];
			cout << "Enter the string to insert";
			cin >> key;
			cout << "\nlength of new string" << insertString(s, index, key);
			break;
		}
	}
		
		cout << "\nEnter \"y\" to enter again else enter \"n\"";
		cin >> ch;
	}
	while (ch == 'y');
}
int getStringLength(char *s)
{
	int count = 0;
	int i = 0;
	while (s[i]!= '\0')
	{
		count = count + 1;
		i = i + 1;
	}
	return count;
}
void concatenate(char *destination, char *source)
{
	int i=0 ;
	//int z;
	while (destination[i] != '\0')
	{
		
		i = i + 1;
	}
	int c=getStringLength(source);
	for (int j = 0; j < c; j = j + 1)
	{
		
		destination[i] = source[j];
		i = i + 1;

	}
	destination[i] = '\0';
	
	
		cout << destination;
		
	
}
void copyString(char *destination, char *source)
{
	destination = source;
	cout << destination;
}
void convertToInteger(char *source)
{
	int rev = 0;
	int c;
	c = getStringLength(source);
	
	for(int i=c-1;i>0;i--)
	{
		rev = (rev * 10) + source[i];
	}
	if (source[0] == '-')
		rev=rev*(-1);
	cout << rev;
}
	

void convertToFloat(char *source)
{

	double rev = 0;
	int c;
	c = getStringLength(source);

	for (int i = c - 1; i>0; i--)
	{
		rev = (rev * 10.0) + source[i];
	}
	if (source[0] == '-')
		rev = rev*(-1.0);
	cout << rev;
}

int findSubString(char *des, char *key, int start = 0)
{
	bool status = true;
	int i,org;
	int desL, keyL;
	desL =getStringLength(des);
	keyL = getStringLength(key);
	for ( i = 0; i < desL; i++)
	{
		
		if (des[i] == key[0])
		{
			org = i;
			if (des[i + 1] == key[1])
			{
				for (int j = 0; j < keyL; j++)
				{
					if (des[i] != key[j])
						status = false;
					i++;
				}
			}
		}
	}
	if (status)
	{
		return org;
	}
	else
		return -1;
	
}
int findChar(char des[], char key, int i)
{
	bool status = true;
	int desL;
	desL = getStringLength(des);
	
	for (i=0; i <= desL; i = i+ 1)
	{
		
		if (des[i]== key)
		{
			cout << "matched at";
			return i;
		}
	}
}
void makeUpper(char *des)
{
	int a[30] = {};
	int desL;
	desL = getStringLength(des);
	for (int i = 0; i < desL; i++)
	{
		des[i] = des[i] - 32;
	}
		cout<<des;
	
}
void makeLower(char *des)
{
	int a[30] = {};
	int desL;
	desL = getStringLength(des);
	for (int i = 0; i < desL; i++)
	{
		des[i] = des[i] + 32;
	}
	cout << des;

}
void reverse(char *des)
{
	int desL;
	desL = getStringLength(des);
	char a;
	
	for (int i = 0; i < (desL/2); i = i + 1)
	{
		a = des[i];
		des[i] = des[desL - (i + 1)];
		des[desL - (i + 1)]=a;

	}

	cout << des;

}
int compare(char *a,char *b)
{
	bool status = true;
	int aL;
	aL = getStringLength(a);
	int bL;
	bL= getStringLength(b);
	for (int i = 0; i < aL && status; i = i + 1)
	{
		if (a[i] == b[i])
		{
			status = true;
		}
		else if (a[i] != b[i])
		{
			status = false;
		}
	}
	if (!(status))
	{
		return 1;
	}
	if (status)
	{
		return 0;
	}

}
int insertString(char* des, int index, char ch)
{
	int desL = getStringLength(des);
	for (int i = 0; i < desL-index; i++)
	{
		des[desL-i] = des[(desL-i) - 1];
		des[desL + 1] = '\0';
	}
	des[index] = ch;
	cout << des;
	return desL + 1;
}

int insertString(char* des, int index, char *key)
{
	int desL = getStringLength(des);
	int keyL = getStringLength(key);
	int newL = desL + keyL;

	for (int i = 0; i < (desL-index); i++)
	{
		des[(newL-1) - i] = des[(desL - i) - 1];
	
	}
	des[newL] = '\0';
	int x = 0;
	for (int j = index; j < index+keyL; j++)
	{
		des[j] = key[x];
		x=x+1;
	}
	cout << des;
	return getStringLength(des) ;
}