#include<iostream>
#include<conio.h>
// single inheritance
using namespace std;
class  parent{
    public:
    string name ="sagar";
    void display(){
        
        cout<<"This is a parent class"<<endl;
    
    }
};
class child:public parent{
    public :
    
    void display(){
        cout<<"This is a child class"<<endl;
    }
};
int main()
{
    parent p;
    p.display();
   cout<< p.name<<endl;
    child c;
    c.display();
 return 0;
}