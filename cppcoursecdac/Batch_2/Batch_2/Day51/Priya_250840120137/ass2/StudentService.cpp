#include<iostream>
#include<cstring>
#include "Student.cpp"
class StudentService {
    static Student stu[100];
    static int count;

public:
    static Student acceptData() {
        int id, marks[3];
        char name[50];
        cout << "Enter Id of Student: ";
        cin >> id;
        cout << "Enter name of Student: ";
        cin >> name;
        cout << "Enter marks (3 subjects): ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
        return Student(id, name, marks);
    }

    static void addStudent(const Student& s) {
        if (count < 100) {
            stu[count] = s;
            cout << "Student added at position " << count << endl;
            count++;
        } else {
            cout << "List is full!" << endl;
        }
    }

    static void displayAllStudents() {
        if (count == 0) {
            cout << "No students available!\n";
            return;
        }
        cout << "\n========= All Students =========\n";
        for (int i = 0; i < count; i++) {
            stu[i].display();
        }
    }

    static Student* searchById(int id) {
        for (int i = 0; i < count; i++) {
            if (stu[i].getId() == id) {
                return &stu[i];
            }
        }
        return nullptr;
    }

    static bool searchByName(const char* name) {
        for (int i = 0; i < count; i++) {
            if (strcmp(stu[i].getName(), name) == 0) {
                stu[i].display();
                return true;
            }
        }
        return false;
    }

    static void sortByM1Marks() {
        if (count <= 1) return;

        for (int i = 0; i < count - 1; ++i) {
            int minidx = i;
            for (int j = i + 1; j < count; ++j) {
                if (stu[j].getMark(0) < stu[minidx].getMark(0)) {
                    minidx = j;
                }
            }
            if (minidx != i) {
                Student temp = stu[i];
                stu[i] = stu[minidx];
                stu[minidx] = temp;
            }
        }
        cout << "List sorted by M1 marks.\n";
    }

    static void calculateGPAofStudent(int id) {
        Student* s = searchById(id);
        if (s) {
            cout << "GPA of student " << s->getName() << " is " << s->getGPA() << endl;
        } else {
            cout << "Student not found!\n";
        }
    }
};

