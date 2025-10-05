#ifndef PERSON_H
#define PERSON_H
#include "Address.h"


class Person{
	int id;
	char* name;
	Address address;
	static int count; 

public :
	//default constructor
	Person();

	//parameterised constructor
	Person( const char* n, const Address& addr);

	//destructor
	~Person();

	//setter method
	void setId(int id);
	void setName(const char* n);
	void setAddress(const Address& addr);


	//getter method
	int getId();
	const char* getName();
	Address getAddress();
	

	//display method
	void display();

};

#endif
