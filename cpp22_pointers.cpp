#include <iostream>
#include <conio.h>
// creating array of pointers
using namespace std;
int main()
{
    int p1[5] = {1, 2, 3, 4, 5};
    int *p2[5];
    int i;
    for (i = 0; i <= 4; i++)
    {
        p2[i] = &p1[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        {
            cout << *p2[i] << endl;
        }
    }
    return 0;
}