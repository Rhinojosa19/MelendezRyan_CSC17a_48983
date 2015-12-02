/*
* Ryan Melendez
* 12/1/15
* CSC 17A
* CH15-2
*
*/


#ifndef PRODUCTIONWORKER_H
#define	PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee {
public:
	ProductionWorker(); 
	ProductionWorker(int, float);
	ProductionWorker(const ProductionWorker& orig);
	~ProductionWorker();
	void setShift(int);
	void setRate(float);
	int getShift();
	float getRate();
private:
	int shift;
	float rate;
};

#endif	