#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// ========================
// Custom Exception
// ========================
class OutOfStockException : public runtime_error {
public:
    OutOfStockException(const string& msg) 
        : runtime_error(msg) {}
    const char* what() const noexcept override {
        return runtime_error::what();
    }
};

// ========================
// Book Class
// ========================
class Book {
private:
    int bookId;
    string title;
    int quantity;

public:
    Book() : bookId(0), title("unknown"), quantity(0) {}
    Book(int bookId, string title, int quantity) 
        : bookId(bookId), title(title), quantity(quantity) {}

    void AddBook() {
        cout << "Enter book details to add it to library.\n";

        cout << "Enter book id: ";
        cin >> bookId;
        cin.ignore(); 

        cout << "Enter book title: ";
        getline(cin, title);

        do {
            cout << "Enter a positive integer as quantity: ";
            cin >> quantity;
            if (quantity <= 0) {
                cout << "Quantity must be greater than zero. Try again.\n";
            }
        } while (quantity <= 0);

        cout << "Book added successfully!\n";
    }

    int BorrowBook() {
        if (quantity < 1) {
            throw OutOfStockException("Book out of stock");
        }
        quantity--;
        return quantity;
    }

    void DisplayBook() const {
        if (bookId != 0) { // only show valid books
            cout << "\nBook ID: " << bookId
                 << "\nTitle: " << title
                 << "\nQuantity: " << quantity << "\n";
        }
    }

    // Getters
    int getBookId() const { return bookId; }
    int getQuantity() const { return quantity; }
};

// ========================
// Main Program
// ========================
int main() {
    cout << "===== Library Management System =====\n";

    Book bookArr[50]; 
    int ctr = 0;     
    int ch;

    do {
        cout << "\nEnter your choice:\n";
        cout << "1. Add book\n";
        cout << "2. Borrow book\n";
        cout << "3. Display books\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch (ch) {
        case 1: {
            cout << "How many books do you want to enter? ";
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                if (ctr < 50) {
                    bookArr[ctr].AddBook();
                    ctr++;
                } else {
                    cout << "Library is full! Cannot add more books.\n";
                    break;
                }
            }
            break;
        }

        case 2: {
            cout << "Enter book id you want to borrow: ";
            int id;
            cin >> id;
            bool found = false;

            for (int i = 0; i < ctr; i++) {
                if (bookArr[i].getBookId() == id) {
                    found = true;
                    try {
                        bookArr[i].BorrowBook();
                        cout << "Book borrowed successfully!\n";
                    }
                    catch (const OutOfStockException& e) {
                        cout << e.what() << endl;
                    }
                    break;
                }
            }
            if (!found) {
                cout << "Book not found!\n";
            }
            break;
        }

        case 3: {
            cout << "\nAvailable books in library:\n";
            for (int i = 0; i < ctr; i++) {
                bookArr[i].DisplayBook();
            }
            if (ctr == 0) {
                cout << "No books available.\n";
            }
            break;
        }

        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (ch != 4);

    return 0;
}
