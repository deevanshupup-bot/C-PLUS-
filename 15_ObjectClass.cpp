#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    void printDetail(){
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " $ " << endl;
    }
};
int main()
{
    Employee har;
    har.name = "harry";
    har.salary = 100;
    har.printDetail();
    cout << "The name of our first employee is " << har.name << " and his salary is " << har.salary << " $ " << endl;

    return 0;
}