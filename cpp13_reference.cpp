#include <iostream>
#include <conio.h>
using namespace std;
// swapping using reference
void function1(int *p, int *q); // function declaration

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping: a=" << a << " b=" << b << endl;
    function1(&a, &b);
    cout << "After swapping: a=" << a << " b=" << b << endl;
    getch();

    return 0;
}

void function1(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}