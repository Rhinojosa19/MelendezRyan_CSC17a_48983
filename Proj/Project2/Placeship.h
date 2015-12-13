#include <iostream>
#include "Ship.h"
#include "Direction.h"
using namespace std;

#pragma once

class Placeship : public Ship, public Direction
{
public:

	Placeship();	//constructor
	virtual ~Placeship();	//destructor
	Placeship(const Placeship& orig);
	void setHorz(int); //sets X values 
	void setVert(int); //sets X values 
	void setZ(int); //sets X values 
	int getHorz(); //gets X values 
	int getVert(); //gets Y values 
	int getZ(); //gets z values 


	Placeship operator+=(const Placeship& t); //overloading the operators
	Placeship operator-=(const Placeship& t); //overloading the operators
	Placeship operator/(const Placeship& t);  //overloading the operators

	Placeship UserInputShipPlacement(); //places ships on grid
	Point p;

private:
	int Horz;
	int Vert;
	int Z;


};