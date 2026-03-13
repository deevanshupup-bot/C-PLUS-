#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    //properties/attributes
    string name;
    string dept;
    string subjects;
    double salary;
    //methods
    void changeDept(string newDept){
    dept = newDept;
    } 

};

int main(){
    Teacher t1;
    t1.name = "Deevanshu";
    t1.subjects = "C++";
    t1.dept = "computer science";
    t1.salary = 25000;
    
    cout <<t1.name<<endl;
    cout <<t1.subjects<<endl;
    cout <<t1.dept<<endl;
    cout <<t1.salary<<endl;


    return 0;
}
