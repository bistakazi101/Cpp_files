// virtual function
#include<iostream>
#include<conio.h>
using namespace std;
class A{
public :
virtual void fun(){   // virtual function
    cout<<"hello class A";
}
};
class B:public A{
void fun(){
    cout<<"hello class B";
}
};
int main()
{
    A *ptr;
    B obj;
    ptr=&obj;
    ptr->fun();//vitual function call
 return 0;
}