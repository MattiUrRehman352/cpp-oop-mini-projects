#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    void setName(string n)
    {
        name = n;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    string getName()
    {
        return name;
    }
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    Employee e;
    e.setName("Matti");
    e.setSalary(50000);
    cout << "Employee Name: " << e.getName() << endl;
    cout << "Salary: " << e.getSalary() << endl;
    return 0;
}