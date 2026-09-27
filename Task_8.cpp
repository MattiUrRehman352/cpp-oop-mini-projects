#include <iostream>
using namespace std;
class Rektha
{
private:
    string title;
    string poet;
    int numberOfPoems;
public:
    void setTitle(string t)
    {
        title = t;
    }
    void setPoet(string p)
    {
        poet = p;
    }
    void setNumberOfPoems(int n)
    {
        numberOfPoems = n;
    }
    string getTitle()
    {
        return title;
    }
    string getPoet()
    {
        return poet;
    }
    int getNumberOfPoems()
    {
        return numberOfPoems;
    }
};
int main()
{
    Rektha p1;
    Rektha p2;
    p1.setTitle("Kulliyat-e-Iqbal");
    p1.setPoet("Allama Iqbal");
    p1.setNumberOfPoems(1000);
    p2.setTitle("Kulliyat-e-Ghalib");
    p2.setPoet("Mirza Ghalib");
    p2.setNumberOfPoems(500);
    cout << "Poetry Collection: " << p1.getTitle() << endl;
    cout << "Poet: " << p1.getPoet() << endl;
    cout << "Number of Poems: " << p1.getNumberOfPoems() << endl;
    cout << "Poetry Collection: " << p2.getTitle() << endl;
    cout << "Poet: " << p2.getPoet() << endl;
    cout << "Number of Poems: " << p2.getNumberOfPoems() << endl;
    return 0;
}