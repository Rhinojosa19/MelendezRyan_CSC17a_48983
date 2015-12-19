#pragma once

class Point
{
public:
	Point();   // constructor
	~Point();  // destructor
	Point(const Point& orig);
	void setX(int);	// sets X direction
	void setY(int); // sets Y direction
	int getX(); //gets X direction 
	int getY(); //gets Y direction

private:
	int X;
	int Y;

};

