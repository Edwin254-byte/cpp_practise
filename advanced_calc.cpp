#include <iostream>

using namespace std;

int operation(char x, int y, int z);
int main()
{
    int num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << num1 << op << num2 << " = " << operation(op, num1, num2) << endl;


    return 0;
}
int operation(char x, int y, int z)
{
    if (x == '+') {
        return y+z;
    }
    else if (x == '-') {
        return y-z;
    }
    else if (x == '*') {
        return y*z;
    }
    else if (x == '/') {
        return y/z;
    }
    else if (x == '%') {
        return y%z;
    }
    else {
        cout << "wrong input" << endl;
    }

    return 1;

}
