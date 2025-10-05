#include "PhdStudent.h"
#include<iostream>
#include <cstring>
using namespace std;
// static variable initialization
char* PhdStudent::degree = (char*)"PhD";
// ================== PhdStudent ===================

// default constructor
PhdStudent::PhdStudent() : Student(), nameThesis(nullptr), marksThesis(0.0) {
    cout << "In default constructor of PhdStudent" << endl;
}

// Parameterised constructor

PhdStudent::PhdStudent(int id, const char* nm, const char* ad, const float marks[], const char* nt, double mt)
: Student(id,nm,ad,marks), marksThesis(mt) {
    cout << "In parameterised constructor of PhdStudent" << endl;
    nameThesis = new char[strlen(nt)+1];
    strcpy(nameThesis, nt);
}

PhdStudent::~PhdStudent() { 
    cout << "In PhdStudent destructor" << endl;
        delete[] nameThesis; }

void PhdStudent::display() const {
    Student::display();
    cout << "Thesis: " << (nameThesis ? nameThesis : "N/A")
         << ", Thesis Marks: " << marksThesis << endl;
}
