//#include<iostream>
//using namespace std;
//
//A:-
//
//struct point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	point center;
//	center.x = 12;
//	center.y = 7;
//	cout << center.x << " " << center.y<<"\n";
//    return 0;
//}
//
//
//B:-
//
//struct FullName
//{
//	char lastName[50];
//	char middleName[50];
//	char firstName[50];
//};
//int main()
//{
//	FullName info;
//	cout << "Enter first Name:" << "\n";
//	cin >> info.firstName;
//	cout << "Enter middle Name:" << "\n";
//	cin >> info.middleName;
//	cout << "Enter last Name:" << "\n";
//	cin >> info.lastName;
//	cout << info.firstName << " ";
//	cout << info.middleName << " ";
//	cout << info.lastName << " ";
//	return 0;
//}
//
//
//C:-
//
//struct MovieData
//{
//	char Title[50];
//	char Director[50];
//	int YearReleased;
//	double RunningTime;
//};
//void print(MovieData movie[],int i)
//{
//	
//	cout << "Title of Movie#" << i + 1 <<" :"<< movie[i].Title<<"\n";
//	cout << " Director of Movie#" << i + 1 << " :" << movie[i].Director << "\n";
//	cout << " Year of release of Movie#" << i + 1 << " :" << movie[i].YearReleased<<"\n";
//	cout << " Running Time of Movie#" << i + 1 << " :" << movie[i].RunningTime << "\n";
//}
//int main()
//{
//	MovieData movie[2];
//	for (int i = 0; i < 2; i++)
//	{
//		
//		cout << "Enter Title of Movie#" << i + 1 << "\n";
//		cin >> movie[i].Title;
//		cout << "Enter Director of Movie#" << i + 1 << "\n";
//		cin >> movie[i].Director ;
//		cout << "Enter year of release of Movie#" << i + 1 << "\n";
//		cin >> movie[i].YearReleased;
//		cout << "Enter Running Time of Movie#" << i + 1 << "\n";
//		cin >> movie[i].RunningTime;
//		
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		print(movie, i);
//		cout << "\n\n";
//	}
//	return 0;
//}
//
//
// D:-
//
//struct sales
//{
//	double firstQtrSales;
//	double secondQtrSales;
//	double thirdQtrSales;
//	double fourthQtrSales;
//	double totalAnnualSales;
//	double AvgQtrSales;
//};
//int main()
//{
//	sales east, west, north, south;
//	cout << "Enter first,second,third and fourth quater sales of EAST BRANCH"<< "\n";
//	cin >> east.firstQtrSales >> east.secondQtrSales >> east.thirdQtrSales >> east.fourthQtrSales;
//	east.totalAnnualSales = east.firstQtrSales + east.secondQtrSales + east.thirdQtrSales + east.fourthQtrSales;
//	east.AvgQtrSales = east.totalAnnualSales / 4;
//	cout << "\n";
//	cout << "Enter first,second,third and fourth quater sales of WEST BRANCH" << "\n";
//	cin >> west.firstQtrSales >> west.secondQtrSales >> west.thirdQtrSales >> west.fourthQtrSales;
//	west.totalAnnualSales = west.firstQtrSales + west.secondQtrSales + west.thirdQtrSales + west.fourthQtrSales;
//	west.AvgQtrSales = west.totalAnnualSales / 4;
//	cout << "\n";
//	cout << "Enter first,second,third and fourth quater sales of NORTH BRANCH" << "\n";
//	cin >> north.firstQtrSales >> north.secondQtrSales >> north.thirdQtrSales >> north.fourthQtrSales;
//	north.totalAnnualSales = north.firstQtrSales + north.secondQtrSales + north.thirdQtrSales + north.fourthQtrSales;
//	north.AvgQtrSales = north.totalAnnualSales / 4;
//	cout << "\n";
//	cout << "Enter first,second,third and fourth quater sales of SOUTH BRANCH" << "\n";
//	cin >> south.firstQtrSales >> south.secondQtrSales >> south.thirdQtrSales >> south.fourthQtrSales;
//	south.totalAnnualSales = south.firstQtrSales + south.secondQtrSales + south.thirdQtrSales + south.fourthQtrSales;
//	south.AvgQtrSales = south.totalAnnualSales / 4;
//	cout << "\n";
//	cout << "EAST BRANCH'S SALES DATA" << "\n" << "-------------------------\n";
//	cout << "First Qtr Sales:" << east.firstQtrSales << "\n";
//	cout << "Second Qtr Sales:" << east.secondQtrSales << "\n";
//	cout << "Third Qtr Sales:" << east.thirdQtrSales << "\n";
//	cout << "Fourth Qtr Sales:" << east.fourthQtrSales << "\n";
//	cout << "Total Qtr Sales:" << east.totalAnnualSales << "\n";
//	cout << "Average Qtr Sales:" << east.AvgQtrSales << "\n";
//	cout << "\n";
//	cout << "WEST BRANCH'S SALES DATA" << "\n" << "-------------------------\n";
//	cout << "First Qtr Sales:" << west.firstQtrSales << "\n";
//	cout << "Second Qtr Sales:" << west.secondQtrSales << "\n";
//	cout << "Third Qtr Sales:" << west.thirdQtrSales << "\n";
//	cout << "Fourth Qtr Sales:" << west.fourthQtrSales << "\n";
//	cout << "Total Qtr Sales:" << west.totalAnnualSales << "\n";
//	cout << "Average Qtr Sales:" << west.AvgQtrSales << "\n";
//	cout << "\n";
//	cout << "NORTH BRANCH'S SALES DATA" << "\n" << "-------------------------\n";
//	cout << "First Qtr Sales:" << north.firstQtrSales << "\n";
//	cout << "Second Qtr Sales:" << north.secondQtrSales << "\n";
//	cout << "Third Qtr Sales:" << north.thirdQtrSales << "\n";
//	cout << "Fourth Qtr Sales:" << north.fourthQtrSales << "\n";
//	cout << "Total Qtr Sales:" << north.totalAnnualSales << "\n";
//	cout << "Average Qtr Sales:" << north.AvgQtrSales << "\n";
//	cout << "\n";
//	cout << "South BRANCH'S SALES DATA" << "\n" << "-------------------------\n";
//	cout << "First Qtr Sales:" << south.firstQtrSales << "\n";
//	cout << "Second Qtr Sales:" << south.secondQtrSales << "\n";
//	cout << "Third Qtr Sales:" << south.thirdQtrSales << "\n";
//	cout << "Fourth Qtr Sales:" << south.fourthQtrSales << "\n";
//	cout << "Total Qtr Sales:" << south.totalAnnualSales << "\n";
//	cout << "Average Qtr Sales:" << south.AvgQtrSales << "\n";
//	return 0;
//
//}