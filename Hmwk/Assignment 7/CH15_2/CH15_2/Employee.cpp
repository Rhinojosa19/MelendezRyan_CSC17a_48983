/*
  Ryan Melendez
  12/1/15
  CSC 17A
  CH15-2

*/

#include "Employee.h"

Employee::Employee() {
	name = "Ryan";
	number = 000;
	date = "1/1/2000";
}
Employee::Employee(string n, int num, string d)
{
	name = n;
	number = num;
	date = d;
}
Employee::Employee(const Employee& orig) 
{

}

Employee::~Employee() 
{

}

void Employee::setName(string n)
{
	name = n;
}
void Employee::setNumber(int num)
{
	number = num;
}
void Employee::setDate(string d)
{
	date = d;
}
string Employee::getName()
{
	return name;
}
int Employee::getNumber()
{
	return number;
}
string Employee::getDate()
{
	return date;
}