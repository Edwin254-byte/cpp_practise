#include <iostream>
#include <cmath> //importing c maths function

using namespace std;

int main()
{
    cout << 5+2*13/1 << endl; //basic maths operation
    cout << 45/2 << endl; // integer division
    cout << 45/2.0 << endl; // decimal division
    cout << 45%2 << endl; // modulus division, returns the remainder
    //basic maths function
    cout << pow(4,2) << endl; //returns the 1st value raised to the 2nd parameter
    cout << sqrt(16) << endl;// returns square root
    cout << round(4.634523) << endl; //rounds the number to the nearest integer value
    cout << ceil(4.234) << endl; // returns integer value that is >= to the number
    cout << floor(3.923) << endl; // returns integer value that is <= to the given number
    cout << fmax(2, 45) << endl; // returns the largest number among the 2
    cout << fmin(3,-1) << endl; // returns the smallest number among them

    return 0;

}

