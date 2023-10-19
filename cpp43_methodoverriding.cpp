// method overriding
#include <iostream>
#include <conio.h>
using namespace std;
class a
{
public:
    void display()
    {
        cout << "this is a class A" << endl;
    }
};

class b : public a
{
public:
    void display() // this is method overriding
    {
        cout << "this is number b" <<endl;
    };
};
int main()
{
     b b1;
    b1.display();
    return 0;
}