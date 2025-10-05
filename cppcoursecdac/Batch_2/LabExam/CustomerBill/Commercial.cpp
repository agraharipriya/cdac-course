#include <iostream>
#include "Commercial.h"
using namespace std;

Commercial::Commercial(string n, int u) : Customer(n, u) {}

double Commercial::calculateBill() {
    return units * 8.0; // Rs. 8 per unit
}

void Commercial::display() {
    cout << "Commercial Customer: " << name
         << " | Units: " << units
         << " | Bill: Rs." << calculateBill() << endl;
}
