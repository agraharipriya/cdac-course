#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;

class Address {
    char *street;
    char *city;
    char *state;
    int pin;

public:
    // default constructor
    Address();

    // parameterised constructor
    Address(const char* str, const char* cy, const char* stt, int p);

    // copy constructor
    Address(const Address& other);

    // assignment operator 
    Address& operator=(const Address& other);

    // destructor
    ~Address();

    // setter method
    void setStreet(const char* str);
    void setCity(const char* cy);
    void setState(const char* stt);
    void setPin(int p);

    // getter method
    const char* getStreet();
    const char* getCity();
    const char* getState();
    int getPin();

    // display
    void display();
};

#endif
