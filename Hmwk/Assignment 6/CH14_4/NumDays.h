/*
Ryan Melendez
CSC 17A
11/23/15
*/

#ifndef NUMDAYS_H
#define	NUMDAYS_H

class NumDays {
public:
	NumDays();
	NumDays(int);
	NumDays(const NumDays& orig);
	~NumDays();
	int getHours();
	void setHours(int);
	float getNumDays();
	void setNumDays(float);

	NumDays operator+(const NumDays& n);
	NumDays operator-(const NumDays& n);
	NumDays& operator++(); //prefix
	NumDays& operator--();
	NumDays operator++(int); //postfix
	NumDays operator--(int);
private:
	int numHours;
	float numDays;
};

#endif	
