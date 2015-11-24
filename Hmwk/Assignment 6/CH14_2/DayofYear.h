
#ifndef DayofYear_H
#define DayofYear_H

class DayofYear
{
public:

	DayofYear();
	~DayofYear();
	void setDate(int);
	int getDate();
	void print();
	

private:

	int date;	
	/*static const int MonthDays[12];
	//Set the name of each month into an array
	static const string MonthName[12];
	*/
};

#endif 