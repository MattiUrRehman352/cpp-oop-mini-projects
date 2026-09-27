#include <iostream>
using namespace std;
class Teacher
{
private:
    string name;
    string subject;
public:
    void setName(string n)
    {
        name = n;
    }
    void setSubject(string s)
    {
        subject = s;
    }
    string getName()
    {
        return name;
    }
    string getSubject()
    {
        return subject;
    }
};
int main()
{
    Teacher t;
    Teacher t2;
    t.setName("Waqar");
    t.setSubject("OPPs");
    t2.setName("Sajjid");
    t2.setSubject("Cal II");
    cout << "teacher Name: " << t.getName() << endl;
    cout << "Subject: " << t.getSubject() << endl;
    cout << "teacher Name: " << t2.getName() << endl;
    cout << "Subject: " << t2.getSubject() << endl;
    return 0;
}