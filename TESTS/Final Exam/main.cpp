/*
Ryan Melendez
12/18/15
CSC-17A
Final Exam
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <limits>
#include <fstream>
#include <string>

#include "Prob1Random.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Employ.h"
#include "SavingsAccount.h"

using namespace std;

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();



int main() 
{
	cout << showpoint << setprecision(7);

	int inN;

	do{
		Menu();
		inN = getN();
		switch (inN){
		case 1:
		{
			problem1();
			break;
		}
		case 2: 
		{
			problem2(); 
			break;
		}
		case 3:
		{
			problem3();
			break;
		}
		case 4: 
		{
			problem4();
			break;
		}
		case 5:
		{
			problem5();
			break;
		}
		case 6:
		{
			problem6();
			break;
		}
		default:;
		};
	} while (inN<7);
	return 0;
}

//Menu Function
void Menu()
{
	cout << "Problem 1" << endl;
	cout << "Problem 2" << endl;
	cout << "Problem 3" << endl;
	cout << "Problem 4" << endl;
	cout << "Problem 5" << endl;
	cout << "Problem 6" << endl;
	cout << "Problem 7" << endl;
}

//Choose problem number function
int getN()
{
	int inN;
	cin >> inN;
	cin.ignore();
	return inN;
}

void problem1()
{
	char n = 5;
	char rndseq[] = { 16, 34, 57, 79, 144 };
	int ntimes = 100000;
	Prob1Random a(n, rndseq);

	for (int i = 1; i <= ntimes; i++)
	{
		a.randFromSet();
	}
	int *x = a.getFreq();
	unsigned char *y = a.getSet();

	for (int i = 0; i<n; i++)
	{
		cout << int(y[i]) << " occured " << x[i] << " times" << endl;
	}

	cout << "The total number of random numbers is " << a.getNumRand() << endl;
}
void problem2(){
	int column;
	Prob2Sort<char> rc;
	bool ascending = true;
	ifstream infile;
	infile.open("Problem2.txt", ios::in);
	char *ch = new char[10 * 16];
	char *ch2p = ch;

	cout << "The start of Problem 2, the sorting problem" << endl;
	
	while (infile.get(*ch)){ cout << *ch; ch++; }
	infile.close();
	cout << endl;

	cout << "Sorting on which column" << endl;	
	cin >> column;

	char *SortCol = rc.sortArray(ch2p, 10, 16, column, ascending);

	for (int i = 0; i<10; i++)
	{
		for (int j = 0; j<16; j++)
		{
			cout << SortCol[i * 16 + j];
		}
	}
	delete[]SortCol;
	cout << endl;
	
}
void problem3(){
	cout << "Entering problem number 3" << endl;
	int rows = 5;
	int cols = 6;
	Prob3TableInherited<int> tab("Problem3.txt", rows, cols);
	const int *naugT = tab.getTable();

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << naugT[i*cols + j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	const int *augT = tab.getAugTable();

	for (int i = 0; i <= rows; i++)
	{
		for (int j = 0; j <= cols; j++)
		{
			cout << augT[i*(cols + 1) + j] << " ";
		}
		cout << endl;
	}

}
void problem4(){
	SavingsAccount mine(-300);

	for (int i = 1; i <= 10; i++)
	{
		mine.Transaction((float)(rand() % 500)*(rand() % 3 - 1));
	}
	mine.toString();
	cout << "Balance after 7 years given 10% interest = "
		<< mine.Total((float)(0.10), 7) << endl;
	cout << "Balance after 7 years given 10% interest = "
		<< mine.TotalRecursive((float)(0.10), 7)
		<< " Recursive Calculation " << endl;

}
void problem5(){
	Employee Mark("Mark", "Boss", 215.50);
	Mark.setHoursWorked(-3);
	Mark.toString();
	Mark.CalculatePay(Mark.setHourlyRate(20.0),
		Mark.setHoursWorked(25));
	Mark.toString();
	Mark.CalculatePay(Mark.setHourlyRate(40.0),
		Mark.setHoursWorked(25));
	Mark.toString();
	Mark.CalculatePay(Mark.setHourlyRate(60.0),
		Mark.setHoursWorked(25));
	Mark.toString();
	Employee Mary("Mary", "VP", 50.0);
	Mary.toString();
	Mary.CalculatePay(Mary.setHourlyRate(50.0),
		Mary.setHoursWorked(40));
	Mary.toString();
	Mary.CalculatePay(Mary.setHourlyRate(50.0),
		Mary.setHoursWorked(50));
	Mary.toString();
	Mary.CalculatePay(Mary.setHourlyRate(50.0),
		Mary.setHoursWorked(60));
	Mary.toString();

}


void problem6()
{
	cout << "Problem 6" << endl << endl;
	cout << "a) 0.125" << endl
		<< "Binary: " << 0.001 << endl
		<< "Octal: " << 0.1 << endl
		<< "Hex: " << 0.2 << endl << endl;

	cout << "b) 0.3" << endl
		<< "Binary: " << "0.01001" << endl
		<< "Octal: " << "0.2314" << endl
		<< "Hex: " << "0.4CC" << endl << endl;

	cout << "c) 89.3" << endl
		<< "Binary: " << "1011001.01001" << endl
		<< "Octal: " << "131.2314" << endl
		<< "Hex: " << "59.4CC" << endl << endl;

}
