/*
Ryan Melendez
CSC 17A
11/23/15
Ch14.4
Visual Studios 13
*/

//System Libraries
#include <iostream>
#include "NumDays.h"
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

int main() {
	NumDays num1;
	NumDays num2(12);
	num1 = num2++;
	num1 = num2--;
	num1 = --num2;
	cout << num1.getNumDays();
	return 0;
}