#include <iostream>

using namespace std;

int greeting (string name);

int main ()
{
    string name;
    greeting(name);
    return 0;
}

int greeting(string name)
{
    cout << "enter your name: ";
    getline(cin, name);

    cout << "hello " << name << endl;
    // main(); // function recursion

    return 1;

}
