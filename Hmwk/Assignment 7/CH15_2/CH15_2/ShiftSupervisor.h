
#ifndef SHIFTSUPERVISOR_H
#define	SHIFTSUPERVISOR_H
#include <string>
#include "Employee.h"

using namespace std;

class ShiftSupervisor: public Employee 
{
	public:
		ShiftSupervisor();
		~ShiftSupervisor();
		void setSalary(float);
		void setBonus(float);
		float getSalary();
		float getBonus();	

	private:
		float salary;
		float bonus;
};

#endif