#include<iostream>
#include "Student.h"
#include "MscStudent.h"
#include "PhdStudent.h"



int main() {
  // Test Student, MscStudent, and PhdStudent classes
  // Create sample data
    float arr[] = {85.5, 90.0, 78.5};

    // Student object
    Student ob(1, "Rajan", "UP", arr);
    ob.display();

    // MscStudent object
    MscStudent msc(2, "Rajani", "MP", arr, 88, 92);
    msc.display();

    // PhdStudent object
    PhdStudent phd(3, "Sohan", "Delhi", arr, "Java researcher", 95);
    phd.display();

    return 0;
}

