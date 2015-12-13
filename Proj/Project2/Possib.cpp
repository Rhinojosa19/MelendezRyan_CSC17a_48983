#include "Possib.h"
#include <iostream>

using namespace std;

Possib::Possib()
{

}

Possib::Possib(const Possib& orig)
{	

}

Possib::~Possib()
{

}

void Possib::dispOutro()
{
	cout << "You found the hidden feature of the game!" << endl;
	cout << "Congradulations" << endl;
	cout << "In this feature you can mess with the other opponents name. " << endl;

}

Name::Name() //
{


}

Name::~Name()
{


}

void Name::setN1(string n)
{

	name1 = n;

}

void Name::setN2(string n2)
{

	name2 = n2;

}

string Name::getN1()
{

	return name1;

}

Name Name::operator+=(const Name& t)
{
	name1 += t.name1;
	return *this;
}

Name Name::operator-=(const Name& t)
{
	name1 += t.name1;
	return *this;
}
string Name::getN2()
{

	return name2;

}


