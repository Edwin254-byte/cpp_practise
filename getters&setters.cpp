#include <iostream>
using namespace std;
class School
{

private:
    string level;
public:
    string name;
    int population;

    School(string pName, string pLevel, int pPopulation)
    {
        name = pName;
        setLevel(pLevel);
        population = pPopulation;
    }
    void setLevel(string pLevel)
    {
        if(pLevel == "County" || pLevel == "Regional" || pLevel == "National" || pLevel == "International")
           level = pLevel;
        else
            level = "Unknown";

    }
    string getLevel()
    {
        return level;
    }
};

int main()
{
    School mySchool("Brain", "International", 5000);
    //mySchool.setLevel("International"); overwrites the level value entered in the function class

    cout << mySchool.getLevel();
    return 0;
}
