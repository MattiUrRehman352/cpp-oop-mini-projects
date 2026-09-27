#include <iostream>
using namespace std;
class Rektha
{
public:
    string title;
    string poet;
    int numberOfPoems;
    Rektha(string t, string p, int n)
    {
        title = t;
        poet = p;
        numberOfPoems = n;
    }
    void display()
    {
        cout << "Poetry Collection: " << title << endl;
        cout << "Poet: " << poet << endl;
        cout << "Number of Poems: " << numberOfPoems << endl;
    }
};
int main()
{
    Rektha a("Kulliyat-e-Iqbal", "Allama Iqbal", 1000);
    Rektha g("Kulliyat-e-Ghalib", "Mirza Ghalib", 500);
    a.display();
    g.display();
    return 0;
}