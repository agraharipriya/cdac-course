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
	
  	
    static int accountCount; 
	
public:
	//default constructor
	Account();
	
	//parameterized contructor
    Account(const char* f, const char* l, const char* mob, const char* em);


	//destructor
	 ~Account();  

	//pure virtual function of display
    virtual void display() const = 0;
    virtual void generateId();
	
	const char* getId() const {
	return accId;
	}
	const char* getFname() const{
		return fname;
	}
	const char* getLname() const{
		return lname;
	}
    
};


#endif
