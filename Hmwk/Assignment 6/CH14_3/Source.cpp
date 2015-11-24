/*
Ryan Melendez
CSC17A
11/23/15
Visual Studios 13
*/

#include <iostream>
#include "DayOfYear.h"

using namespace std;


int main() 
{
	
	DayOfYear d2;
	string m;
	int day=0;
	cout << "Please enter the month: ";
	cin >> m;
	cout << "Please enter a day of the month: ";
	cin >> day;
	DayOfYear d1(m, day);
	d2 = d1--;

	d2.print();
	return 0;
}