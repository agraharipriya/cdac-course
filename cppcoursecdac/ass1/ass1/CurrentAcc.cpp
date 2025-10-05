#include<iostream>
#include "CurrentAcc.h"
using namespace std;

//Initialization of static member
float CurrentAccount::interestRate=1.0;
float CurrentAccount::minBalance=1000;

// ---------------- Current Account ----------------//
//Parameterised Constructor
CurrentAccount:: CurrentAccount(const char* f, const char* l, const char* mob, const char* em, int transactions)
    : Account(f, l, mob, em) {
	transactionsPerDay=transactions;
    
}

//Destructor 
CurrentAccount:: ~CurrentAccount(){
cout<<"destructor constructor"<<endl;
}

//display method
void CurrentAccount::display() const {
	cout<<"Current Account -------->"<<endl;
    Account::display();
    cout << "Transactions per Day: " << transactionsPerDay << endl;
	cout<<"interestRate: "<<interestRate<<endl;
	cout<<"Minimum Balance: "<<minBalance<<endl;
	cout<<endl;
}

//method to update the transaction
void CurrentAccount::updateTransactions(int avgBalance){
	if(avgBalance <5000){
		transactionsPerDay=3;
	}
	else if(avgBalance <20000){
		transactionsPerDay=5;
	}
	else {
		transactionsPerDay=10;
	}
}
