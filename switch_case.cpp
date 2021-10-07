#include <iostream>

using namespace std;

void dayOfTheWeek(int);
int main()
{
    int val;

    cout << "Enter the day of the week value: ";
    cin >> val;

    dayOfTheWeek(val);

    return 0;
}

void dayOfTheWeek(int x)
{
    switch(x)
    {
    case 1:
        cout << x << " : SUNDAY" << endl;
        break;
    case 2:
        cout << x << " : MONDAY" << endl;
        break;
    case 3:
        cout << x << " : TUESDAY" << endl;
        break;
    case 4:
        cout << x << " : WEDNESDAY" << endl;
        break;
    case 5:
        cout << x << " : THURSDAY" << endl;
        break;
    case 6:
        cout << x << " : FRIDAY" << endl;
        break;
    case 7:
        cout << x << " : SATURDAY" << endl;
        break;
    default:
        cout << "wrong value input, try again";
    }

}
