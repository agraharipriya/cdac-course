#include "PhdStudent.h"
#include<iostream>
#include <cstring>
using namespace std;

float PhdStudent::degree[] = {0.0f, 0.0f, 0.0f}; 

PhdStudent::PhdStudent():nameThesis(nullptr), marksThesis(0.0) {
cout<<"In default constructor of PhdStudent :"<<endl;
//nameThesis='\0';
//marksThesis=0.0;
}

PhdStudent(int id,const char* nm, const char*ad, const float marks[],const char* nt,double mt):Student(id,nm,ad,marks){
cout<<"In parametrised constructor of PhdStudent :"<<endl;
    nameThesis=new char[strlen(nt)+1];
    strcpy(this->nameThesis,nt);
    marksThesis=mt;
}
PhdStudent::~PhdStudent(){
   cout<<"In PhdStudent destructor : "<<endl;
   delete[] nameThesis;
}

void PhdStudent::display() const {
     Student::display();
     cout<<"Name of the Thesis : "<<(nameThesis ? nameThesis : "not available") << endl;
     cout<<"Marks of the Thesis : " <<marksThesis<<endl;

}


