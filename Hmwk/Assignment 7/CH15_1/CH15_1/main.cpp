/*
 Ryan Melendez
 CSC 17A
 12/1/15
 CH 15-1

*/

#include <cstdlib>
#include <iostream>
#include "ProductionWorker.h"
#include "Employee.h"


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

	return 0;
}
