#include <iostream>
#include <cstring>
#include "Student.cpp"
class StudentService
{
    // static array to hold students
    static Student stu[100];
    // static count of students
    static int count;

public:
    // static method to accept student data
    static Student acceptData()
    {
        int id, marks[3];
        char name[50];
        cout << "Enter Id of Student: ";
        cin >> id;
        cout << "Enter name of Student: ";
        cin >> name;
        cout << "Enter marks (3 subjects): ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        return Student(id, name, marks);
    }

    // static method to add student
    static void addStudent(Student s)
    {
        if (count < 100)
        {
            stu[count] = s;
            cout << "Student added at position " << count << endl;
            count++;
        }
        else
        {
            cout << "List is full!" << endl;
        }
    }

    //  static method to display all students
    static void displayAllStudents()
    {
        if (count == 0)
        {
            cout << "No students available!\n";
            return;
        }
        cout << "\n========= All Students =========\n";
        for (int i = 0; i < count; i++)
        {
            stu[i].display();
        }
    }

    //  static method to search student by ID
    static Student *searchById(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (stu[i].getId() == id)
            {
                return &stu[i];
            }
        }
        return nullptr;
    }

    // Search student by name (case-sensitive)
    static bool searchByName(const char *name)
    {
        if (count == 0)
        {
            cout << "No students available!\n";
            return false;
        }
        for (int i = 0; i < count; i++)
        {
            if (strcmp(stu[i].getName(), name) == 0)
            {
                cout << "\nStudent found:\n";
                stu[i].display();
                return true;
            }
        }

        cout << "Student not found!\n";
        return false;
    }

    // Sort students by Name (Alphabetical order)
    static void sortByName()
    {
        if (count <= 1)
            return;

        for (int i = 0; i < count - 1; ++i)
        {
            for (int j = i + 1; j < count; ++j)
            {
                if (strcmp(stu[i].getName(), stu[j].getName()) > 0)
                {
                    Student temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }
        cout << "List sorted by Name.\n";
    }

    // Sort students by M1 marks
    static void sortByM1Marks()
    {
        if (count <= 1)
            return;

        for (int i = 0; i < count - 1; ++i)
        {
            for (int j = i + 1; j < count; ++j)
            {
                if (stu[i].getMark(0) > stu[j].getMark(0))
                {
                    Student temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }
        cout << "List sorted by M1 marks.\n";
    }

    //  static method to calculate GPA of a student by ID
    static void calculateGPAofStudent(int id)
    {
        Student *s = searchById(id);
        if (s)
        {
            cout << "GPA of student " << s->getName() << " is " << s->getGPA() << endl;
        }
        else
        {
            cout << "Student not found!\n";
        }
    }
};
