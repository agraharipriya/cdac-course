#include<iostream>
#include <cstring>
#include "SavingAcc.h"
using namespace std;

float SavingAccount::interestRate=4.0;
float SavingAccount::minBalance=20000;

// ---------------- Saving Account ----------------//

//Parameterised constructor
SavingAccount:: SavingAccount(const char* f, const char* l, const char* mob, const char* em, const char* chequeBook)
    : Account(f, l, mob, em) {
	chequeBookNumber=new char[strlen(chequeBook)+1];
	strcpy(chequeBookNumber,chequeBook);
	}
   
   
   //destructor
	SavingAccount:: ~SavingAccount(){
	delete[] chequeBookNumber;}

//display method
void SavingAccount::display() const {
		cout<<"Saving Account -------------->"<<endl;
 		Account::display();
		cout<<"ChequeBook: "<<chequeBookNumber<<endl;
		cout<<"Interest Rate: "<<interestRate<<endl;
		cout<<"Minimum Balance: "<<minBalance<<endl;
    }


