#include "ContractEmp.h"
#include<iostream>
using namespace std;

// default constructor
ContractEmp::ContractEmp():hrs(0.0),ch(0.0){
cout<<"In default constructor of ContractEmp :"<<endl;
 // hours=0.0;
 // charges=0.0;
}

// parameterised constructor
ContractEmp::ContractEmp(int eno,const char* nm,const char *dt,const char* ds,double h,double c):Employee(eno,nm,dt,ds){
cout<<"In parametrised constructor of ContractEmp :"<<endl;
  hrs =h;
  ch= h*c;
}

// Destructor
ContractEmp::~ContractEmp(){
   cout<<"In ContractEmp destructor : "<<endl;
}

// display
void ContractEmp::display(){
     Employee::display();
     cout<<"Hours : "<<hrs<<endl;
     cout<<"Charges : " <<ch<<endl;

}

