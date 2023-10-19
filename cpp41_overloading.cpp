// Function overloading
#include<iostream>
#include<conio.h>
using namespace std;
/**
 * @brief This program demonstrates function overloading in C++.
 * 
 * In this program, we have a class named class1 with two add functions.
 * The first add function takes two integer arguments and returns their sum.
 * The second add function takes three integer arguments and returns their sum.
 * 
 * @return int 
 */
class class1{
    public:
    void add(int a, int b)
    {
        cout<<"sum of two integer is: "<<a+b<<endl;
    }

    void add(int a,int b, int c ){
        cout<<"sum of three integer is: "<<a+b+c<<endl;
    }
};
int main()
{
  class1 c;
  c.add(10,20);
    c.add(10,20,30);
 return 0;
}