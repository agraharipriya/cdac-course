#include "Student.h"

// =================== MscStudent ===================
class MscStudent : public Student {
private:
    double spclSubMarks;
    double langMarks;
    static char* degree;

public:
      //default constructor
    MscStudent();

      //Parameterised constructor
    MscStudent(int id, const char* nm, const char* ad, const float marks[], double ss, double lm);

      //destructor
    ~MscStudent();
//     //setter method
//       void setSpecialSubMarks(double ss);
//       void setLanguageMarks(double lm);

// 	//getter method
//       double getSpecialSubMarks();
//       double getLanguageMarks();

// display class 
    void display() const;
};
