#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
    ~Book(){
        cout<<"Thanks for Buying Book";
    }
};
int main()
{
    Book a("The Alchemist", "Paulo Coelho");
    Book b("Communist Manfestor", "Karl Marx");
    a.display();
    b.display();
    return 0;
}