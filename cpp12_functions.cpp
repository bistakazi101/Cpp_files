#include<iostream>
#include<conio.h>
using namespace std;
// creating classes
class class1
{
private:
    int a ;
public:
// takes something return something
    int function1(int a){
        cout<<"printing the function of :"<<a;
        return a;
    }
  
};

int main()
{
  class1 obj1;
  obj1.function1(55);
 return 0;
}