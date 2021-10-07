//A program reading 5 unique numbers and storing in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5], x =0, num;
   while (x < 5)
   {
       cout << "Enter a number:\n";
       cin >> num;
       int cnt= 0;

       for (; cnt < x ; cnt++)
       {
           if (num == arr[cnt]) // checking if the array already contains the entered number
           {
               break;
           }
        }

        if (x == cnt) // adding a unique element in the array
        {
            arr[x] = num;
            x++;
        }
    }

    cout << "\nYour unique number array\n"; // displaying the array
    for(int j=0; j<5;j++)
    {

        cout << arr[j] <<endl;
    }

    return 0;
}

