#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "student name: " << name << endl;
        cout << "student age: " << age << endl;
    }
    ~student(){
        cout<<"Thanks for using";
    }
};
int main()
{
    student s("Matti", 80);
    s.display();
    return 0;
}