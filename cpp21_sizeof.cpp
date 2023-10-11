#include <iostream>
using namespace std;
int main() {
    int x = 5;
    double y = 10.5;
    char z = 'a';

    cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    cout << "Size of x: " << sizeof(x) << " bytes" << std::endl;
    cout << "Size of y: " << sizeof(y) << " bytes" << std::endl;
    cout << "Size of z: " << sizeof(z) << " byte" << std::endl;

    return 0;
}
