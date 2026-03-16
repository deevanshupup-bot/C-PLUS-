#include <iostream>
using namespace std;

class Animal
{ // Base class
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal
{ // Derived class
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

int main()
{

    Dog d1;

    d1.eat();  // parent class function
    d1.bark(); // child class function

    return 0;
}