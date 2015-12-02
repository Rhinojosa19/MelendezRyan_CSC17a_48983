/*
Ryan Melendez
12/1/15
CSC 17A
CH15-4
*/

#include "MilTime.h"

using namespace std;

MilTime::MilTime()
{
	hour = 0;
	sec = 0;
	min = 0;
	milHours = 0;
	milSeconds = 0;
}
MilTime::~MilTime()
{


}

void MilTime::setTime(int mh, int ms) {
	milHours = mh;
	milSeconds = ms;
	hour = mh % 100;
	min = mh / 100;
	sec = ms;
}



string MilTime::getStandHr() const {
	return to_string(milHours / 100) + ":" + to_string(milHours % 100) + ":" + to_string(milSeconds);
}


