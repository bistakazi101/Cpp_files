#include<iostream>
#include<conio.h>
using namespace std;
// class template
template <class T>
class myclass{
    public:
    T num1;
    T num2;

     myclass(T num1, T num2){
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};
int main()
{
    
    myclass  <int>obj(10, 20);
    myclass <float>obj1(10.5, 20.5);
    myclass<string>obj2("Hello", "World");
    
 return 0;
}