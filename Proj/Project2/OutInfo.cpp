#include "OutInfo.h"
#include <iostream>

OutInfo::OutInfo() //constructor
{
}

OutInfo::~OutInfo() //destructor
{
}

void OutInfo::setMiss(int m)  // sets missCount
{
	missCount = m;

}
void OutInfo::setHit(int h) // sets hitCOunt
{
	hitCount = h;

}

int OutInfo::getMiss() // gets missCount
{
	return missCount;

}

int OutInfo::gethit() // gets hitCount
{

	return hitCount;

}

OutInfo OutInfo::operator-=(const OutInfo& t) //overloading the operators
{
	missCount -= t.missCount;
	hitCount -= t.hitCount;
	return *this;
}

OutInfo OutInfo::operator+=(const OutInfo& t) //overloading the operators
{
	missCount += t.missCount;
	hitCount += t.hitCount;
	return *this;
}