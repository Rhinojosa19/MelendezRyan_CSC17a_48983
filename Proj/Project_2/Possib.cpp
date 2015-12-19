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

template <class T>
Name<T>::Name()
{


}

template <class T>
Name<T>::~Name()
{


}

template <class T>
void Name<T>::setN1(string n)
{

	name1 = n;

}

template <class T>
void Name<T>::setN2(string n2)
{

	name2 = n2;

}

template <class T>
string Name<T>::getN1()
{

	return name1;

}



template <class T>
string Name<T>::getN2()
{

	return name2;

}


