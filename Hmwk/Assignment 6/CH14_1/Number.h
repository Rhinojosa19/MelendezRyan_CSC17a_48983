
#ifndef Numbers_H
#define Number_H

class Numbers
{
public:
	Numbers();
	~Numbers();
	void setNum(int);
	int getNum();
	int calcVal();// determines what numbers to choose from
	void printRes(int); // determines hundred v thousand...
 
private:
	unsigned int number;
	  
};



#endif