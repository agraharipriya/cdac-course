#include<iostream>
#include<cstring>
using namespace std;
#include "Employee.h"

//initialize static variable
int Employee::totalleaves=0;

//default constructor
Employee::Employee(){
  cout<<"In employee default constructor "<<endl; 
  empno=0;
  name=nullptr;
  dept=nullptr;
  desg=nullptr;
}

//parametrised constructor
Employee::Employee(int empno,const char* nm, const char*dt, const char* ds){
    cout<<"In employee parametrised constructor "<<endl; 
    this->empno=empno;
    name=new char[strlen(nm)+1];
    strcpy(this->name,nm);
    dept=new char[strlen(dt)+1];
    strcpy(this->dept,dt);
    desg=new char[strlen(ds)+1];
    strcpy(this->desg,ds);

}

//Destructor 
Employee::~Employee(){
   cout<<"In employee destructor "<<endl;
   if(name)
    delete[] name;
   if(dept)
    delete[] dept;
   if(desg)
    delete[] desg;
}

//inline setter method
inline void Employee::setEmpno(int id){
    this->empno=id;
}

inline void Employee::setName(const char *nm){
   delete[] name;
   name=new char[strlen(nm)+1];
   strcpy(name,nm);
}

void Employee::setDept(const char *dt){
   delete[] dept;
   dept=new char[strlen(dt)+1];
   strcpy(dept,dt);
}

void Employee::setDesg(const char *ds){
   delete[] desg;
   desg=new char[strlen(ds)+1];
   strcpy(desg,ds);
}

//inline getter methods
inline int Employee::getEmpno(){return empno;}
inline const char* Employee::getName(){return name;}
inline const char* Employee::getDept(){return dept;}
inline const char* Employee::getDesg(){return desg;}


//Display class
void Employee::display(){
     cout<<"Empno : "<<empno<<","<<" Name: "<<(name?name:"not avaialble")<<","<<" Department: "<<(dept?dept:"not available")<<",";
     cout<<"Designation : "<<(desg?desg:"not available")<<endl;   
}






