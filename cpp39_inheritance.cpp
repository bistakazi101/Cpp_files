#include<iostream>
using namespace std;
// protected class members are accessible in the child class    
class parent {
public:
    int b = 10;
    int c = 20;

    void display() {
        cout << "This is level 1" << endl;
    }
};

class child : protected parent {
public:
    void displayChild() {
        // Access the protected members of the parent class
        cout << "b (from parent) = " << b << endl;
        cout << "c (from parent) = " << c << endl;
    }
};

int main() {
    child c;
    c.displayChild(); // Call the member function to access parent's protected members

    return 0;
}
