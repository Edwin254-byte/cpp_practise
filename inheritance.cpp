#include <iostream>
using namespace std;

class Chef // superclass
{

public:

    void makeSpecial()
    {
        cout << "The chef makes pilau\n";
    }
    void makeChapati()
    {
        cout << "The chef makes chapati\n";
    }
    void makeChicken()
    {
        cout << "The chef makes chicken\n";
    }
};

class CoastalChef : public Chef // inheriting all Chef class features. It's called subclass
{
//this chef can make all the food the normal chef was making therefore we can inherit them
public:
    void makeFish()
    {
        cout << "The chef makes fried fish";
    }

};

int main()
{
    Chef mpishi;
    mpishi.makeChapati();

    CoastalChef mamake;
    mamake.makeSpecial();
    mamake.makeFish();

    return 0;
}
