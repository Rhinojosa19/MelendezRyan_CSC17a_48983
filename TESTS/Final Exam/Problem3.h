#pragma once

#include <iostream>
#include <fstream>
using namespace std;
template<class T>
class Prob3Table{
protected:
	int rows;                                 //Number of rows in the table
	int cols;                                 //Number of cols in the table
	T *rowSum;                                //RowSum array
	T *colSum;                                //ColSum array
	T *table;                                 //Table array
	T grandTotal;                             //Grand total
	void calcTable(void);                     //Calculate all the sums
public:
	Prob3Table(char *, int, int);             //Constructor then Destructor
	~Prob3Table(){ delete[] table; delete[] rowSum; delete[] colSum; };
	T *getTable()const{ return table; };
	T *getRowSum()const{ return rowSum; };
	T *getColSum()const{ return colSum; };
	T getGrandTotal(){ return grandTotal;};

};

template<class T>
class Prob3TableInherited :public Prob3Table<T>
{

protected:
	T *augTable;                                  //Augmented Table with sums
public:
	Prob3TableInherited(char *, int, int);          //Constructor
	~Prob3TableInherited(){ delete[] augTable; };  //Destructor
	T *getAugTable()const{ return augTable; };
};

template <class T>

Prob3Table<T>::Prob3Table(char* text, int rows, int cols)
{
	
	grandTotal = 0;
	this->rows = rows;
	this->cols = cols;
	table = new T[rows*cols];
	rowSum = new T[rows];
	colSum = new T[cols];
	
	fstream io;
	int i = 0;
	io.open(text, ios::in);
	while (io >> table[i]){ i++; }
	
	io.close();	
	
	int temp = 0;

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			temp += table[i*cols + j];
		}
		rowSum[i] = temp;
		temp = 0;
	}

	for (int j = 0; j<cols; j++)
	{
		for (int i = 0; i<rows; i++)
		{
			temp += table[i*cols + j];
		}
		colSum[j] = temp;
		temp = 0;
	}
	
	calcTable();
	
}

template <class T>

void Prob3Table<T>::calcTable()
{
	for (int i = 0; i<rows; i++)
	{
		grandTotal += rowSum[i];
	}
}

template <class T>

Prob3TableInherited<T>::Prob3TableInherited(char* text, int rows, int cols) :Prob3Table<T>(text, rows, cols){
	aTable = new T[(rows + 1)*(cols + 1)];
	for (int i = 0; i<rows; i++){
		for (int j = 0; j<cols; j++)
		{
			aTable[i*(cols + 1) + j] = this->table[i*cols + j];
		}
		aTable[i*(cols + 1) + cols] = this->rowSum[i];
	}
	for (int i = 0; i<cols; i++){
		aTable[rows*(cols + 1) + i] = this->colSum[i];
	}
	aTable[rows*(cols + 1) + cols] = this->grandTotal;
}