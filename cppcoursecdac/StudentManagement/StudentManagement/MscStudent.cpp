#include "MscStudent.h"
#include<iostream>
#include <cstring>
using namespace std;

//initialize static variable
char* MscStudent::degree =(char*)"MSc"; 

// =================== MscStudent ===================
  // default constructor
MscStudent::MscStudent():Student(),spclSubMarks(0.0),langMarks(0.0){
cout<<"In default constructor of MscStudent "<<endl;
  //spclSubMarks=0.0;
 // langMarks=0.0;
}

// Parameterised constructor
MscStudent::MscStudent(int id,const char* nm, const char*ad, const float marks[], double ss,double lm):Student(id,nm,ad,marks){
cout<<"In parametrised constructor of MscStudent"<<endl;
  spclSubMarks=ss;
  langMarks=lm;
}
// destructor
MscStudent::~MscStudent(){
   cout<<"In MscStudent destructor"<<endl;
}

// display class
void MscStudent::display() const{
    Student::display();
     cout<<"Special Language Marks: "<< spclSubMarks<<","<<
     "Language Marks: " << langMarks<<endl;

}


