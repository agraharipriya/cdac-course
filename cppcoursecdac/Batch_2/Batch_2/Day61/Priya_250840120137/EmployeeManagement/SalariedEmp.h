#include "Employee.h"


class SalariedEmp:public Employee{
   private:
      double sal;
      double bonus;
      
   public:
	//default constructor
      SalariedEmp();

	//parameterised constructor
      SalariedEmp(int eno,const char* nm,const char *dt,const char* ds,double s);

	//Destructor 
      ~SalariedEmp();
	
	//setter method
      void setSal(double s);
      void setBonus(double b);

	//getter method
      double getBonus();
      double getSal();

	//display 
      void display();


};


