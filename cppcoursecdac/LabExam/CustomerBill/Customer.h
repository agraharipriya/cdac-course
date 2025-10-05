#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int units;
public:
    Customer(string n, int u);
    virtual ~Customer();

    virtual double calculateBill() = 0; // pure virtual
    virtual void display() = 0;
};

#endif
