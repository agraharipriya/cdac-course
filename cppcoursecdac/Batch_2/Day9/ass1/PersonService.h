#ifndef SPERSON_H
#define SPERSON_H
#include "Address.h"
#include "Person.h"

class PersonService:public Address{
    static Person* per[100];
    static int count;

public:

    void acceptData();
    void displayAll() const;
    Person* searchById(int id) const;
    Person* searchByName(const char* name) const;
    bool modifyAddress(int id);
    Address* findAddressById(int id) const;
    void displayByCity(const char* city) const;

};

#endif
