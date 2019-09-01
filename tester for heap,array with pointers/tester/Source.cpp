#include<iostream>
using namespace std;
//int main()
//{
//	int *a;
//	int  **b = &a;
//	*b= new int[5];
//	for (int i = 0; i < 5; i = i + 1)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < 5; i = i + 1)
//	{
//		cout << a[i];
//	}
//}
//
//int main()
//{
//	int *a;
////	int  *&b = a;
//	a = new int[5];
//	for (int i = 0; i < 5; i = i + 1)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < 5; i = i + 1)
//	{
//		cout << a[i];
//	}
//}


//int ** start()
//{
//	int rows = 4;
//	int cols = 6;
//	int**mat;
//	mat = new int*[rows];
//	for (int i = 0; i < rows; i = i + 1)
//	{
//		mat[i] = new int[cols];
//	}
//	mat[1][2] = 21;
//	return mat;
//}
//int main()
//{
//	int **m;
//	m=start();
//	cout << m[1][2];
//	return 0;
//}
//
//int main()
//{
//	int *q;
//	int **p = &q;
//	*p = new int[2];
//	q[0] = 1;   //here if we do p[0] gives garbage as p contains address of q ,q contains address of array not address of q.
//	// this is not the case for alius as in alius q==p,chek next example
//	q[0] = 2;
//	cout << q[0] << " " << *p[0];//*p[0] means q[0] but if *p[1] gives error so dont use it 
//	return 0;
//
//}

//int main()
//{
//	int *q;
//	int **p = &q;
//	*p = new int[2];
//	q[0] = 1;  
//	*p[0] = 2; //only with *p[0] allowed but not with *p[1]
//	cout << q[0] << " " << *p[0];//*p[0] means q[0]
//	return 0;
//
//}


//
//int main()
//{
//	int *q;
//	int *&p = q;
//	p = new int[2];
//	q[0] = 1;
//	q[1] = 2;
//	cout << q[0] << " " << p[1];
//	return 0;
//
//}

//int main()
//{
//	int *q;
//	int **p = &q;
//	*p = new int[2];
//
//	//*p[0] = 12;  //simple p[0] gives error thus alius if preferable
//	//*p[1] = 11;
//	q[0]= 1;
//	q[1] = 208;
//	cout << *p[0] << q[1];
//
//}

//int main()
//{
//	int **q;
//	int **&p = q;
//	
//	 p = new int*[4];
//	
//	p[0] = new int [3];  // this creates a new 2d array of size 4*3 
//	p[2] = new int [3];
//	p[0][2] = 11;
//
//	cout << q[0][2];
//}



// 2-D HEAP ARRAY USING POINTERS

//int main()
//{
//	int **p;
//	p = new int*[3];
//	for (int i = 0; i < 3; i++)
//	{
//		p[i] = new int[3];
//	}
//	p[0][1] = 234;
//	cout << p[0][1];
//}




//int  *hello()
//{
//	int *p;
//	p= new int[3];
//	p[0] = 1;
//	p[1] = 1;
//	p[2] = 13;
//	
//	return p;
//}
//int main()
//{
//	int *c;
//	c = hello();
//	cout << c[1];
//	return 0;
//}



//HACKER EARTH


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[3][3] = {};
//	cin >> a[2][0];
//	cin >> a[1][0];
//	cin >> a[2][1];
//	cin >> a[0][0];
//	cin >> a[1][1];
//	cin >> a[0][1];
//	cin >> a[2][2];
//	cin >> a[1][2];
//	cin >> a[0][2];
//	int sum1 = a[0][0] + a[0][2] + a[1][1] + a[2][2];
//	cout << sum1 << "\n";
//	int sum2 = a[2][1] + a[0][1] + a[1][0] + a[1][2];
//	cout << sum2;
//	return 0;
//}
//
//
//void hello(int p[][3])
//{
//	cout << p[1];
//}
//int main() //we can also use int *p=&arr[0][0]
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	hello(arr);
//}
//
//void createSet(int **set, int n)
//{
//	*set = new int[n];
//}
//bool addElement(int *set, int *noe, int capacity, int element)
//{
//
//	set[*noe] = element;
//	*noe = *noe + 1;
//	if (capacity == *noe)
//	{
//		return false;
//	}
//	else
//		return true;
//}
//
//void displaySet(int set[], int noe)
//{
//	cout << "{";
//	for (int i = 0; i < noe; i = i + 1)
//	{
//		cout << set[i];
//		if (i < noe - 1)
//		{
//			cout << ",";
//		}
//	}
//	cout << "}";
//}
//int main()
//{
//	int *a;
//	int setACapacity = 10;
//	int setANOE = 0;
//	createSet(&a,5);
//	addElement(a, &setANOE, setACapacity, 33);
//	displaySet(a, setANOE);
//}

//
//void createSet(int **&set, int r,int c)
//{
// set = new int*[r];
//	for (int i = 0; i < r; i++)
//	{
//		set[i] = new int[c];
//	}
//}
//void addElement(int **set , int r , int c , int element)
//{
//	set[r][c]=element;
//	
//}
//
//void displaySet(int **set, int r,int c)
//{
//	
//	for (int i = 0; i < r; i = i + 1)
//	{
//		for (int j = 0; j < c; j = j + 1)
//		{
//			cout << set[i][j]<<"\t";
//		}
//		cout << "\n";
//	}
//	
//}
//int main()
//{
//	int **a;
//	int rows = 2;
//	int col = 2;
//	createSet(a, rows,col);
//	addElement(a, 1, 1, 23);
//	displaySet(a, 2,2);
//}


//#include<iostream>
//#include<math.h>
//using namespace std;
//float convertToFloat(bool *arr)
//{
//	int mant = 0;
//	int y = 1;
//	for (int i = 8; i >= 1; i--)
//	{
//		mant = mant + arr[i] * y;
//		y = y * 2;
//	}
//
//	int powOf2;
//	powOf2 = mant - 127;
//
//	float mantissa = 0;
//	double  s = -1;
//	for (int i = 9; i < 32; i++)
//	{
//
//		mantissa = mantissa + arr[i] * pow(2.0, s);
//		s = s - 1;
//	}
//
//	int signBit = arr[0];
//	float result;
//	if (powOf2 >= 0)
//		return pow(-1, signBit)*(1.0 + mantissa)*pow(2.0, powOf2);
//	else
//		return pow(-1, signBit)*(mantissa)*pow(2.0, powOf2);
//}
//bool * convertToBinary(float f)
//{
//	int exp;
//	float mant;
//	if (f >= 0)
//	{
//		exp = f;
//	}
//	if (f < 0)
//	{
//		exp = 100 - (100 + f);
//	}
//	mant = f - (int)f;
//	bool arr[33] = { 0 };
//	int bin[33] = {};
//	int e = exp;
//	int i = 0;
//	while (e != 0)
//	{
//		bin[i] = e % 2;
//		e = e / 2;
//		i++;
//	}
//	int x = i;
//	for (int j = 0; j < i / 2; j++)
//	{
//		int rep;
//		rep = bin[j];
//		bin[j] = bin[x - 1];
//		bin[x - 1] = rep;
//		x--;
//	}
//	/*for (int j = 0; j < i; j++)
//	{
//		cout << bin[j] << " ";
//	}*/
//	int count = i;
//	float c = mant;
//	while (c != 0)
//	{
//		bin[i] = c * 2;
//		c = (c * 2) - (int)(c * 2);
//		i++;
//	}
//
//	int newAdd;
//	if (exp != 0)
//	{
//		bool status = true;
//		for (int j = 0; j<count && status; j++)
//		{
//			if (bin[j] == 1)
//			{
//				newAdd = (count - 1) - j;
//				status = false;
//			}
//		}
//	}
//	if (exp == 0)
//	{
//		bool status = true;
//		for (int j = count; j < 33 && status; j++)
//		{
//			if (bin[j] == 1)
//			{
//				newAdd = -(j - count);
//				status = false;
//			}
//		}
//	}
//	int newBin = 127 + newAdd;
//	int u = 1;
//	while (newBin != 0)
//	{
//		arr[u] = newBin % 2;
//		newBin = newBin / 2;
//		u++;
//	}
//	int z = u;
//	int count1 = u;
//	for (int j = 1; j < u / 2; j++)
//	{
//		int rep;
//		rep = arr[j];
//		arr[j] = arr[z - 1];
//		arr[z - 1] = rep;
//		z--;
//	}
//
//	if (f < 0)
//	{
//		arr[0] = 1;
//
//	}
//	else
//	{
//		arr[0] = 0;
//	}
//
//	int d;
//	if (newAdd > 0)
//	{
//		d = count - newAdd;
//	}
//	if (newAdd < 0)
//	{
//		d = count + newAdd;
//	}
//
//	for (int j = 9; j < 33; j++)
//	{
//		arr[j] = bin[d];
//		d++;
//	}
//	for (int r = 0; r<32; r++)
//	{
//
//		cout << arr[r] << " ";
//		if (r == 0 || r == 8)
//			cout << "\t";
//	}
//	cout<<"FLOAT"<<convertToFloat(arr);
//	return 0;
//}
//
//int main()
//{
//	bool *arr;
//	float number;
//	cout << "Enter the number";
//	cin >> number;
//	arr = convertToBinary(number);
//
//
//	return 0;
//}

//int *hello() 
//{
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}
//	cout << a << "\n";  //A function can return an only made in heap
//	return a;
//}
//int main()
//{
//	int *arr;
//	arr = hello();
//	cout << "outside" << arr<<"\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout<< arr[i]<<" ";
//	}
//}

//
//int *hello()
//{
//	int *a=new int [5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}
//	cout << a << "\n";  //A function can return an array only made in heap
//	return a;
//}
//int main()
//{
//	int *arr;
//	arr = hello();
//	cout << "outside" << arr << "\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}


//void hello(char (*p)[4])
//{
//	
//		cout << p[1][1];
//	
//}
//int main()
//{
//	char a[3][4] = { "hel","hi","bye" };
//	cout << a[1];
//	hello(a);
//}

//void hello(int *p)
//{
//
//	cout <<"\n"<< p[4];
//
//}
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	cout << a[1]<<"\n";
//	cout << &a[1][0];
//	hello(&a[0][0]);
//}


//int main()
//{
//	char a[2][3] = { "bi","hi" };//if we dont put \0 then a[0] will not stop
//	cout << a[1];
//}

//
//#include<iostream>
//#include <cmath>
//
//using namespace std;
//
//int* getBinary(float);
//int* getIntegerBinary(int);
//int* getDecimalBinary(float);
//int getLength(int[]);
//void displayArray(int[]);
//void displayArray2(int[]);
//void reverseArray(int * &);
//
//int main()
//{
//	float num;
//	char ch = 'y';
//	int * Array;
//
//	while (ch = 'y')
//	{
//		cin >> num;
//		Array = getBinary(num);
//		displayArray2(Array);
//		cout << "\n";
//		cin >> ch;
//	}
//
//	delete[] Array;
//
//	cout << "\n";
//	return 0;
//}
//
//int* getBinary(float num)
//{
//	int i = 0;
//
//	int *Array = new int[32];
//
//	while (i < 32)
//	{
//		Array[i] = 0;
//		i = i + 1;
//	}
//
//	if (num == 0)
//		return Array;
//
//	if (num < 0)
//	{
//		num = num * -1;
//		Array[0] = 1;
//	}
//	else
//	{
//		Array[0] = 0;
//	}
//
//	int integer = num;
//	float decimal = num - integer;
//
//	int *intBinary, *decimalBinary;
//
//	intBinary = getIntegerBinary(integer);
//	displayArray(intBinary);
//
//	int index;
//
//	decimalBinary = getDecimalBinary(decimal);
//	displayArray(decimalBinary);
//
//	cout << "\n";
//
//	int exp, len;
//	int *expBinary;
//
//	if (integer != 0)
//	{
//		len = getLength(intBinary);
//		exp = len - 1;
//		index = 1;
//	}
//	else
//	{
//		int i = 0;
//		len = getLength(decimalBinary);
//		while (decimalBinary[i] != 1)
//		{
//			i = i + 1;
//		}
//		i = i + 1;
//		exp = -i;
//		cout << exp;
//		index = i;
//	}
//
//	expBinary = getIntegerBinary(127 + exp);
//	len = getLength(expBinary);
//	displayArray(expBinary);
//
//	cout << "\n";
//	i = 0;
//
//	int j = getLength(expBinary) - 1;
//	while (j >= 0)
//	{
//		Array[8 - i] = expBinary[j];
//		i = i + 1;
//		j = j - 1;
//	}
//
//	i = 9;
//
//	if (integer != 0)
//	{
//		while (intBinary[index] != 2)
//		{
//			Array[i] = intBinary[index];
//			i = i + 1;
//			index = index + 1;
//		}
//
//		j = 0;
//		while (decimalBinary[j] != 2)
//		{
//			Array[i] = decimalBinary[j];
//			i = i + 1;
//			j = j + 1;
//		}
//	}
//	else
//	{
//		while (decimalBinary[index] != 2)
//		{
//			Array[i] = decimalBinary[index];
//			i = i + 1;
//			index = index + 1;
//		}
//	}
//
//	delete[] intBinary;
//	delete[] decimalBinary;
//	delete[] expBinary;
//
//	return Array;
//
//}
//
//int* getIntegerBinary(int num)
//{
//	int *ch = new int[16];
//	int i = 0;
//
//	while (num != 0)
//	{
//		ch[i] = (num % 2);
//		num = num / 2;
//		i = i + 1;
//	}
//	ch[i] = 2;
//
//	reverseArray(ch);
//
//	return ch;
//}
//
//int* getDecimalBinary(float num)
//{
//	int *ch = new int[24];
//
//	int i = 0;
//
//	while (i < 23 && num != 0)
//	{
//		num = num * 2.0;
//		if (num >= 1)
//		{
//			ch[i] = 1;
//			num = num - 1;
//		}
//		else
//		{
//			ch[i] = 0;
//		}
//
//		i = i + 1;
//	}
//
//	ch[i] = 2;
//	return ch;
//}
//
//int getLength(int ch[])
//{
//	int count = 0;
//	while (ch[count] != 2)
//	{
//		count = count + 1;
//	}
//	return count;
//}
//
//void displayArray(int Array[])
//{
//	cout << "\n";
//
//	int i = 0;
//	while (Array[i] != 2)
//	{
//		cout << Array[i];
//		i = i + 1;
//	}
//}
//
//void displayArray2(int Array[])
//{
//	int i = 0;
//	while (i < 32)
//	{
//		cout << Array[i];
//		i = i + 1;
//	}
//}
//
//void reverseArray(int *&array)
//{
//	int n = getLength(array);
//	int temp, i = 0;
//
//
//	while (i < n / 2)
//	{
//		temp = array[i];
//		array[i] = array[n - 1 - i];
//		array[n - 1 - i] = temp;
//		i = i + 1;
//	}
//}


//void hello(int (*p)[4])
//{
//
//	cout <<"\n"<< p[4]; // prints address of index 4 
//
//}
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	cout << a[1]<<"\n";
//	cout << &a[1][0];
//	hello(a);
//}


//
//void hello(int *p)
//{
//
//	cout <<"\n"<< &p[4];  //&p[4] in int prints address of p[4] ,in char prints from index 4 to onwards
//
//}
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	cout << a[1]<<"\n";
//	cout << &a[1][0];
//	hello(&a[0][0]);
//}

//
//int main()
//{
//	char a[10] = "hellobila";
//	cout << a << " " << &a[2];
//}




//int main()
//{
//	char a[10] = "hellobila";
//	cout << a << " ";
//	a[2] = 0;
//	cout << a; //prints "he" as now a[2]=0 is an integar
//	cout << &a[0];//prints he as now a[2]=0 is an integar
//
//}

//
//int main()
//{
//	char a[10] = "hellobila";
//	cout << a << " ";
//	cout << &a[0];
//	cout << (int *)a;  //gives address of first memory
//
//}




//void hello(int *p)
//{
//
//	cout <<"\n"<< p[4];  //address of 4th bit
//	cout << *(p+2*4+3);   //prints 12
//}
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	cout << a[1]<<"\n";
//	cout << &a[1][0];
//	hello(a[0]);
//}

//void hello(char a[])
//{
//	cout << a[2];
//}
//int main()
//{
//	char a[10] = "hellobila";
//	hello(a);
//
//}

//
//void hello(char *a)
//{
//	cout << a[2];
//}
//int main()
//{
//	char a[10] = "hellobila";
//	hello(a);
//
//}


//void hello(char *a)
//{
//	cout << a[2];
//}
//int main()
//{
//	char a[10] = "hellobila";
//	hello((char*)a);
//}


//
//void hello(char a[][10])
//{
//	cout << a[1];  //prints bila
//}
//int main()
//{
//	char a[2][10] = { "hello","bila" };
//	hello(a);
//}
//


//
//void hello(char *a)
//{
//	cout << a[1];  //prints e
//	cout << *(a + 1 * 10 + 2); // print value of a[1][2]=l
//}
//int main()
//{
//	char a[2][10] = { "hello","bila" };
//	hello((char*)a);
//}


//void hello(char *a)
//{
//	cout << a[1];  //prints e
//	cout << *(a + 1 * 10 + 2); // print value of a[1][2]=l
//	//cout << a[1][2];//cannot use it
//}
//int main()
//{
//	char a[2][10] = { "hello","bila" };
//	hello((char*)a);
//}


//void hello(char *a)
//{
//	cout << a[1];  //prints e
//	cout << *(a + 1 * 10 + 2); // print value of a[1][2]=l
//}
//int main()
//{
//	char a[2][10] = { "hello","bila" };
//	cout << a[0]; //prints hello *(a+0)
//	hello(a[0]);
//}

//
//void hello(int *a)
//{
//	cout <<" "<< a[1];  //prints 2
//	cout <<" "<< *(a + 1 * 2 + 1); // print value of a[1][1]=4
//	//cout << a[1][1];//not allowed
//}
//int main()
//{
//	int a[2][2] = {1,2,3,4 };
//	cout << a[0]; //prints address
//	hello(a[0]);
//}


//
//void hello(int *a)
//{
//	cout << " " << a[1];  //prints 2
//	cout << " " << *(a + 1 * 2 + 1); // print value of a[1][1]=4
//	//cout << a[1][1];//not allowed
//}
//int main()
//{
//	int a[2][2] = { 1,2,3,4 };
//	cout << a[0]; //prints address
//	hello(&a[0][0]);
//}

//
//void hello(char (*a)[10])
//{
//	cout << a[1];  //prints bila
//	cout << a[1][2];
//}
//int main()
//{
//	char a[2][10] = { "hello","bila" };
////	cout << a[0]; //prints hello *(a+0)
//	hello(a);
//}


//
//void hello(char*a)
//{
//	cout << a[1];  //prints e
////	cout << a[1][2]; //not allowed
//}
//int main()
//{
//	char a[2][10] = { "hello","bila" };
//	//	cout << a[0]; //prints hello *(a+0)
//	hello(&a[0][0]);
//}


//int main()
//{
//	int a[10] = { 65,66,67,68,69};
//	char *p = (char*)a;
//	cout << a[0];
//	cout << "\n" << p[4]; //reads A
//
//}

//int main()
//{
//	int a[10] = { 65,66,67,68,69 };
//	int *p = a;
//	cout << p[0];
//	cout << "\n" << p[4]; //reads A
//
//}


//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	for (int i = 0; i < 12; i++)
//	{
//		cout << a[1][i] << ":";
//	}
//
//	return 0;
//}

//
// int main()
//{
//	char a[5][7] = { "ok","bye","well","pucit","pu" };
//	cout << a[0]<<"\n";
//	cout << &a[0] << "\n"; //prints address of first memory
//	cout << &a[3][1] << "\n"; //prints ucit
//	cout <<"\n";
//	cout << (void*)a[0]<<"\n";
//	char s[15] = "pucit geeks";
//	cout << s<<"\n";
//	cout << s[3] << "\n";
//	cout << &s[3] << "\n";
//
//	cout << a[3];
//}


//
//void f(const int *p)
//{
//	//*p = 91;
//	cout << *p;
//}
//int main()
//{
//	int a = 90;
//	f(&a);
//	return 1;
//}

//
//int main()
//{
//	int *p;
//	p = new int[5];
//	int *q = p;
//	q[5] = 7;
//	cout << p[5];
//}

//void hello(int q[])
//{
//	q[3] = 7;
//	
//}
//int main()
//{
//	int *p;
//	p = new int[5];
//	hello(p);
//	cout << p[3];
//}



void hello(int **q)
{
	q[1][2] = 7;

}
int main()
{
	int **p;
	p = new int*[2];
	p[0] = new int[3];
	p[1] = new int[3];
	hello(p);
	cout << p[1][2];
}


