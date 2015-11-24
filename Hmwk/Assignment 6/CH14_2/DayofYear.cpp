#include <iostream>
#include <string>
#include "DayofYear.h"

using namespace std;

DayofYear::DayofYear()
{
	 date = 0;
}
DayofYear::~DayofYear()
{


}

void DayofYear::setDate(int d)
{
	date = d;
}

int DayofYear::getDate()
{
	return date;
}

void DayofYear::print()
{

	const int MonthDays[] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	const string MonthName[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	
		int month = 0;

		while (MonthDays[month] < date)
			month = (month + 1) % 12;

		//Display month and day
		if (date < 32)
			cout << MonthName[month] << " " << date << endl;
		else
			cout << MonthName[month] << " " << date - MonthDays[month - 1] << endl;
		


}