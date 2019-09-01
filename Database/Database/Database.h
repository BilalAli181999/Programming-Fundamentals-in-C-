#pragma once
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
