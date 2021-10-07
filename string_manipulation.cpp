#include <iostream>

using namespace std;

int main()
{
    //there are several means of displaying something to the console
    cout <<"HERE WE GO BOYS"; //returns the message inside double quote

    cout <<"Remember boys,";
    cout << "I'll be there before you notice"; //this two lines will be printed on the same line
    //to prevent codes to be printed on the same line we can use <<endl or \n;

    cout <<"\n\nHERE WE GO BOYS" << endl;
    cout <<"Remember boys,\n";
    cout << "I'll be there before you notice" << endl;
    //string functions
    string phrase = "UNIVERSITY SCHOOL";

    cout << phrase.length() << endl; //returns the number of characters in the given string
    cout << phrase[2] << endl; //returns character stored in the given index
    cout << phrase.find("SCHOOL", 0) << endl; //takes to arguments i.e. what to search and which index to begin the search from
    // FIND() returns the index value where the search argument begins
    cout << phrase.substr(11,4) << endl; //takes 2 arguments, starting index and number of characters to grab



    return 0;
}
