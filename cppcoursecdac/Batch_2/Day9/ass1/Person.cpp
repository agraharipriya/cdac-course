#include "Person.h"
#include "Address.h"
#include <iostream>
#include<cstring>
using namespace std;

// intialization of static member
 int Person::count=0;

//Default Constructor
Person::Person(){
	cout<<"Default Constructor of Person "<<endl;
	name=nullptr;
	}

// Parameterised Constructor
Person::Person( const char* n,const Address& addr):address(addr){
	cout<<"Parameterised Constructor of Person "<<endl;
	id=++count;
	name = new char[strlen(n)+1];
	strcpy(name,n);
	}

// Destructor
Person::~Person(){
	cout<<"Destructor of Person "<<endl;
	if(name)
	delete[] name;
}

// setter method
void Person::setId(int id){
	this->id=id;
}
void Person::setName(const char* n){
	delete[] name;
		name=new char[strlen(n)+1];
		strcpy(name,n);
}

void Person::setAddress(const Address& addr){
	address=addr;
}

// getter method
int Person::getId() {
	return id;
}

 const char* Person::getName() {
	return name;
}
Address Person::getAddress() {
	return address;
}

// display
void Person:: display(){
	cout << "Person Id   : " << id << endl;
    cout << "Name        : " << (name ? name : "Not available") << endl;
	cout<<endl;
    cout << "--- Address ---" << endl;
	address.display();
}