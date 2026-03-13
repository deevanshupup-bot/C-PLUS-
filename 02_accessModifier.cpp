#include<iostream>
using namespace std;

class Student {
private:
    int marks;   // private variable

public:
    string name;

    // Setter function
    void setMarks(int m) {
        marks = m;
    }

    // Getter function
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;

    s1.name = "Deevanshu";
    s1.setMarks(95);   // setter se value set

    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.getMarks() << endl;  // getter se value get

    return 0;
}