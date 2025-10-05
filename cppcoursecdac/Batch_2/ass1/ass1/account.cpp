#include <iostream>
#include<cstring>
#include <iomanip>
#include <cstdio> 
#include <string>
#include "account.h"
using namespace std;

// Initialize static variable
int Account::accountCount = 0;

// ---------------- Account Base Class ----------------
Account:: Account(const char* f, const char* l, const char* mob, const char* em){
    fname=new char[strlen(f)+1];
	strcpy(fname,f);
	lname=new char[strlen(l)+1];
	strcpy(lname,l);
	mobile=new char[strlen(mob)+1];
	strcpy(mobile,mob);
	email=new char[strlen(em)+1];
	strcpy(email,em);
	accId=nullptr;
	generateId();
	
	}


//destructor
  Account::~Account(){
	delete[] fname;
	delete[] lname;
	delete[] mobile;
	delete[] email;
	delete[] accId;
}

//method to autogenerate Id
 void Account::generateId() {
    accountCount++;
    char idBuf[50];
	strncpy(idBuf,fname,3);
	idBuf[3]='\0';
	strncat(idBuf,lname,3);
	char countStr[10];
	sprintf(countStr,"%d",accountCount);
	strncat(idBuf, countStr, sizeof(idBuf) - strlen(idBuf) - 1); 
    accId = new char[strlen(idBuf) + 1];
    strcpy(accId, idBuf);
	}


//method to display
void Account::display() const {
    cout << "Account ID: " << accId<<endl;
    cout << "Name: " << fname << " " << lname<<endl;
    cout << "Mobile: " << mobile<<endl;
    cout << "Email: " << email<<endl;
  
}



