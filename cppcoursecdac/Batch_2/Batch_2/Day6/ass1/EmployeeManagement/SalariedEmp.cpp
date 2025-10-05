#include "SalariedEmp.h"
#include<iostream>
using namespace std;
//  default constructor
SalariedEmp::SalariedEmp():sal(0.0),bonus(0.0){
cout<<"In default constructor of SalariedEmp "<<endl;
  //sal=0.0
  //bonus=0.0;
}

// parameterised constructor
SalariedEmp::SalariedEmp(int eno,const char* nm,const char *dt,const char* ds,double s):Employee(eno,nm,dt,ds){
cout<<"In parametrised constructor of SalariedEmp"<<endl;
  sal=s;
  bonus=s*0.10;
}

  // Destructor
SalariedEmp::~SalariedEmp(){
   cout<<"In salariedemp destructor"<<endl;
}

// display 
void SalariedEmp::display(){
     Employee::display();
     cout<<"Salary: "<<sal<<endl;
     cout<<"bonus: " <<bonus<<endl;

}

