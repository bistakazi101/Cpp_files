// method hiding
#include<iostream>
#include<conio.h>
using namespace std;
class a{
public:
    void display()
    {
        cout<<"this is a class A"<<endl;
    }
};
class b{
 public:
 void display(int a){  //this is method hiding 
        cout<<"this is class B number "<<a<<endl;
 }
};
int main()

{
    b b1;
b1.display(5);
 return 0;
}