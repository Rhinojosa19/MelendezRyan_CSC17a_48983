/*
Ryan Melendez 
*/

#include "DayOfYear.h"
#include <iostream>
#include <stdlib.h>

const int DayOfYear::MonthDays[] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
const string DayOfYear::MonthName[] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December" };
DayOfYear::DayOfYear(string m, int d){
	month = m;
	day = d;
	for (int i = 0; i<12; i++){
		if (m == MonthName[0]){
			numDays = 0;
			break;
		}
		if (m == MonthName[i])
			numDays = MonthDays[i - 1];
	}
	if (d<1 || d>31)
		exit(0);
	numDays += d;
}

DayOfYear::DayOfYear(){
	month = "January";
	day = 1;
	numDays = 1;
}

DayOfYear::~DayOfYear() {
}

void DayOfYear::setNumDays(int d)
{
	numDays = d;
}

int DayOfYear::getNumDays()
{
	return numDays;
}

void DayOfYear::print()
{
	int m = 0;
	while (MonthDays[m] < numDays)
	{
		m = (m + 1) % 12;
	}
	if (numDays < 32)
	{
		cout << MonthName[m] << " " << numDays << endl;
	}
	else
	{
		cout << MonthName[m] << " " << numDays - MonthDays[m - 1] << endl;
	}
}

DayOfYear& DayOfYear::operator ++(){
	++numDays;
	if (numDays>365)
		numDays = 1;
	return *this;
}

DayOfYear DayOfYear::operator ++(int){
	DayOfYear temp;
	temp.numDays++;
	if (temp.numDays>365)
		temp.numDays = 1;
	return temp;
}

DayOfYear& DayOfYear::operator --(){
	--numDays;
	if (numDays == 0)
		numDays = 365;
	return *this;
}

DayOfYear DayOfYear::operator --(int){
	DayOfYear temp;
	temp.numDays--;
	if (temp.numDays == 0)
		temp.numDays = 365;
	return temp;
}