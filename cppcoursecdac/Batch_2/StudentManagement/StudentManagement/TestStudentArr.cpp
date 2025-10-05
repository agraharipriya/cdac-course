#include "StudentService.h"
#include <iostream>
#include<cstring>
using namespace std;


int main() {
	int choice;
	
	do{
		cout << "1. Add new Student";
        cout << "3. Display All Student\n";
        cout << "4. Search by Id\n";
        cout << "5. Search by Name\n";
        cout << "6. Sort Students by m1 marks\n";
        cout << "7. Display All MSC Student\n";
        cout << "8. Display All PHD Student\n";
        cout << "9. Exit\n";
	
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice) {
			case 1: {
				int ch;
				cout << "1. Msc Student" << endl;
				cout << "2. Phd Student" << endl;
				cin >> ch;
				StudentService::addStudent(ch);
				
				break;
			}
			
			case 2: {
				StudentService::displayAll();
				break;
			}
					
			case 3: {
				char accId[20];
				cout << "Enter Account Number to search: ";
				cin >> accId;
				
				Student* result[100];
				int cnt = StudentService::searchByAccNum(accId,result);
				
				if (cnt < 0) {
					cout << "NO Account number found with  " << accId << endl;
				}
				else {
					  cout << "Account(s) found: " << endl;
					for (int i=0; i<=cnt; i++) {
						result[i]->display();
						cout << endl;
					}
				}
				break;
			}
			
	

		case 4: {
			char name[20];
			cout << "Enter name to search: ";
			cin >> name;

			Student* result[100];
			int cnt = StudentService::searchByName(name, result);

			if (cnt < 0) {
				cout << "NO name found with " << name << endl;
			} else {
				for (int i=0; i<=cnt; i++) {
					result[i]->display();
					cout << endl;
				}
			}
			break;
				}
			
			case 6: {
				StudentService::displayCurrAcc();
				break;
			}
			
			case 7: {
				StudentService::displaySavAcc();
				break;
			}
			
			case 8: {
				cout << "~ Thank You for visiting ~" << endl;
				break;
			}
		}
	} while(choice!=8);

	return 0;
}