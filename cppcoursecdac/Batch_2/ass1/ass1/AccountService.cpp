#include "SavingAcc.h"
#include "CurrentAcc.h"
#include "AccountService.h"
#include <iostream>
#include <cstring>
using namespace std;

Account* AccountService::acc[100];
int AccountService::count = 0;
void AccountService::addAccount(int n) {
    char fn[50], ln[50], mob[20], em[50], cheque[30];

    cin.ignore();

    cout << "Enter First Name: ";
    cin.getline(fn, 50);

    cout << "Enter Last Name: ";
    cin.getline(ln, 50);

    cout << "Enter Mobile Number: ";
    cin.getline(mob, 20);

    cout << "Enter Email: ";
    cin.getline(em, 50);

    // Allocate dynamic memory
    char* fname = new char[strlen(fn) + 1];
    strcpy(fname, fn);

    char* lname = new char[strlen(ln) + 1];
    strcpy(lname, ln);

    char* mobile = new char[strlen(mob) + 1];
    strcpy(mobile, mob);

    char* email = new char[strlen(em) + 1];
    strcpy(email, em);

    if (n == 1) {
        int transactionsPerDay;
        cout << "Enter Transactions Per Day: ";
        cin >> transactionsPerDay;

        acc[count++] = new CurrentAccount(fname, lname, mobile, email, transactionsPerDay);
    } 
    else if (n == 2) {
        cout << "Enter Cheque Book Number: ";
        cin.ignore(); 
        cin.getline(cheque, 30);

        char* chequeBookNumber = new char[strlen(cheque) + 1];
        strcpy(chequeBookNumber, cheque);

        acc[count++] = new SavingAccount(fname, lname, mobile, email, chequeBookNumber);
    }
}


void AccountService::displayAll() {
	cout << "All Accounts are:" << endl;
	for (int i=0; i<count; i++) {
		acc[i]->display();
	}
}

 int AccountService::searchByAccNum(const char* accId,	Account* result[100]){

 	int cnt = -1;
	for (int i=0; i<count; i++) {
		if (strcmp(acc[i]->getId(), accId) == 0) {
			result[++cnt] = acc[i];
		}
	}
	return cnt;
 }


 int AccountService::searchByName(const char* name,Account* result[100]){
	
 	int cnt = -1;
	for (int i=0; i<count; i++) {
		if (strcmp(acc[i]->getFname(), name) == 0) {
			result[++cnt] = acc[i];
		}
	}
	return cnt;
 }

void AccountService::displayCurrAcc() {
	cout << "Current Account are:" << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<CurrentAccount*>(acc[i]))
			acc[i]->display();
	}
}

void AccountService::displaySavAcc() {
	cout << "Saving Accounts are:" << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<SavingAccount*>(acc[i]))
			acc[i]->display();
			cout << endl;
	}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
