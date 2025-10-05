#include "MscStudent.h"
#include<iostream>
#include <cstring>
using namespace std;

//initialize static variable
float MscStudent::degree[] = {0.0f, 0.0f, 0.0f}; 

MscStudent::MscStudent():spclSubMarks(0.0),langMarks(0.0){
cout<<"In default constructor of MscStudent "<<endl;
  //spclSubMarks=0.0;
 // langMarks=0.0;
}

MscStudent(int id,const char* nm, const char*ad, const float marks[], double ss,double lm):Student(id,nm,ad,marks[]){
cout<<"In parametrised constructor of MscStudent"<<endl;
  spclSubMarks=ss;
  langMarks=lm
}
MscStudent::~MscStudent(){
   cout<<"In MscStudent destructor"<<endl;
}

void MscStudent::display(){
    student::display();
     cout<<"Special Language Marks: "<<spclSubMarks<<endl;
     cout<<"Language Marks: " <<langMarks<<endl;

}

