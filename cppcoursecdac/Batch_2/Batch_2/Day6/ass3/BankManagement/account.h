#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <cstring>
using namespace std;

class Account {
protected:
    char* accId;
    char* fname;
    char* lname;
 	char*  mobile;
	char* email;
	//double balance;
  	
    static int accountCount; // used for ID generation
	
public:
	//default constructor
	Account();
	//parameterized contructor
    Account(const char* f, const char* l, const char* mob, const char* em);

	 ~Account();  //destructor

    virtual void display() const = 0;
    virtual void generateId();
	
	const char* getId() const {
	return accId;
		}
    
};


#endif
