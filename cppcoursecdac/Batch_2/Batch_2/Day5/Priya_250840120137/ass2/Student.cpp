#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    int id;
    char name[50];
    int marks[3];

public:
    void accept() {
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void display() {
        cout << "\nStudent Details:\n";
        cout << "----------------\n";
        cout << "Student Id--> " << id << endl;
        cout << "Name: " << name << endl;
        cout << "M1: " << marks[0] << endl;
        cout << "M2: " << marks[1] << endl;
        cout << "M3: " << marks[2] << endl;
    }
};
