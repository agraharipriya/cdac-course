#include<iostream>
#include "Employee.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"

int main(){

	//Employee object
  Employee ob(1,"Rajan","Hr","mgr");
  ob.display();
  Employee* emp=new Employee(2,"Revati","design","UXDesigner");
  emp->display();
  
  //SalariedEmp object
  SalariedEmp semp(3,"Rajan","Hr","mgr",2345);
  semp.display();
  SalariedEmp* semp1=new SalariedEmp(4,"Atharva","admin","CEO",55555);
  semp1->display();
 Employee* emp1=new SalariedEmp(5,"Ajay","admin","CEO",55555);
  emp1->display();
  
  
  //ContractEmp object
   ContractEmp ob1(6,"Varsha","HR","Programmer",34,2456);
   ob1.display();
   ContractEmp* cemp=new ContractEmp(7,"Sonali","Admin","mgr",45,1443);
   cemp->display();
   Employee* emp2=new ContractEmp(8,"Rama","Admin","mgr",5,1678);
   emp2->display();
}
