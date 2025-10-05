#include <iostream>
using namespace std;
#include "PersonService.cpp"
// #include "Person.cpp"

// initialization of static memebrs
Person PersonService::parr[100];
int PersonService::count = 0;

int main()
{

   // menu driven program
   int choice;

   // do -while loop for menu
   do
   {

      // display menu
      cout << "1. Add person" << endl;
      cout << "2. Search by id" << endl;
      cout << "3. display all" << endl;
      cout << "4. Search by name" << endl;
      cout << "5. sort by id" << endl;
      cout << "6. sort by name" << endl;
      cout << "7. modify address by id" << endl;
      cout << "8. exit" << endl;
      cout << "choice: " << endl;

      //  take choice from user
      cin >> choice;

      //  switch case
      switch (choice)
      {
      case 1:
      {
         Person p = PersonService::acceptData();
         PersonService::addPerson(p);
         break;
      }

      case 2:
      {
         int id;
         cout << "Enter id for search: " << endl;
         cin >> id;
         
         Person *p1 = PersonService::searchById(id);
         if (p1)
         {
            p1->display();
         }
         else
         {
            cout << id << " not Found" << endl;
         }
         break;
      }

      case 3:
         PersonService::displayAll();
         break;

      case 4:
      {
         char name[20];
         cout << "Enter name for search: " << endl;
         cin >> name;
         // Person p1=PersonService::searchByName(name);
         if (!PersonService::searchByName(name))
         {
            cout << name << " not Found" << endl;
         }
         break;
      }
      case 5:
         PersonService::sortById();
         PersonService::displayAll();
         break;

      case 6:
         PersonService::sortByName();
         PersonService::displayAll();
         break;

      case 7:
         char addr[20];
         int id;
         cout << "Enter Id to modify address : " << endl;
         cin >> id;
         cout << "Enter new address : " << endl;
         cin >> addr;

         PersonService::modifyById(id, addr);

         PersonService::displayAll();
         break;
      case 8:
         cout << "Thank you for visiting." << endl;
         break;
      default:
         cout << "Wrong choice" << endl;
      }

   } while (choice != 8);
}
