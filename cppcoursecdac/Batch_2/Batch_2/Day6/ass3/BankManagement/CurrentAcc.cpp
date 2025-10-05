#include<iostream>
#include "CurrentAcc.h"
using namespace std;

// ---------------- Current Account ----------------
CurrentAccount:: CurrentAccount(const char* f, const char* l, const char* mob, const char* em, int transactions)
    : Account(f, l, mob, em) {
	transactionsPerDay=transactions;
    interestRate = 1.0;
    minBalance = 1000;
}
CurrentAccount:: ~CurrentAccount(){
cout<<"destructor constructor"<<endl;
}


void CurrentAccount::display() const {
	cout<<"Current Account -------->"<<endl;
	cout<<"ID: "<<getId()<<endl;
    Account::display();
    cout << "Transactions per Day: " << transactionsPerDay << endl;
	cout<<"interestRate: "<<interestRate<<endl;
	cout<<"Minimum Balance: "<<minBalance<<endl;
}
void CurrentAccount::updateTransactions(int avgBalance){
if(avgBalance <5000){
transactionsPerDay=3;}
else if(avgBalance <20000){
transactionsPerDay=5;}
else {transactionsPerDay=10;}}
