#include "Address.h"
#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;


int main(){
     Address addr("Tameshwarnath", "Gorakhapur", "Uttar Pradesh",21);
     Address addr1("Rasulabad", "Kanpur", "Uttar Pradesh",22);
     Person p("Priya", addr);
     Person p1("Satyam", addr1);
     p.display();
     p1.display();
    return 0;
}