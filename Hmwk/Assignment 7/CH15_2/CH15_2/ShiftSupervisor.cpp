#include <iostream>
#include <string>
#include "ShiftSupervisor.h"
using namespace std;

ShiftSupervisor::ShiftSupervisor()
{
	salary = 0.0;
	bonus = 0.0;
}
ShiftSupervisor::~ShiftSupervisor()
{
}

void ShiftSupervisor::setSalary(float s)
{
	salary = s;

}
void ShiftSupervisor::setBonus(float b)
{
	bonus = b;
}

float ShiftSupervisor::getSalary()
{
	return salary;
}
float ShiftSupervisor::getBonus()
{
	return bonus;
}




