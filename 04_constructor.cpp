//special method involed automatically at time of object creation. Used for intialisation 
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display data
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // 4. Destructor
    ~Student() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2("Deevanshu", 19);
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}
