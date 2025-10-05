#include "PersonService.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

Person* PersonService::per[100] = {nullptr};
int PersonService::count = 0;

// accept new person details
void PersonService::acceptData() {
    if (count >= 100) {
        cout << "Person list is full!" << endl;
        return;
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
    per[count] = new Person(name, addr);
    count++;

    cout << "Person added successfully!\n";
}


// display all persons
void PersonService::displayAll() const {
    if (count == 0) {
        cout << "No persons available.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        per[i]->display();
    }
}

// search person by id
Person* PersonService::searchById(int id) const {
    for (int i = 0; i < count; i++) {
        if (per[i]->getId() == id) {
            return per[i];
        }
    }
    return nullptr;
}

// search person by name
Person* PersonService::searchByName(const char* name) const {
    for (int i = 0; i < count; i++) {
        if (strcmp(per[i]->getName(), name) == 0) {
            return per[i];
        }
    }
    return nullptr;
}

// modify address of person by id
bool PersonService::modifyAddress(int id) {
    Person* p = searchById(id);
    if (p == nullptr) {
        cout << "Person not found.\n";
        return false;
    }

    char street[50], city[50], state[50];
    int pin;
     // clear buffer
    cin.ignore();

    cout << "Enter new Street: ";
    cin.getline(street, 50);

    cout << "Enter new City: ";
    cin.getline(city, 50);

    cout << "Enter new State: ";
    cin.getline(state, 50);

    cout << "Enter new Pin: ";
    cin >> pin;

    Address newAddr(street, city, state, pin);
    p->setAddress(newAddr);

    cout << "Address updated successfully.\n";
    return true;
}


// find address by person id
Address* PersonService::findAddressById(int id) const {
    Person* p = searchById(id);
    if (p) {
        return new Address(p->getAddress());
    }
    return nullptr;
}

// display persons by city
void PersonService::displayByCity(const char* city) const {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(per[i]->getAddress().getCity(), city) == 0) {
            per[i]->display();
            found = true;
        }
    }
    if (!found) {
        cout << "No persons found in city: " << city << endl;
    }
}
