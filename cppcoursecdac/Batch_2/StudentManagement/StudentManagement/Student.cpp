#include<iostream>
#include<cstring>
using namespace std;
#include "Student.h"

//initialize static variable
float Student::passper=0;

// default constructor
Student::Student() : sid(0), name(nullptr), addr(nullptr) {
    for (int i = 0; i < 3; i++){
         marks[i] = 0;
        }
}

// parameterized constructor
Student::Student(int id, const char* nm, const char* ad, const float marks[]) {
    sid = id;
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
    addr = new char[strlen(ad) + 1];
    strcpy(addr, ad);
    for (int i = 0; i < 3; i++) this->marks[i] = marks[i];
}
// destructor
Student::~Student() {
    delete[] name;
    delete[] addr;
}
// setter methods
void Student::setStuId(int id) { sid = id; }
void Student::setName(const char* nm) {
    delete[] name;
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
}
void Student::setAddr(const char* ad) {
    delete[] addr;
    addr = new char[strlen(ad) + 1];
    strcpy(addr, ad);
}
void Student::setMarks(const float marks[]) {
    for (int i = 0; i < 3; i++) this->marks[i] = marks[i];
}
// 
int Student::getStuId() const { return sid; }
const char* Student::getName() const { return name; }
const char* Student::getAddr() const { return addr; }
const float Student::getMarks(int index) const { return (index>=0 && index<3)? marks[index] : -1; }
// display method
void Student::display() const {
    cout << "Student Id: " << sid
         << ", Name: " << (name ? name : "N/A")
         << ", Address: " << (addr ? addr : "N/A") << endl;
    for (int i = 0; i < 3; i++)
        cout << "Marks " << i + 1 << ": " << marks[i] << endl;
}

