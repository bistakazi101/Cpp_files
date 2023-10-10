#include<iostream>
#include<string>
using namespace std;
//using switch command
int main() {
    enum Fruit {
        apple,
        orange,
        mango
    };
    Fruit fruitChoice;
    string str;
    cout << "Enter the string to choose apple, mango, or orange: ";
    cin >> str;

    if (str == "apple") {
        fruitChoice = apple;
    } else if (str == "orange") {
        fruitChoice = orange;
    } else if (str == "mango") {
        fruitChoice = mango;
    } else {
        cout << "Invalid choice" << endl;
        
    }

    switch (fruitChoice) {
    case apple: 
        cout << "Apple selected" << endl;
        break;
    case orange:
        cout << "Orange selected" << endl;
        break;
    case mango:
        cout << "Mango selected" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        exit(1);
    }

    return 0;
}
