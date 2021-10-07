//a class is the template/blueprint/specification of a data type
//an object is an actual instance of a class
#include <iostream>
using namespace std;

//creating the blueprint of a book
class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1; //creating a book object called book1

    book1.title = "Rich Dad Poor Dad";
    book1.author = "Robert";
    book1.pages = 720;

    Book book2;

    book2.title = "Think and Grow Rich";
    book2.author = "Napoleon Hill";
    book2.pages = 45;
    cout << book1.title <<endl;
    cout << book2.author << endl;
    return 0;
}
