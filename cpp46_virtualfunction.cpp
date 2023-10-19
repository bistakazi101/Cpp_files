#include <iostream>
#include <conio.h>
using namespace std;
// creating abstract class
class shape
{
    virtual void draw() = 0;
};
class circle : public shape
{
    public:
    void draw()
    {
        cout << "drawing circle"<<endl;
    }
};
class rectangle : public shape
{
    public:
    void draw()
    {
        {
            cout << "drawing rectangle"<<endl;
        }
    }
};
int main()
{
    rectangle r;
    r.draw();
    circle c;
    c.draw();
    return 0;
}