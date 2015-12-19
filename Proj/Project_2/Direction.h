#include <iostream>

#pragma once

 
class Direction
{
public:
	Direction(); // constructor
	virtual ~Direction(); // destructor
	Direction(const Direction& orig);
	Direction operator+=(const Direction& t);
	Direction operator-=(const Direction& t);
	
	void setDirect(int);
	int getDirect();

private:
	
	int direction;

};

