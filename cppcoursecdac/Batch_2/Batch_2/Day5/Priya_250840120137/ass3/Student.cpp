
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char *name;
    int id;
    int marks[3];
    float gpa;

public:
    // Default Constructor
    Student()
    {
        id = 0;
        name = new char[1];
        name[0] = '\0';
        for (int i = 0; i < 3; i++)
            marks[i] = 0;
        gpa = 0.0;
    }

    // Parameterized Constructor
    Student(int id, const char *nm, const int marks[])
    {
        this->id = id;
        name = new char[strlen(nm) + 1];
        strcpy(this->name, nm);
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = marks[i];
        }
        calculateGPA();
    }

    // destructor
    ~Student()
    {
        // deallocate memory
        delete[] name;
    }

    // Setters methods
    void setId(int id) { this->id = id; }

    void setName(const char *nm)
    {
        delete[] name;
        name = new char[strlen(nm) + 1];
        strcpy(this->name, nm);
    }

    void setMarks(const int marks[])
    {
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = marks[i];
        }
        calculateGPA();
    }

    // Getters methods
    const char *getName() const { return name; }
    int getId() const { return id; }
    int getMark(int index) const { return (index >= 0 && index < 3) ? marks[index] : -1; }
    float getGPA() const { return gpa; }

    // calculate GPA of the student function
    void calculateGPA()
    {
        gpa = (1.0 / 3) * marks[0] + (1.0 / 2) * marks[1] + (1.0 / 4) * marks[2];
    }

    // display student details

    void display() const
    {

        cout << "Student ID : " << id << endl;
        cout << "Name : " << name << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks " << i + 1 << " : " << marks[i] << endl;
        }
        cout << "GPA : " << gpa << endl;
    }
};
