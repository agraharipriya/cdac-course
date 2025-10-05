#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

#include "Customer.h"

class Residential : public Customer {
public:
    Residential(string n, int u);
    double calculateBill() override;
    void display() override;
};

#endif
