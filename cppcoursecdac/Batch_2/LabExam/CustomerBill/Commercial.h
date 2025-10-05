#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Customer.h"

class Commercial : public Customer {
public:
    Commercial(string n, int u);
    double calculateBill() override;
    void display() override;
};

#endif
