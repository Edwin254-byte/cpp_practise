#include <iostream>

using namespace std;

int main()
{
    int rand[5];
    int index = 0;
    int x = 0;

  for (index = 0; index < 5; index++)
  {
      rand[index] = index;
  }

    while(x<5){
        cout << rand[x] << endl;
        x++;
    }
    do{
        cout << "do while loop" << endl;
    } while(x>6);

    return 0;
}
