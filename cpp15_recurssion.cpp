#include <iostream>
using namespace std;

/**
 * Calculates the factorial of a given integer.
 * @param a The integer to calculate the factorial of.
 * @return The factorial of the given integer.
 */
int factorial(int a)
{
    if (a == 0)
        return 1;
    else
        return (a * factorial(a - 1));
}

int main()
{
    int a;
    int fact;
    cout << "Enter the number :";
    cin >> a;

    fact = factorial(a);
    cout << "factorial of a is " << fact << endl;
    return 0;
}