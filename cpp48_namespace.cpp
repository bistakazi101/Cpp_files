#include<iostream>
#include<conio.h>
using namespace std;

namespace first{
    int add(int a,int b)
    {
        return a+b;
    }
}
using namespace first;
namespace second{
    float add(float a,float b)
    {
        return a+b;
    }
using namespace second;
}   
int main()
{
    cout<<"the value of first namespace  is "<<add(1,2)<<endl;
    cout<<"the value of second namespace  is "<<add(1.2f,2.3f);
 return 0;
}