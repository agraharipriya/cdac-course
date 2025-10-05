#include <iostream>
#include <string>
using namespace std;

class Mobile
{
    int mobile_id;
    string mob_name;
    float price;
    int quantity;

public:
    Mobile()
    {
        mobile_id = 0;
        mob_name = "na";
        price = 0.0;
        quantity = 0;
    }
    Mobile(int id, string name, float p, int q)
    {
        mobile_id = id;
        mob_name = name;
        price = p;
        quantity = q;
    }

    void setData(int id, string name, float p, int q)
    {
        mobile_id = id;
        mob_name = name;
        price = p;
        quantity = q;
    }

    int getMobileId() const { return mobile_id; }
    string getMobileName() const { return mob_name; }
    int quantityAvailable() const { return quantity; }
    float getPrice() const { return price; }

    void display() const
    {
        cout << "Mobile ID   : " << mobile_id << endl;
        cout << "Mobile Name : " << mob_name << endl;
        cout << "Price       : " << price << endl;
        cout << "Quantity    : " << quantity << endl;
    }
};

//Fixed sumOfDigits function
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    
    Mobile mob[10];
    int n = 0; // count of mobiles entered

    int choice;
    do
    {
        cout << "\n=== MENU ===" << endl;
        cout << "2. Search and delete mobile by ID" << endl;
        cout << "3. Calculate sum of digits of elements divisible by 7" << endl;
        cout << "1. Accept and display mobile details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int searchId;
            cout << "Enter mobile ID to search: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (mob[i].getMobileId() == searchId)
                {
                    found = true;
                    cout << "Mobile found:" << endl;
                    mob[i].display();
                    cout << "Do you want to delete? (y/n): ";
                    char ch;
                    cin >> ch;
                    if (ch == 'y' || ch == 'Y')
                    {
                        mob[i].setData(0, "na", 0.0, 0);
                        cout << "Mobile deleted successfully." << endl;
                    }
                    else
                    {
                        cout << "Mobile not deleted." << endl;
                    }
                    break;
                }
            }
            if (!found)
                cout << "Mobile ID not found." << endl;
            break;
        }
        case 2:
        {
            int arr[10];
            cout << "Enter 10 elements: " << endl;
            for (int i = 0; i < 10; i++)
            {
                cin >> arr[i];
            }
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] % 7 == 0)
                {
                    cout << "Element " << arr[i]
                         << " is divisible by 7. Sum of digits = "
                         << sumOfDigits(arr[i]) << endl;
                }
                else
                {
                    cout << "Element " << arr[i] << " is not divisible by 7." << endl;
                }
            }
            break;
        }
        case 3:
        {
            cout << "How many mobile details you want to enter (max 10): ";
            cin >> n;
            if (n > 10)
                n = 10;

            for (int i = 0; i < n; i++)
            {
                int id, q;
                string name;
                float p;
                cout << "\nEnter details of mobile " << (i + 1) << ":\n";
                cout << "Enter mobile id: ";
                cin >> id;
                cout << "Enter mobile name: ";
                cin >> name;
                cout << "Enter price: ";
                cin >> p;
                cout << "Enter quantity: ";
                cin >> q;
                mob[i].setData(id, name, p, q);
            }

            cout << "\n--- All Mobile Details ---\n";
            for (int i = 0; i < n; i++)
            {
                mob[i].display();
                cout << "---------------------------\n";
            }
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
