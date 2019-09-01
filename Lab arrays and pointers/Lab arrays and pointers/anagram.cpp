//#include<iostream>
//using namespace std;
//bool isAnagram(char *s1, char *s2)
//{
//	bool status = false;
//	char ch1 = 97;
//	char ch2 = 97;
//	int b[26] = {};
//	int c[26] = {};
//	for (int i = 0; i < 26; i = i + 1)
//	{
//		int j = 0;
//		while (s1[j] != '\0')
//		{
//			if (s1[j] == ch1)
//			{
//				
//				b[i] = b[i] + 1;
//			}
//			j = j + 1;
//		}
//		ch1 = ch1 + 1;
//		
//	}
//	for (int x = 0; x < 26; x = x + 1)
//	{
//		int y = 0;
//		while (s2[y] != '\0')
//		{
//			if (s2[y] == ch2)
//			{
//				c[x] = c[x] + 1;
//			}
//			y = y + 1;
//		}
//		ch2 = ch2 + 1;
//	}
//	int f = 0;
//	for (int s = 0;( s < 26 )&& (f==0); s = s + 1)
//	{
//		if (b[s] == c[s])
//		{
//			
//			status = true;
//		}
//		else
//		{
//			f = 1;
//			status = false;
//		}
//		
//	}
//	return status;
//
//}
//int main()
//{
//	char a1[20];
//	cout << "Enter first string";
//	cin >> a1;
//	char a2[20];
//	cout << "Enter second string";
//	cin >> a2;
//	if (isAnagram((char*)a1, (char*)a2))
//	{
//		cout << "****ANAGRAM****";
//	}
//	else
//		cout<< "****NOT ANAGRAM****";
//	return 0;
//}