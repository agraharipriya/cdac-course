#include<iostream>
#include<cstring>
#include "StudentService.cpp"
Student StudentService::stu[100];
int StudentService::count = 0;

int main() {
    int choice;
    do {
        cout << "\n===== Student Menu =====\n";
        cout << "1. Add new student\n";
        cout << "2. Display all students\n";
        cout << "3. Search by ID\n";
        cout << "4. Search by Name\n";
        cout << "5. Sort by M1 marks\n";
        cout << "6. Calculate GPA of a student\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Student s = StudentService::acceptData();
            StudentService::addStudent(s);
            break;
        }
        case 2:
            StudentService::displayAllStudents();
            break;
        case 3: {
            int id;
            cout << "Enter ID to search: ";
            cin >> id;
            Student* s = StudentService::searchById(id);
            if (s) s->display();
            else cout << "Student not found!\n";
            break;
        }
        case 4: {
            char name[50];
            cout << "Enter name to search: ";
            cin >> name;
            if (!StudentService::searchByName(name))
                cout << "Student not found!\n";
            break;
        }
        case 5:
            StudentService::sortByM1Marks();
              StudentService::displayAllStudents();
            break;
        case 6: {
            int id;
            cout << "Enter ID to calculate GPA: ";
            cin >> id;
            StudentService::calculateGPAofStudent(id);
            break;
        }
        case 7:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 7);

    return 0;
}

