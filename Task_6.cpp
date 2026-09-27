#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;
public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Student s;
    s.setName("Matti");
    s.setAge(80);
    cout << "student name: " << s.getName() << endl;
    cout << "student age: " << s.getAge() << endl;
    return 0;
}