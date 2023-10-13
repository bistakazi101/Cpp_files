#include<iostream>
#include<conio.h>
using namespace std;
class emp{
    private:
    int a, b;
    public:
    void insert(int x, int y){
        this->a=x;
        this->b=y;
    }
    void display(){
        cout<<"a valie is :"<<this->a<<endl;
        cout<<"value of b is "<<this->b<<endl;

    }
};
int main()
{
    emp e1;
    e1.insert(10,20);
    e1.display();
 return 0;
}