/*
Ryan Melendez

*/

#include "NumDays.h"
#include "stdlib.h"

NumDays::NumDays(){
	numHours = 0;
	numDays = 0.0;
}
NumDays::NumDays(int hours) {
	numHours = hours;
	numDays = hours / 8.0;
}

NumDays::NumDays(const NumDays& orig) {
}

NumDays::~NumDays() {
}

int NumDays::getHours(){
	return numHours;
}

void NumDays::setHours(int hours){
	numHours = hours;
	setNumDays(hours / 8.0);
}

float NumDays::getNumDays(){
	return numDays;
}

void NumDays::setNumDays(float days){
	numDays = days;
}


NumDays NumDays::operator+(const NumDays& n)
{
	NumDays temp;
	temp.numHours = numHours + n.numHours;
	temp.numDays = temp.numHours / 8.0;
	return temp;
}


NumDays NumDays::operator-(const NumDays& n)
{
	NumDays temp;
	temp.numHours = abs(numHours - n.numHours);
	temp.numDays = temp.numHours / 8.0;
	return temp;
}


NumDays& NumDays::operator++() //prefix
{
	++numHours;
	numDays = numHours / 8.0;
	return *this;
}

NumDays NumDays::operator++(int) //postfix
{
	NumDays temp(numHours);
	numHours++;
	temp.setNumDays(numHours / 8.0);
	return temp;
}

NumDays& NumDays::operator--()
{ 
	--numHours;
	numDays = numHours / 8.0;
	return *this;
}

NumDays NumDays::operator--(int)
{ 
	NumDays temp(numHours);
	numHours--;
	temp.setNumDays(numHours / 8.0);
	return temp;
}