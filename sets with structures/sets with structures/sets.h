struct set
{
	int * data;
	int capacity;
	int noOfElements;
};
void createSet(set &, int );
bool addElement(set &, int );
bool removeElement(set &, int );
bool searchElement(set , int );
int searchElementPosition(set , int );
bool isEmpty(set);
bool isFull(set);
void displaySet(set);
set setIntersection(set , set );
set createClone(set &source);
void deAllocate(set & );
set difference(set , set );
set calcUnion(set , set );
int isSubset(set , set );
void powerSet(set);
