#include "Student.cpp"

int main() {
    Student s[2];   // store exactly 2 students

    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        s[i].accept();
    }

    cout << "\n========= Student Information =========\n";
    for (int i = 0; i < 2; i++) {
        s[i].display();
    }

    return 0;
}
