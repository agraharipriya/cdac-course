#include<iostream>
using namespace std;
#include<cstring>

class Person{
  private:
     int id;
     char name[100];
     char addr[100];
     int age;
     
  public:
    //default constructor
    
    Person(){
      //cout <<"in default constructor"<<endl;
      id=0;
      name[0]='\0';
      addr[0]='\0';
      age=0;
    }
    //parametrised constructor
   Person(int id,char nm[],char address[],int a){
        cout <<"in Parametrised constructor"<<endl;
        this->id=id;
        strncpy(name,nm,sizeof(name)-1);
        name[sizeof(name)-1]='\0';
        strncpy(addr,address,sizeof(addr)-1);
        addr[sizeof(addr)-1]='\0';
        age=a;
             
   }
   //setter methods
   void setId(int id){
      this->id=id;
   }
   
   void setName( const char *nm){
       strncpy(name,nm,sizeof(name)-1);
       name[sizeof(name)-1]='\0';
   }
   
   void setAddr(const char *addr){
       strncpy(this->addr,addr,sizeof(addr)-1);
       this->addr[sizeof(addr)-1]='\0';
   }
   
   void setAge(int a){
      this->age=a;
   }
   //getter methods
   int getId() const{
      return this->id;
   }
   
   const char* getName() const{
      return name;
   }
   
   const char* getAddr() const{
      return addr;
   }
   
   int getAge() const{
      return age;
   }
   
   void display() const{
      cout<<"Id : "<<id<<" Name: "<<name;
      cout<<" Address: "<<addr<<" Age: "<<age<<endl;
      
   }
   
 };
