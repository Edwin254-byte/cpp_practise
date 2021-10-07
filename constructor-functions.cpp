//special function that is called whenever we create a new object. It is defined in the class block
#include <iostream>

using namespace std;

class Student
{
public:

    string name, course, adm_no;
    int age;
    Student(string aName, string aCourse, string aAdm_No, int aAge)
    {
        name = aName;
        course = aCourse;
        adm_no = aAdm_No;
        age = aAge;
    }
    Student()
    {
        name = "no name";
        course = "not given";
        adm_no = "unknown";
        age = 0;
    }
    //this constructor with no parameters acts as an error handler whenever the user fails to enter the object details

};

int main()
{
    Student std1("Peter", "Computer Science", "COM/1234/10", 18);
    Student std2("Bill", "Education Arts", "EA/2342/21", 20);
    //creating an object and its attribute using function constructor

    Student std3; // the constructor with no attribute will be called
    cout << std1.name <<"\t" << std1.course << "\t" << std1.adm_no << "\t" << std1.age <<endl;
    cout << std2.name << "\t" << std2.course << "\t" << std2.adm_no << "\t" << std2.age <<endl;
    cout << std3.name; // uses the error handler function constructor
    return 0;
}
