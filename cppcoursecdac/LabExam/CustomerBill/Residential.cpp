#include <iostream>
#include "Residential.h"
using namespace std;

Residential::Residential(string n, int u) : Customer(n, u) {}

double Residential::calculateBill() {
    return units * 5.0; // Rs. 5 per unit
}

void Residential::display() {
    cout << "Residential Customer: " << name
         << " | Units: " << units
         << " | Bill: Rs." << calculateBill() << endl;
}
