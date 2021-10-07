#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;
    // N/B: when getting a string from the user we use getline() function, other datatypes we use cin

    cout << "Enter your full name: ";
    getline(cin, name); //assigning the name string to the variable name

    cout << "Enter your age: ";
    cin >> age; // assigning the age

    cout << "HELLO " << name << ", you are " << age << " years old" << endl;

    return 0;
}
