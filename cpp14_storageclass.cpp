#include <iostream>
#include <conio.h>
using namespace std;
int a = 100;
// static storage class
// static variable is initialized only once
void static_function()
{
    static int a = 10;
    a++;
    cout << "value of a is " << a << endl;
}
/**
 * @brief This program demonstrates the usage of different storage classes in C++.
 * 
 * The program defines two variables with different storage classes: 'a' with external storage class and 'b' with register storage class.
 * The 'extern' keyword is used to access the variable 'a' declared in the global scope.
 * The 'register' keyword is used to define local variable 'b' that should be stored in a register instead of RAM.
 * The program also calls a function with static storage class multiple times to demonstrate its behavior.
 * 
 * @return int 
 */
int main()
{
    // external storage`class
    // extern keyword uses the variable declared in the global scope
    extern int a;
    cout << "value of a is " << a << endl;

    static_function();
    static_function();
    static_function();
// Registar storage class
// register keyword is used to define local variables that should be stored in a register instead of RAM
register int b = 10;
cout << "value of b is " << b << endl;
    return 0;
}

