#include <iostream>

using namespace std;

int main()
{
    char grade = 'A'; //single character data type
    string phrase = "Moi University";// collection of characters
    int age = 22; // whole number data type
    float rate = 1.5; //decimal number data type
    double amount = 15.2100; // decimal numbers that can have more decimal values than float
    bool isMale = true;
    const int any = 45;


    cout <<"data type of " << grade <<" is char" <<endl;
    cout <<"data type of " << phrase <<" is string " <<endl;
    cout <<"data type of " << age <<" is integer " <<endl;
    cout <<"data type of " << rate <<" is float" <<endl;
    cout <<"data type of " << amount <<" is double " <<endl;
    cout <<"data type of " << isMale <<" is boolean" <<endl;
    cout <<"data type of " << any <<" is constant integer" <<endl;

}
