#include <iostream>
#include "Residential.h"
#include "Commercial.h"
using namespace std;

int main() {
    const int SIZE = 4;
    Customer* customers[SIZE];

    // Create some customers
    customers[0] = new Residential("Priya", 120);
    customers[1] = new Commercial("TechCorp", 300);
    customers[2] = new Residential("Satyam", 200);
    customers[3] = new Commercial("ShopMart", 150);

    int residentialCount = 0, commercialCount = 0;

    cout << "\n--- Customer Bills ---\n";
    for (int i = 0; i < SIZE; i++) {
        customers[i]->display();

        if (dynamic_cast<Residential*>(customers[i]))
            residentialCount++;
        else if (dynamic_cast<Commercial*>(customers[i]))
            commercialCount++;
    }

    cout << "\nTotal Residential Customers: " << residentialCount << endl;
    cout << "Total Commercial Customers: " << commercialCount << endl;

    for (int i = 0; i < SIZE; i++) {
        delete customers[i];
    }

    return 0;
}
