#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ---------------- Class Person ---------------- //
class Person {
protected:
    string name;
    int age;
public:
    Person() {}
    Person(string n, int a) : name(n), age(a) {}

    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age;
    }

    string getName() const { return name; }
};

// ---------------- Class Player (inherits Person) ---------------- //
class Player : public Person {
    int id;
    string mobile;
    vector<string> enrolledSports; // sports registered
public:
    Player() {}
    Player(int i, string n, int a, string m) : Person(n, a), id(i), mobile(m) {}

    void enrolSport(string sportName) {
        enrolledSports.push_back(sportName);
    }

    void display() const override {
        cout << "ID: " << id << ", ";
        Person::display();
        cout << ", Mobile: " << mobile << endl;
        cout << "Sports Enrolled: ";
        if(enrolledSports.empty()) {
            cout << "None";
        } else {
            for(const string &s : enrolledSports)
                cout << s << " ";
        }
        cout << endl;
    }

    string getPlayerName() const { return name; }
    int getId() const { return id; }
};

// ---------------- Class Sports ---------------- //
class Sports {
    string sport_name;
    float fees;
public:
    Sports() {}
    Sports(string n, float f) : sport_name(n), fees(f) {}

    void display() const {
        cout << "Sport: " << sport_name << ", Fees: " << fees << endl;
    }

    string getName() const { return sport_name; }
};

// ---------------- Main Program ---------------- //
int main() {
    vector<Player> players;
    vector<Sports> sportsList;

    int choice;
    do {
        cout << "\n--- Golden Star Sports Academy Menu ---\n";
        cout << "1. Add new player\n";
        cout << "2. Add new sport\n";
        cout << "3. Enrol player into sport\n";
        cout << "4. Display sports of a specific player\n";
        cout << "5. Display all players and their sports\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int id, age;
                string name, mobile;
                cout << "Enter Player ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Mobile: ";
                cin >> mobile;
                players.push_back(Player(id, name, age, mobile));
                break;
            }
            case 2: {
                string sportName;
                float fees;
                cin.ignore();
                cout << "Enter Sport Name: ";
                getline(cin, sportName);
                cout << "Enter Fees: ";
                cin >> fees;
                sportsList.push_back(Sports(sportName, fees));
                break;
            }
            case 3: {
                string pname, sname;
                cin.ignore();
                cout << "Enter Player Name: ";
                getline(cin, pname);
                cout << "Enter Sport Name: ";
                getline(cin, sname);

                bool foundPlayer = false, foundSport = false;
                for(const auto &s : sportsList) {
                    if(s.getName() == sname) { foundSport = true; break; }
                }
                if(!foundSport) {
                    cout << "Sport not found! Please add sport first.\n";
                    break;
                }

                for(auto &p : players) {
                    if(p.getPlayerName() == pname) {
                        p.enrolSport(sname);
                        foundPlayer = true;
                        cout << "Enrolled " << pname << " into " << sname << endl;
                        break;
                    }
                }
                if(!foundPlayer) cout << "Player not found!\n";
                break;
            }
            case 4: {
                string pname;
                cin.ignore();
                cout << "Enter Player Name: ";
                getline(cin, pname);
                bool found = false;
                for(const auto &p : players) {
                    if(p.getPlayerName() == pname) {
                        p.display();
                        found = true;
                        break;
                    }
                }
                if(!found) cout << "Player not found!\n";
                break;
            }
            case 5: {
                for(const auto &p : players) {
                    p.display();
                    cout << "------------------------------------\n";
                }
                break;
            }
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 6);

    return 0;
}
