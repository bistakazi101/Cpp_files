// operator overloading
#include<iostream>
#include<conio.h>
using namespace std;
class class1{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
  class1 operator+(class1 c)
  {
    class1 temp;
    temp.a= a+c.a;
    temp.b = b+c.b;
    return(temp);
  }

};
int main()
{
    class1 c1,c2,c3;
    c1.setdata(10,20);
    c1.showdata();
   
    c2.setdata(20,10);
     c2.showdata();
    c3=c1+c2;
    c3.showdata();
 return 0;
}