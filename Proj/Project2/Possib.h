#include <iostream>
#include <string>

using namespace std;

#pragma once

class Possib
{

public:
	Possib(); //constructor
	Possib(const Possib& orig);
	~Possib(); //destructor
	virtual void dispOutro();

	

private:


};


class Name : public Possib
{
public:
	Name();
	~Name();
	void setN1(string);
	void setN2(string);
	string getN1();
	string getN2();
	Name operator+=(const Name& t);
	Name operator-=(const Name& t);
	

private:
	string name1;
	string name2;


};



