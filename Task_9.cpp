#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
public:
    void setTitle(string t)
    {
        title = t;
    }
    void setAuthor(string a)
    {
        author = a;
    }
    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
};
int main()
{
    Book b1;
    Book b2;
    b1.setTitle("The Alchemist");
    b1.setAuthor("Paulo Coelho");
    b2.setTitle("Communist Manfesto");
    b2.setAuthor("Karl Marx");
    cout << "Book Title: " << b1.getTitle() << endl;
    cout << "Author: " << b1.getAuthor() << endl;
    cout << "Book Title: " << b2.getTitle() << endl;
    cout << "Author: " << b2.getAuthor() << endl;
    return 0;
}