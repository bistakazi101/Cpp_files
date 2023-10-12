#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int& ref = num; // declaring a reference variable

    cout << "Value of num: " << num << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 20; // changing the value of num using ref

    cout << "Value of num: " << num << endl;
    cout << "Value of ref: " << ref << endl;

    return 0;
}
