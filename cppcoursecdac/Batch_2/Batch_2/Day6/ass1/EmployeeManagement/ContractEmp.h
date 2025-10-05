#include "Employee.h"


class ContractEmp:public Employee{
   private:
      double hrs;
      double ch;
      
   public:
	//default constructor
      ContractEmp();

	//Parameterised constructor
     ContractEmp(int eno,const char* nm,const char *dt,const char* ds,double h,double c);

	//destructor
      ~ContractEmp();

	//setter method
      void setHours(double h);
      void setCharges(double c);

	//getter method
      double getCharges();
      double getHours();

	//display 
      void display();


};


