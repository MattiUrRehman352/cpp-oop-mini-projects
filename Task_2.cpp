#include <iostream>
using namespace std;
class teacher
{
public:
    string name;
    string subject;
    teacher(string n, string s)
    {
        name = n;
        subject = s;
    }
    void display()
    {
        cout << "teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    teacher t("Waqar", "OPPs");
    teacher t2("Sajjid","Cal II");
    t.display();
    t2.display();
    return 0;
}