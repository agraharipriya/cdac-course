#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private:
        char* name;
        int id;
        int marks[3];
public:

    Student(){
        cout<<"In default constructor"<<endl;
        id=0;
        name[0]='\0';
        // marks[0]='\0';
        for(int i=0;i<3;i++){
            marks[i]=0;
        }
    }
    Student(int id, const char* nm,const int marks[]){
        cout<<"Parameterised constructor "<<endl;
        this->id=id;
        name=new char(strlen(nm)+1);
        strcpy(this->name,nm);
        for(int i=0;i<3; i++){
            this->marks[i]=marks[i];
        }
    }
    
    ~Student(){
        delete[] name;
    }
    void setId(int id){
        this->id=id;
    }
      void setName(const char* nm){
        name=new char(strlen(nm)+1);
        strcpy(this->name,nm);
    }
    void setMarks(const int marks[]){
         for(int i=0;i<3; i++){
           this-> marks[i]=marks[i];
        }
    }
 const  char* getName() const{
        return name;
    }   
    int getId() const{
        return id;
    }
    const int getMarks() const{
        for(int i=0; i<3;i++){
            return marks[i];
        }
    }
    void display(){
        cout<<"Student Details : "<<endl;cout<<endl;
        cout<<"Student ID -->"<<id<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Name: "<<name<<endl;
        for(int i=0;i<3;i++){
            cout<<"Marks:" <<marks[i]<<endl;
        }
    }
};