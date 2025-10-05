#include<iostream>
#include<cstring>
using namespace std;
#include "Student.h"

//initialize static variable
float Student::passper=0;

//default constructor
Student::Student(){
  cout<<"In Student default constructor "<<endl; 
  sid=0;
  name=nullptr;
  addr=nullptr;
  for (int i = 0; i < 3; i++) {marks[i] = 0;}
}

//parametrised constructor
Student::Student(int id,const char* nm, const char* ad, const float marks[]){
    cout<<"In Student parametrised constructor "<<endl; 
    this->sid=id;
    name=new char[strlen(nm)+1];
    strcpy(this->name,nm);
    addr=new char[strlen(ad)+1];
    strcpy(this->addr,ad);
    for (int i = 0; i < 3; i++) {
            this->marks[i] = marks[i];
        }
    

}

//Destructor 
Student::~Student(){
   cout<<"In Student destructor "<<endl;
   if(name)
    delete[] name;
   if(addr)
    delete[] addr;
   
}

//inline setter method
inline void Student::setStuId(int id){
    this->sid=id;
}

inline void Student::setName(const char *nm){
   delete[] name;
   name=new char[strlen(nm)+1];
   strcpy(name,nm);
}

void Student::setAddr(const char *ad){
   delete[] addr;
   addr=new char[strlen(ad)+1];
   strcpy(addr,ad);
}

void Student::setMarks(const float marks[]) {
        for (int i = 0; i < 3; i++) {
            this->marks[i] = marks[i];
        }
}

//inline getter methods
inline int Student::getStuId(){return sid;}
inline const char* Student::getName(){return name;}
inline const char* Student::getAddr(){return addr;}
inline const float Student::getMarks(int index) { return (index >= 0 && index < 3) ? marks[index] : -1; }


//Display class
void Student::display(){
     cout<<"Student Id : "<<sid<<","<<" Name: "<<(name?name:"not avaialble")<<","<<" Address: "<<(addr?addr:"not available")<<",";
      for (int i = 0; i < 3; i++) {
            cout << "Marks " << i + 1 << "     : " << marks[i] << endl;
        }  
}
