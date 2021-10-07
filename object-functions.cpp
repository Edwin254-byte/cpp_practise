/* Object function/Instant function is a function defined inside a class and
different objects inside that class can use the function for
updating, modification, retrieval  of information etc.*/

#include <iostream>
using namespace std;

class Laptop
{
public:
    string make;
    int ram, display;

    //creating a constructor
    Laptop( string pMake, int pRam, int pDisplay)
    {
        make = pMake;
        ram = pRam;
        display = pDisplay;
    }

    //creating object  function
    bool IsFast()
    {
        if (ram >= 8)
            return true;
    return false;
    }

    //an object function
    bool isEfficient()
    {
        if (ram >=4 && display >= 14)
            return true;
        return false;
    }

};

int main()
{
    Laptop lap1("HP", 8, 14); // calling the constructor function
    Laptop lap2("Dell", 12, 22);
    Laptop lap3("HP", 4, 12);

    cout << lap1.isEfficient() <<endl;//calling the object function
    cout << lap2.IsFast() <<endl;
    cout << lap3.isEfficient() << lap3.IsFast() <<endl;

    return 0;
}

