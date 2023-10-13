#include <iostream>
using namespace std;

/**
 * @brief The student class represents a student with a roll number and class name.
 * 
 */
class student{
    int  roll;
    string class_name;
public:
    /**
     * @brief Set the data of the student object.
     * 
     * @param a The class name of the student.
     * @param b The roll number of the student.
     */
    void getdata(string a, int b){
        class_name = a;
        roll = b;
    }
    /**
     * @brief Display the data of the student object.
     * 
     * @param s The student object to display.
     */
    friend void display(student s);
};

void display(student a){
    cout << "Class: " << a.class_name << endl;
    cout << "Roll: " << a.roll << endl;
}

int main()
{
    student s1;
    s1.getdata("Class 10", 20);
    display(s1);
    return 0;
}