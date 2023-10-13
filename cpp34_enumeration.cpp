#include <iostream>
#include <conio.h>
using namespace std;
// using enum keyword
enum shape {
    triangle = 1, // Assign 1 to triangle
    rectangle = 2 // Assign 2 to rectangle
};

int main() {
    int userChoice;
    cout << "Enter 1 for triangle and 2 for rectangle: ";
    cin >> userChoice;

    shape anything;

    // Convert the user's choice to the corresponding enumeration value
    if (userChoice == 1) {
        anything = triangle;
    } else if (userChoice == 2) {
        anything = rectangle;
    } else {
        cout << "Invalid choice." << endl;
       exit(1);
    }

    switch (anything) {
        case triangle:
            cout << "You have selected triangle" << endl;
            break;
        case rectangle:
            cout << "You have selected rectangle" << endl;
            break;
        default:
            cout << "You have selected nothing" << endl;
            break;
    }

    return 0;
}
