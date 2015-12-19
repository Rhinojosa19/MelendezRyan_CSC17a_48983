#include <iostream>
#include "Direction.h"



Direction::Direction() //constructor
{
}


Direction::Direction(const Direction& orig)
{

}

Direction::~Direction() //destructor
{

}

void Direction::setDirect(int d) //sets d direction
{
	direction = d;

}


int Direction::getDirect() //get d direction
{

	return direction;

}

Direction Direction::operator+=(const Direction& t) //overloading the operator
{
	direction += t.direction;
	return *this;
}


Direction Direction::operator-=(const Direction& t) //overloading the operator
{
	direction += t.direction;
	return *this;
}