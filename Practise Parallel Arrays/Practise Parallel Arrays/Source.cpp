/*
#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
/*

int addStudentRecord(int[], float[], int*, int, int, float);
int findStudentRollNo(int[], int, int);
bool isFull(int, int);
bool isEmpty(int);
bool removeStudentRecord(int[], float[], int*, int);
void displayAllRecords(int[], float[], int);
void findRecord(int[], float[], int *, int);
void recordWithCgpaGreater(int[], float[], int *, float);
void recordWithCgpaSmaller(int[], float[], int *, float);
float giveAverage(float[], int);
void updateCgpa(int[], float[], int*, int, float);
void studentDatabase();
int main()
{
studentDatabase();
return 0;
}
void studentDatabase()
{
const int size = 60;
int rollNo[size];
float cgpa[size];
int recordCount = 0;
int choice;
int rno;
float gp;
bool appRunFlag = true;
do
{
cout << "\n\n|||||||||||| Student Database |||||||||||";
cout << "\nEnter 1--> Add Record:";
cout << "\nEnter 2--> Search Record:";
cout << "\nEnter 3--> Dispaly All Records:";
cout << "\nEnter 4--> Display All Records with CGPA >=X:";
cout << "\nEnter 5--> Display All Records with CGPA <=X:";
cout << "\nEnter 6--> Display Class Average CGPA:";
cout << "\nEnter 7--> Remove a Record with Roll No=X:";
cout << "\nEnter 8--> Update CGPA with Roll No=X :";
cout << "\nEnter 0--> Close The Application:";
cin >> choice;

switch (choice)
{
case 1:
{
cout << "\n Enter Roll No:";
cin >> rno;
cout << "\n Enter CGPA:";
cin >> gp;
int status = addStudentRecord(rollNo, cgpa, &recordCount, size, rno, gp);
if (status == 1)
cout << "\n** Record Successfully Added**";
else if (status == 2)
cout << "\n**Database is full**";
else
cout << "\n **Record with Roll No:" << rno << "already exists**";
break;
}
case 2:
{
cout << "Enter Roll No to Find Record of:";
cin >> rno;
findRecord(rollNo, cgpa, &recordCount, rno);
break;
}
case 3:
{
displayAllRecords(rollNo, cgpa, recordCount);
break;
}
case 4:
{
cout << "Enter CGPA to find Record Greater than: ";
cin >> gp;
recordWithCgpaGreater(rollNo, cgpa, &recordCount, gp);
break;
}
case 5:
{
cout << "Enter CGPA to find Record lesser than: ";
cin >> gp;
recordWithCgpaSmaller(rollNo, cgpa, &recordCount, gp);
break;
}
case 6:
{
cout << "Average CGPA:" << giveAverage(cgpa, recordCount);
break;
}
case 7:
{
cout << "\n Enter Roll No to Remove Record:";
cin >> rno;
int status = removeStudentRecord(rollNo, cgpa, &recordCount, rno);
if (status == true)
cout << "\n **Record Successfully Removed**";
else
cout << "\n Record not Found";
break;
}
case 8:
{
cout << "Enter the roll number you want to update:";
cin >> rno;
cout << "Enter the new CGPA :";
cin >> gp;
updateCgpa(rollNo, cgpa, &recordCount, rno, gp);
break;
}
case 0:
{
appRunFlag = false;
}
}
} while (appRunFlag);
}
int addStudentRecord(int rollNo[], float cgpa[], int*rc, int size, int rno, float gp)
{
if (isFull(*rc, size))
return 2;
int recordIndex = findStudentRollNo(rollNo, *rc, rno);
if (recordIndex != -1)
{
return 0;
}
rollNo[*rc] = rno;
cgpa[*rc] = gp;
*rc = *rc + 1;
return 1;
}
int findStudentRollNo(int rollNo[], int rc, int key)
{
int i = 0;
while (i < rc && rollNo[i] != key)
{
i = i + 1;
}
if (i == rc)
return -1;
else
return i;
}
bool isFull(int rc, int size)
{
return rc == size;
}
void displayAllRecords(int rollNo[], float cgpa[], int rc)
{
cout << "\n Roll No CGPA:";
cout << "\n-----------------";
cout.fill('.');
for (int i = 0; i < rc; i = i + 1)
{
cout << "\n" << setw(7) << left << rollNo[i] << setw(12) << right << cgpa[i];
}
}
bool removeStudentRecord(int rollNo[], float cgpa[], int *rc, int key)
{
int index = findStudentRollNo(rollNo, *rc, key);
if (index == -1)
return false;
for (int i = index; i <= *rc - 1; i = i + 1)
{
rollNo[i] = rollNo[i + 1];
cgpa[i] = cgpa[i + 1];
}
*rc = *rc - 1;
return true;
}
void findRecord(int rollNo[], float cgpa[], int *rc, int key)
{
for (int i = 0; i <= *rc; i = i + 1)
{
if (rollNo[i] == key)
{
cout << "Roll No" << "\t" << rollNo[i] << "\t" << "cgpa" << "\t" << cgpa[i];
}
}
}
void recordWithCgpaGreater(int rollNo[], float cgpa[], int *rc, float key)
{
for (int i = 0; i <= *rc; i = i + 1)
{

if (cgpa[i] >= key)
{
cout << "Roll No" << "\t" << rollNo[i] << "\t" << "cgpa" << "\t" << cgpa[i];
cout << "\n";
}
}
}
void recordWithCgpaSmaller(int rollNo[], float cgpa[], int *rc, float key)
{
for (int i = 0; i <= *rc - 1; i = i + 1)
{

if (cgpa[i] <= key)
{
cout << "Roll No" << "\t" << rollNo[i] << "\t" << "cgpa" << "\t" << cgpa[i];
cout << "\n";
}
}
}
float giveAverage(float cgpa[], int rc)
{
cout << rc;
float avg;
float sum = 0;
float c = 0;
for (int i = 0; i <= rc - 1; i = i + 1)
{
sum = sum + cgpa[i];
c = c + 1.0;
}
return avg = sum / c;
}

void updateCgpa(int rollNo[], float cgpa[], int*rc, int key, float gp)
{
for (int i = 0; i <= *rc - 1; i = i + 1)
{
if (rollNo[i] == key)
{
cgpa[i] = gp;
}
}
}

*/
/*
void getInput(int[], int);
void getRandom(int[], int);
void noOfDigits(int[], int[], int,int*);
int main()
{
int lottery[5];
int user[5];
srand(time(0));
getInput(user, 5);
getRandom(lottery, 5);
int count = 0;
(noOfDigits(user, lottery, 5, &count));
if (count == 5)
{
cout << "You Are a Grand Prize Winner:";
}
cout << "The No of Matches Are:" << count;
cout << "\n Lottery Array:\n";
for (int i = 0; i <= 4; i = i + 1)
{
cout << lottery[i]<<"\n";
}

return 0;


}
void getInput(int user[], int size)
{
for (int i = 0; i <= size - 1; i = i + 1)
{
cout << "Enter Number:";
cin >> user[i];
}
}
void getRandom(int lottery[], int size)
{
for (int i = 0; i <= size - 1; i = i + 1)
{
lottery[i] = rand() % 9;
}
}
void noOfDigits(int user[], int lottery[], int size,int *count)
{

for (int i = 0; i <= size - 1; i = i + 1)
{
if (user[i] == lottery[i])
{
*count = *count + 1;
}

}


}

*/
#include<iostream>
using namespace std;
void getHours(long int[], int[], int);
void getPayRate(long int[], double[], int);
void getWages(int[], double[], double[], int);

int main()
{
	long int empid[7] = { 5658845,4520125,7895122,8777541,8451277,1302850,7580489 };
	int hours[7];
	getHours(empid, hours, 7);
	double payRate[7];
	getPayRate(empid, payRate, 7);
	double wages[7];
	getWages(hours, payRate, wages, 7);
	for (int i = 0; i <= 6; i = i + 1)
	{
		cout << "Employee Number:" << empid[i] << "\t" << "Gross Wage" << wages[i] << "\n";
	}


}
void getHours(long int empid[], int hours[], int size)
{
	for (int i = 0; i <= size - 1; i = i + 1)
	{
		cout << "Enter hours for" << empid[i] << "employee:";
		cin >> hours[i];
		while (hours[i] < 0)
		{
			cout << "Enter Again";
			cin >> hours[i];
		}
	}
}
void getPayRate(long int empid[], int payRate[], int size)
{
	for (int i = 0; i <= size - 1; i = i + 1)
	{
		cout << "Enter payRate for" << empid[i] << "employee:";
		cin >> payRate[i];
		while (payRate[i] < 6)
		{
			cout << "Enter Again";
			cin >> payRate[i];
		}
	}
}
void getWages(int hours[], double payRate[], double wages[], int size)
{
	for (int i = 0; i <= size - 1; i = i + 1)
	{
		wages[i] = hours[i] * payRate[i];
	}
}