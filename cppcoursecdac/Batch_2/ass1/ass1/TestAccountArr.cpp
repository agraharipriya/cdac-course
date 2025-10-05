#include "AccountService.h"
#include <iostream>
#include<cstring>
using namespace std;


int main() {
	int choice;
	
	do{
		cout << "1. Add new account";
        cout << "2. Display All Accounts\n";
        cout << "3. Search by account number\n";
        cout << "4. Search by Name\n";
        cout << "5. Sort Accounts by balance\n";
        cout << "6. Display All Saving Account\n";
        cout << "7. Display All Current Account\n";
        cout << "8. Exit\n";
	
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice) {
			case 1: {
				int ch;
				cout << "1. Current Account" << endl;
				cout << "2. Saving Account" << endl;
				cin >> ch;
				AccountService::addAccount(ch);
				
				break;
			}
			
			case 2: {
				AccountService::displayAll();
				break;
			}
					
			case 3: {
				char accId[20];
				cout << "Enter Account Number to search: ";
				cin >> accId;
				
				Account* result[100];
				int cnt = AccountService::searchByAccNum(accId,result);
				
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

			Account* result[100];
			int cnt = AccountService::searchByName(name, result);

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
				AccountService::displayCurrAcc();
				break;
			}
			
			case 7: {
				AccountService::displaySavAcc();
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
