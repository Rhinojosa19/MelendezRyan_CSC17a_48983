#include "Point.h"


Point::Point() //constructor
{


}
Point::Point(const Point& orig)
{

}


Point::~Point() //destructor
{


}

void Point::setX(int nx) // sets X
{
	X = nx;
}

void Point::setY(int ny) // sets X
{
	Y = ny;
}

int Point::getX() // gets X
{
	return X;
}

int Point::getY()  // gets y
{

	return Y;

}
