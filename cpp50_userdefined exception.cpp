#include <iostream>
#include <conio.h>
using namespace std;
// user defined exception
class myexception : public exception
{
public:
    virtual const char *what() const throw()
    {
        return "My exception is called";
    }
};
int main()
{
    int a = 25;
    int b = 0;

    float k;
    try
    {
        if (b == 0)
        {
            myexception e;
            throw e;
        }
        /* code */
    }
    catch (const exception &e)
    {
        cout << "The exception is caught here " << e.what();
        
    }
    return 0;
}