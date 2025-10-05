#include "MscStudent.h"
#include "PhdStudent.h"
#include "StudentService.h"
#include <iostream>
#include <cstring>
using namespace std;

Student* StudentService::acc[100];
int StudentService::count = 0;
void StudentService::addStudent(int n) {
    int id;
    float marks;
    double ss,lm, mt;
    char nm[100], add[50],nt[100] ;

    cin.ignore();

    cout << "Enter  Name: ";
    cin.getline(nm, 100);

    cout << "Enter Address: ";
    cin.getline(add, 50);


    // Allocate dynamic memory
    char* fname = new char[strlen(nm) + 1];
    strcpy(fname, nm);

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