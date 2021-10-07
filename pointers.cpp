#include <iostream>
//pointer variables are variables which stores the address of another variable
// a pointer generally is the memory address location of a variable.
using namespace std;

int main()
{
    int age = 23;
    int *pAge = &age; // parsing the address of age variable to pAge pointer variable

    cout << pAge << endl;// printing the address
    cout << *pAge << endl; // printing the value stored in the given address
    cout << &age << endl; // returns memory address of the variable age
    cout << *&age << endl; // returns the value stored in the age
    cout << &*&age << endl; // also returns the memory address of the given variable

    return 0;
}
