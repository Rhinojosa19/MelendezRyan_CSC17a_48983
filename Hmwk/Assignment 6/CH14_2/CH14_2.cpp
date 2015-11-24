
/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int date = 0;
	string res;

	cout << "Displays the month-day." << endl;
	cout << "Please enter a day from 1 to 365" << endl;
	cin >> date;


	ostringstream convert;
	convert->date;
	string 




	return 0;
}

*/
#include <iostream>
#include <string>
#include "DayofYear.h"

using namespace std;


//Day of the year class declaration

//**************************************************
// This function displays the month and day using  *
// the number entered.                             *
//**************************************************

     /*void DayOfYear::print(int day)
{
	int month = 0;

	while (MonthDays[month] < day)
		month = (month + 1) % 12;

	//Display month and day
	cout << MonthName[month] << " " << day - MonthDays[month - 1];
};
*/

int main()
{
	DayofYear day;

	/*const int MonthDays[] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	//Set the name of each month into an array
	const string MonthName[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	*/
	
	int date = 0;

	cout << "Please enter a date between 1 and 365" << endl;
	cin >> date;
	while (date < 1 || date >365)
	{
		cout << "Please enter a positive number between 1 and 365" << endl;
		cin >> date;
	}

	day.setDate(date);
	day.print();
}