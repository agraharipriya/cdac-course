#include<iostream>
#include "Student.h"
#include "MscStudent.h"
#include "PhdStudent.h"

int main(){

	// Student
	int arr[]={1,2,3};
  Student ob(1,"Rajan","up",arr);
  ob.display();
  Student* stu=new Student(1,"Rajani","mp",arr);
  stu->display();
  
  //MscStudent
  MscStudent msc(1,"Rajani","mp",[1,66,3],23,98);
  semp.display();
  MscStudent* msc1=new MscStudent(1,"Rajani","mp",arr,23,98);
  semp1->display();
  Student* emp1=new MscStudent(1,"Rajani","mp",arr,23,98);
  emp1->display();
  
  
  //PhdStudent
  PhdStudent ob1(1,"Rajani","mp",arr,"ss",2456);
   ob1.display();
    PhdStudent* cemp=new  PhdStudent(1,"Rajani","mp",arr,"p",1443);
   cemp->display();
   Student* emp2=new  PhdStudent(1,"Rajani","mp",arr,"aar",1678);
   emp2->display();
}
