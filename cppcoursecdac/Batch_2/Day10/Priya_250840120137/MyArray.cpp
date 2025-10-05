#include <iostream>
using namespace std;

class MyArray {
private:
    int arr[5];

public:
    // Default constructor
    MyArray() {
        for (int i = 0; i < 5; i++)
            arr[i] = 0;
    }

    // Parameterized constructor
    MyArray(int a[5]) {
        for (int i = 0; i < 5; i++)
            arr[i] = a[i];
    }

    // Overload + operator 
    MyArray operator+(const MyArray& other) {
        MyArray temp;
        for (int i = 0; i < 5; i++)
            temp.arr[i] = this->arr[i] + other.arr[i];
        return temp;
    }

    // Overload - operator 
    MyArray operator-(const MyArray& other) {
        MyArray temp;
        for (int i = 0; i < 5; i++)
            temp.arr[i] = this->arr[i] - other.arr[i];
        return temp;
    }

    // Overload [] operator
    int operator[](int index) {
        if (index >= 0 && index < 5)
            return arr[index];
        else {
            cout << "Index out of bounds!" << endl;
            return -1;
        }
    }

    // Transpose 
    MyArray transpose() {
        MyArray temp;
        for (int i = 0; i < 5; i++)
            temp.arr[i] = arr[4 - i];
        return temp;
    }

    // Display function
    void display() {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// -------- Main Function --------
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {5, 4, 3, 2, 1};

    MyArray arr1(a), arr2(b);

    cout << "Array 1: ";
    arr1.display();

    cout << "Array 2: ";
    arr2.display();

    MyArray sum = arr1 + arr2;
    cout << "Sum: ";
    sum.display();

    MyArray diff = arr1 - arr2;
    cout << "Difference: ";
    diff.display();

    MyArray trans = arr1.transpose();
    cout << "Transpose (reverse of Array1): ";
    trans.display();

    cout << "Element at index 2 of Array1: " << arr1[2] << endl;

    return 0;
}
