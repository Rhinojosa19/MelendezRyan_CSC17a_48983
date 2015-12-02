// This program demonstrates a class with multiple inheritance.

#include <iostream>
#include "MilTime.h"
using namespace std;

int main()
{
	int h, s;




   do {
	   cout << "MilHour: ";
	   cin >> h;
	   if (h<0 || h>2359) cout << "Invalid milHour" << endl;
   } while (h<0 || h>2359);
   do {
	   cout << "MilSecond: ";
	   cin >> s;
	   if (s<0 || s>59) cout << "Invalid milSecond" << endl;
   } while (s<0 || s>59);

   MilTime mt;

   return 0;
}