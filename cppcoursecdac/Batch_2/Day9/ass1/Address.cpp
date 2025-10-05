#include "Address.h"
#include <iostream>
#include <cstring>
using namespace std;

// default constructor
Address::Address() {
    street = nullptr;
    city = nullptr;
    state = nullptr;
    pin = 0;
}

// parameterised constructor
Address::Address(const char* str, const char* cy, const char* stt, int p) {
    street = new char[strlen(str) + 1];
    strcpy(street, str);

    city = new char[strlen(cy) + 1];
    strcpy(city, cy);

    state = new char[strlen(stt) + 1];
    strcpy(state, stt);

    pin = p;
}

// copy constructor 
Address::Address(const Address& other) {
    street = new char[strlen(other.street) + 1];
    strcpy(street, other.street);

    city = new char[strlen(other.city) + 1];
    strcpy(city, other.city);

    state = new char[strlen(other.state) + 1];
    strcpy(state, other.state);

    pin = other.pin;
}

// assignment operator 
Address& Address::operator=(const Address& other) {
    if (this != &other) {
        delete[] street;
        delete[] city;
        delete[] state;

        street = new char[strlen(other.street) + 1];
        strcpy(street, other.street);

        city = new char[strlen(other.city) + 1];
        strcpy(city, other.city);

        state = new char[strlen(other.state) + 1];
        strcpy(state, other.state);

        pin = other.pin;
    }
    return *this;
}

// destructor
Address::~Address() {
    delete[] street;
    delete[] city;
    delete[] state;
}

// setter method
void Address::setStreet(const char* str) {
    delete[] street;
    street = new char[strlen(str) + 1];
    strcpy(street, str);
}
void Address::setCity(const char* cy) {
    delete[] city;
    city = new char[strlen(cy) + 1];
    strcpy(city, cy);
}
void Address::setState(const char* stt) {
    delete[] state;
    state = new char[strlen(stt) + 1];
    strcpy(state, stt);
}
void Address::setPin(int p) {
    pin = p;
}

// getter method
const char* Address::getStreet() { return street; }
const char* Address::getCity() { return city; }
const char* Address::getState() { return state; }
int Address::getPin() { return pin; }

// display method
void Address::display() {
    cout << "Street Name : " << (street ? street : "N/A") << endl;
    cout << "City Name   : " << (city ? city : "N/A") << endl;
    cout << "State Name  : " << (state ? state : "N/A") << endl;
    cout << "Pin         : " << pin << endl;
    cout << "--------------------" << endl;
}
