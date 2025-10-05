#include "Person.h"
#include "Address.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {
     // array of pointers to Person
    Person* persons[100];
    int count = 0;      

    //menu driven program 
    int choice;
    do {
        cout << "\n--- Person Management Menu ---\n";
        cout << "1. Add new Person\n";
        cout << "2. Display All Persons\n";
        cout << "3. Search by Id\n";
            cout << "4. Search by Name\n";
            cout << "5. Modify Address\n";
            cout << "6. Find Address by Id\n";
            cout << "7. Display Persons by City\n";
            cout << "8. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                if (count >= 100) {
                    cout << "Person list is full!\n";
                    break;
                }
            
                char name[50], street[50], city[50], state[50];
                int pin;

                cin.ignore(); 

                cout << "Enter Name: ";
                cin.getline(name, 50);

                cout << "Enter Street: ";
                cin.getline(street, 50);

                cout << "Enter City: ";
                cin.getline(city, 50);

                cout << "Enter State: ";
                cin.getline(state, 50);

                cout << "Enter Pin: ";
                cin >> pin;

                Address addr(street, city, state, pin);
                persons[count] = new Person(name, addr);
                count++;
                cout << "Person added successfully!\n";
                break;
            }

            case 2: { 
                if (count == 0) {
                    cout << "No persons available.\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        persons[i]->display();
                    }
                }
                break;
            }

            case 3: {
                int id;
                cout << "Enter Person Id: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (persons[i]->getId() == id) {
                        persons[i]->display();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Person not found.\n";
                break;
            }

            case 4: { 
                char name[50];
               
                cin.ignore(); 
                cout << "Enter name: ";
                cin.getline(name, 50);

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (strcmp(persons[i]->getName(), name) == 0) {
                        persons[i]->display();
                        found = true;
                    }
                }
                if (!found) cout << "Person not found.\n";
                break;
            }

            case 5: {
                int id;
                cout << "Enter Person Id to modify address: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (persons[i]->getId() == id) {
                            
                char  street[50], city[50], state[50];
                int pin;

                cin.ignore(); 

            
                cout << "Enter Street: ";
                cin.getline(street, 50);

                cout << "Enter City: ";
                cin.getline(city, 50);

                cout << "Enter State: ";
                cin.getline(state, 50);

                cout << "Enter Pin: ";
                cin >> pin;
                    Address newAddr(street, city, state, pin);
                    persons[i]->setAddress(newAddr);
                    cout << "Address updated successfully.\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Person not found.\n";
            break;
        }

        case 6: {
            int id;
            cout << "Enter Person Id: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (persons[i]->getId() == id) {
                    persons[i]->getAddress().display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Person not found.\n";
            break;
        }

        case 7: {
            char city[50];           
            cin.ignore(); 
            cout << "Enter city: ";
            cin.getline(city, 50);
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (strcmp(persons[i]->getAddress().getCity(), city) == 0) {
                    persons[i]->display();
                    found = true;
                }
            }
            if (!found) cout << "No persons found in city: " << city << endl;
            break;
        }

        case 8:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 8);

    // delete person 
    for (int i = 0; i < count; i++) {
        delete persons[i];
    }

    return 0;
}
