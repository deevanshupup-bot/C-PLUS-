#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    // constructor
    Employee(string n, int s, long long sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetail()
    {
        cout << "The name of our employee is " << this->name << " and his salary is " << this->salary << " $" << endl;
    }

    // getter
    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword << endl;
    }

private:
    long long secretPassword;
};

int main()
{
    Employee har("Harry Constructor", 344, 7719516842);

    har.printDetail();
    har.getSecretPassword();

    return 0;
}