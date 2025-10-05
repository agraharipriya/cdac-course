#include "Student.h"


class MscStudent:public Student{
	
   private:
      double spclSubMarks;
      double langMarks;
      static char* degree;
      
   public:
	//default constructor
     MscStudent();

	//parameterised constructor
      MscStudent(int id,const char* nm, const char*ad, const float marks[],double ss,double lm);

	//Destructor 
      ~MscStudent();
	
	//setter method
      void setSpecialSubMarks(const char* ss);
      void setLanguageMarks(double lm);

	//getter method
      double getSpecialSubMarks();
      double getLanguageMarks();

	//display 
      void display();


};
