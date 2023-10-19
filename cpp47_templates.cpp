// templates in c+=
#include<iostream>
#include<conio.h>
using namespace std;
namespace myspace{
    int a;
    void fun();
    class A{
        public:
        void fun();
    };
}
void myspace::A::fun()
{
    cout<<"Calling the function inside the class A"<<endl;
}
void myspace::fun()
{
    cout<<"Calling the function inside the namespace myspace"<<endl;
}
/**
 * @brief This program demonstrates the usage of templates and namespaces in C++.
 * 
 * The program defines a namespace called myspace, which contains a variable 'a' and a function 'fun'.
 * It also defines a class 'A' inside the namespace, which has a member function 'fun'.
 * The main function calls the 'fun' function and accesses the 'a' variable from the namespace.
 * 
 * @return int 
 */
int main()
{
    myspace::fun();
     myspace::a = 10; // definition
    cout << "value of a is "<<myspace::a << endl; 
    myspace::A obj;
    obj.fun();
 return 0;
}