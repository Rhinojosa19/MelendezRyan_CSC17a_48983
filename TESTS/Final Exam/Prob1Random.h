#pragma once

#include <ctime>
#include <cstdlib>
using namespace std;


class Prob1Random
{

private:

	unsigned char *set;      //Creates random numbers
	char  nset;				 //numbers in sequence
	int  *freq;				 //Frequency 
	int   numRand;			 //Random num count


public:

	Prob1Random(const char, const char *);     //Constructor
	~Prob1Random(void);                        //Destructor

	unsigned char randFromSet(void)
	{                   
		numRand++;
		int num = rand() % 5;
		freq[num]++;
		return set[num];
	}

	int *getFreq(void) const
	{                 
		return freq;
	}

	unsigned char *getSet(void) const
	{                 
		return set;
	}

	int getNumRand(void) const
	{               
		return numRand;                     
	}
};
