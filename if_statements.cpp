#include <iostream>

using namespace std;
int grading(int scores);
int main()
{
    int mark;
    string name;

    cout<< "Enter the name of the student: ";
    getline(cin, name);

    cout << "Enter " << name << " marks: ";
    cin >> mark;

    cout << name << " is " << grading(mark);

    return 0;
}
int grading(int scores)
{
    if (scores > 100) {
        cout << "out of range" << endl;
    }
    else if (scores > 80) {
        cout << "graded A plain" << endl;
    }
    else if (scores > 50) {
        cout<< "graded B plain" << endl;
    }
    else if (scores > 30) {
        cout << "graded C plain" << endl;
    }
    else if (scores > 0) {
        cout << "graded 'FAIL'" << endl;
    }
    else {
        cout << "wrong input, try again" << endl;
    }

    return 0;

}
