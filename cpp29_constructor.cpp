#include <iostream>
#include <conio.h>
using namespace std;
// paramerized constructor example

class emp
{
    public:
    emp()
    {
        cout << "constructor is called " << endl;
    }
    emp(int a, int b)
    {
        cout << "parameterized constructor of a is called " <<a<< endl;
        cout << "parametrized constructor  of b is called " << b << endl;
    }
};
int main()
{
    emp e1;
    emp e2(10, 20);
    return 0;
}