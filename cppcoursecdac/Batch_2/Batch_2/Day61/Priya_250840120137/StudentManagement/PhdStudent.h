#include "Student.h"


class PhdStudent:public Student{
	
   private:
     char* nameThesis;
      double marksThesis;
      static char* degree;
      
   public:
	//default constructor
      PhdStudent();

	//Parameterised constructor
	PhdStudent(int id,const char* nm, const char*ad, const float marks[],const char* nt,double mt);

	//destructor
      ~PhdStudent();

	//setter method
      void setNameThesis(const char* nt);
      void setMarksThesis(double mt);

	//getter method
      double getNameThesis();
      double getMarksThesis();

	//display 
      void display();


};
