#include<iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }
    Employee(const Employee &e)
    {
        name = e.name;
        salary = e.salary;
    }
    void show()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e1("Matti", 50000);
    Employee e2(e1);
    e1.show();
    e2.show();
    return 0;
}