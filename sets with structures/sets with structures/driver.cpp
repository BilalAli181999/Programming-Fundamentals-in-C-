#include<iostream>
#include "sets.h"
using namespace std;
int main()
{
	set setA,setB,setX,setClone,setDifference,setUnion;
	createSet(setA, 10);
//	addElement(setA, 1);
	addElement(setA, 2);
	addElement(setA, 3);
	addElement(setA, 5);
//	addElement(setA, 5);
	createSet(setB, 10);
	addElement(setB, 3);
//	addElement(setB, 4);
//	addElement(setB, 2);
//addElement(setB, 5);
	powerSet(setA);
	if (isSubset(setA, setB) == 1)
		cout << "***PROPER SUBSET***";
	if (isSubset(setA, setB) == 2)
		cout << "***IMPROPER SUBSET***";
	if (isSubset(setA, setB) == 0)
		cout << "***NOT SUBSET***";
//	addElement(setB, 5);
//	displaySet(setA);
removeElement(setA, 5);
//	//displaySet(setA);
//	cout<<"Element's Position:"<<searchElementPosition(setA, 3);
//	cout << "Intersection";
//	setX = setIntersection(setA, setB);
//	displaySet(setX);
//	setClone = createClone(setA);
//	cout << "Clone of setA";
//	displaySet(setClone);
////	deAllocate(setClone);
////	displaySet(setClone);
//	setDifference = difference(setA, setB);
//	cout << "Difference:";
//	displaySet(setDifference);
//	setUnion = calcUnion(setA, setB);
//	cout << "Union:";
//	displaySet(setUnion);
//	cout<<isSubset(setA, setB);
	return 0;
}
