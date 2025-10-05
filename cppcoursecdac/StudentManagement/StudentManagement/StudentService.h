#ifndef ASACCOUNT_H
#define ASACCOUNT_H

#include "Student.h"
#include "MscStudent.h"
#include "PhdStudent.h"

class StudentService:public Student{
	static Student* acc[100];
	static int count;
	
	public:
		static void addStudent(int n);
		static void displayAll();
		static int 	searchByAccNum(const char* accId, Student* result[100]);	
		static int searchByName(const char* name,Student* result[100]);
		// static int sortByAccBal();
		static void displaySavAcc();
		static void displayCurrAcc();
};

#endif