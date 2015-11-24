//Ryan Melendez


#include <iostream>
#include <string>
#include "Number.h"

using namespace std;

int main()
{

	
	Numbers n;
	int number = 0;
	int length = 0;

	do
	{
		cout << "Please a number from 0 to 9999 :";
		cin >> number;
		n.setNum(number);

	} while (number < 0 || number > 9999);

	length = n.calcVal();

	cout << "The number was: " << n.getNum() << endl;;
	n.printRes(length);
	cout << endl;





	return 0;
}