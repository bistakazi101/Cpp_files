#include <iostream>
using namespace std;

class b; // Forward declaration of class b

class a {
    int x = 20;
    friend void display(a, b); // Declare the friend function
};

class b {
    int y = 30;
    friend void display(a, b); // Declare the friend function
};

void display(a a1, b b1) {
    cout << "value of x is " << a1.x << endl;
    cout << "value of y is " << b1.y << endl;
}

int main() {
    a a1;
    b b1;
    display(a1, b1);
    return 0;
}
