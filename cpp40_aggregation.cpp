#include<iostream>
#include<conio.h>
using namespace std;
// aggregation is a special form of association
class Address
{
public:
    string addressLine, city, state;
    Address(string addressLine, string city, string state)
    {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};
class Employee
{   
public:
    int id;
    string name;
    Address* address; // Employee HAS-A Address   
    Employee(int id, string name, Address* address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }
    void display()
    {
        cout << id << " " << name << " " << address->addressLine << " " << address->city << " " << address->state << endl;
    }
};
int main()
{
    Address a1=Address("Nepal", "kathmanduu", "Bagmati");
    Employee e1=Employee(101, "sagar", &a1);
    e1.display();

 return 0;
}