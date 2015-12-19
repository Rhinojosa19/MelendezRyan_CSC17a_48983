#include "Ship.h"


Ship::Ship()
{
	length = 0;  // initialize the ship to zero
	name = "  ";
}

Ship::Ship(const Ship& orig)
{


}
Ship::~Ship()
{

}

void Ship::setL(int l)
{

	length = l; //length of the ship

}
void Ship::setN(string n)
{

	name = n; // name of the ship

}

int Ship::getL()
{

	return length; // get length of the ship

}

string Ship::getN()
{

	return name;   // get name of the ship

}
Ship Ship::operator-=(const Ship& t) //overloading operator
{

	length -= t.length;
	
	return *this;
}

Ship Ship::operator+=(const Ship& t) //overloading operator
{

	length += t.length;
	name += t.name;
	return *this;
}
