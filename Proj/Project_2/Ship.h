#pragma once

#include <iostream>
#include <string>
#include "Point.h"


using namespace std;

class Ship : public Point
{

public:
	Ship();
	virtual ~Ship();
	Ship(const Ship& orig);

	void setL(int);
	void setN(string);
	int getL();
	string getN();
	Point onGrid[5];
	bool hitFlag[5];

	Ship operator-=(const Ship& t);
	Ship operator+=(const Ship& t);

protected:
	int length;
	string name;

};