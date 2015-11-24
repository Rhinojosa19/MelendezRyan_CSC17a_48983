

#ifndef DAYOFYEAR_H
#define	DAYOFYEAR_H

#include <string>
using namespace std;

class DayOfYear
{
public:
	DayOfYear();
	DayOfYear(string, int);
    ~DayOfYear();
	void setNumDays(int);
	int getNumDays();
	void print();
	static const string MonthName[];
	static const int MonthDays[];

	DayOfYear& operator++(); //prefix
	DayOfYear& operator--();
	DayOfYear operator++(int); //postfix
	DayOfYear operator--(int);

private:
	int day;
	string month;
	int numDays;
};

#endif