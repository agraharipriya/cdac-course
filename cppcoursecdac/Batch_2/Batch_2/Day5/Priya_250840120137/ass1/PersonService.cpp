#include <iostream>
#include <cstring>
using namespace std;
#include "Person.cpp"
class PersonService
{

    // static members
    static Person parr[100];
    static int count;

public:
    // static methods------------->

    // static method to accept data from user
    static Person acceptData()
    {
        int id, age;
        char name[100], addr[100];
        cout << "Enter id: " << endl;
        cin >> id;
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter address: " << endl;
        cin >> addr;
        cout << "Enter age: " << endl;
        cin >> age;
        return Person(id, name, addr, age);
    }

    // static method to add person in array
    static void addPerson(Person &p)
    {
        if (count < 100)
        {
            parr[count] = p;
            cout << "Person added at " << count << "position " << endl;
            count++;
        }
        else
        {
            cout << "List is full";
        }
    }

    //   static method to search by id
    static Person *searchById(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (parr[i].getId() == id)
            {
                return &parr[i];
            }
        }
        return nullptr;
    }

    // static method to display all persons
    static void displayAll()
    {
        if (count != 0)
        {
            for (int i = 0; i < count; i++)
            {
                cout << "person " << i + 1 << ":";
                parr[i].display();
            }
        }
        else
        {
            cout << "List is empty" << endl;
        }
    }

    //
    static bool searchByName(char *name)
    {
        for (int i = 0; i < count; i++)
        {
            if (strcmp(parr[i].getName(), name) == 0)
            {
                parr[i].display();
                return true;
            }
        }
        return false;
    }

    //   static method to sort by id
    static void sortById()
    {
        if (count <= 1)
        {
            return;
        }
        for (int i = 0; i < count - 1; ++i)
        {
            int minidx = i;

            for (int j = i + 1; j < count; ++j)
            {
                if (parr[j].getId() < parr[minidx].getId())
                {
                    minidx = j;
                }
            }
            if (minidx != i)
            {
                Person temp = parr[i];
                parr[i] = parr[minidx];
                parr[minidx] = temp;
            }
        }
        cout << "List sorted by ID." << endl;
    }

    //  static method to sort by name
    #include <cstring>   // add this at top for strcmp

    static void sortByName() {
        if (count <= 1) return;

        for (int i = 0; i < count - 1; i++) {
            int minidx = i;
            for (int j = i + 1; j < count; j++) {
                // compare strings lexicographically
                if (strcmp(parr[j].getName(), parr[minidx].getName()) < 0) {
                    minidx = j;
                }
            }
            if (minidx != i) {
                Person temp = parr[i];
                parr[i] = parr[minidx];
                parr[minidx] = temp;
            }
        }
        cout << "List sorted by name." << endl;
}


    // static method to modify address by id
    static void modifyById(int id, char *addr)
    {
        for (int i = 0; i < count; i++)
        {
            if (parr[i].getId() == id)
            {
                parr[i].setAddr(addr);
                return;
            }
        }
    }
};
