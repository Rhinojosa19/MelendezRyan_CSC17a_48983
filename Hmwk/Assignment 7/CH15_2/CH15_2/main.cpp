/*
* Ryan Melendez
* CSC 17A
* 12/1/15
* CH 15-2
*
*/

#include <cstdlib>
#include <iostream>
#include "ProductionWorker.h"
#include "Employee.h"
#include "ShiftSupervisor.h"

using namespace std;

int main()
{

	ProductionWorker pwork;
	
	pwork.setName("Ryan");
	pwork.setNumber(23456);
	pwork.setDate("12/1/2015");
	pwork.setShift(2);
	pwork.setRate(12.56);
	cout << pwork.getName() << " " << pwork.getNumber() << " " << pwork.getDate() << endl;

	ShiftSupervisor super;

	super.setSalary(100000);
	super.setBonus(2500);
	
	cout << super.getSalary() + super.getBonus() << endl;

	return 0;
}
