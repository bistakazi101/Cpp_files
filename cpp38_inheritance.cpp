#include<iostream>
#include<conio.h>
using namespace std;
class level1{
    public:
    void parent(){
        cout<<"This is level 1"<<endl;
    }
};
class level2: public level1{
    public:
    void child(){
        {
            cout<<"This is level 2"<<endl;
        }
}
};
class level3: public level2{
    public:
    void grandchild(){
        cout<<"This is level 3"<<endl;
    }
};

int main()
{
    level3 obj1;
    obj1.child();
    obj1.parent();
 return 0;
}