#include <iostream>

using namespace std;

int main()
{
    int luckyNums[15] = {4, 8, 34, 52, 7, 23};
    int numGrid [4] [2] = {
                            {1,2},
                            {3,4},
                            {5,6},
                            {7,8}
                        };

    luckyNums[4] = 100; //assigning new values to the array

    for (int i=0; i<4; i++) {
        for (int x = 0; x < 2; x++) {
            cout << numGrid[i] [x]<<endl;
        }
    }
    cout << luckyNums[3]; // accessing the element in the index given in the brackets

    return 0;
}
