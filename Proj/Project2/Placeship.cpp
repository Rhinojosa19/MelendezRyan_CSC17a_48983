#include "Placeship.h"
#include <iostream>

using namespace std;

Placeship::Placeship() : Ship()
{
	Horz = 0;
	Vert = 0;
	Z = 0;
}

Placeship::Placeship(const Placeship& orig)
{

}

Placeship::~Placeship()
{
	

}

void Placeship::setHorz(int h)  // sets Horz placement
{

	Horz = h;

}

void Placeship::setVert(int v)  // sets Vert placement
{

	Vert = v;

}
void Placeship::setZ(int direct)  // sets Z placement
{

	Z = direct;

}

int Placeship::getHorz()  // get Horz value
{

	return Horz;

}

Placeship Placeship::operator/(const Placeship& t) //overlaoding the operator
{
	Vert += t.Vert;
	Z += t.Z;
	Horz += t.Horz;
	return *this;
}

int Placeship::getVert()  // get Vert value
{
	return Vert;
	
}

Placeship Placeship::operator-=(const Placeship& t) //overlaoding the operator
{
	Horz += t.Horz;
	Vert += t.Vert;
	Z += t.Z;
	return *this;
}

int Placeship::getZ()  // get Z value
{

	return Z;

}

Placeship Placeship::operator+=(const Placeship& t) //overlaoding the operator
{

	Horz += t.Horz;
	Vert += t.Vert;
	Z += t.Z;
	return *this;
}


Placeship Placeship::UserInputShipPlacement() // gets user input for positioning
{
	Placeship pht;
	Ship s;
	int d, x, y;
	// changing variables d x and y to general pointers
	int *ptrd = nullptr;
	int *ptrx = nullptr;
	int *ptry = nullptr;
	ptrd = &d;
	ptrx = &x;
	ptry = &y;	
	
		//Using this as a bad return
	pht.onGrid[0].setX(-1);


		//Get 3 integers from user
		cin >> *ptrd >> *ptrx >> *ptry;



	while (*ptrd > 1 || *ptrd < 0)			//checks for valid input of the ship in the HORZ or VERT direction
	{
		cout << "Please enter a correct value for the HORIZONTAL or VERTICAL location of the ships: " << endl;
		cin >> *ptrd;
		pht.setZ(*ptrd);
	}

	while (*ptrx > 14 || *ptrx < 0)			// checks for valid input of the ship in the x direction
	{
		cout << "Please enter a correct value for the x distance: " << endl;
		cin >> *ptrx;
		pht.setHorz(*ptrx);
	}

	while (*ptry > 9 || *ptry < 0)			// checks for valid input of the ship placement in the y direction
	{
		cout << "Please enter a correct value for the y distance: " << endl;
		cin >> y;
		pht.setVert(*ptry);
	}

	pht.setZ(*ptrd);
	pht.setHorz(*ptrx);
	pht.setVert(*ptry);

	//Good data

	return pht;

}


