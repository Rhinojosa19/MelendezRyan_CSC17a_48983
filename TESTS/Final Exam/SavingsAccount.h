#pragma once



class SavingsAccount {
public:
	SavingsAccount(float);               //Constructor
	void  Transaction(float);            //Procedure
	float Total(float, int);	         //Savings Procedure
	float TotalRecursive(float, int);
	void  toString();                    //Output Properties
private:
	float Withdraw(float);               //Utility Procedure
	float Deposit(float);                //Utility Procedure
	float Balance;                       //Property
	int   FreqWithDraw;                  //Property
	int   FreqDeposit;                   //Property

};