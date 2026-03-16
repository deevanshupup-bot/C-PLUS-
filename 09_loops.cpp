#include <iostream>
using namespace std;
// while
void Program1()
{
    cout << "The output of Program 1" << endl;
    int index = 0;
    while (index < 34)
    {
        cout << "We are at index number" << index << endl;
        index = index + 1;
    }
}
// do-while
void Program2()
{
    cout << "The output of Program 2" << endl;
    int index = 0;
    do
    {
        cout << "We are the index number" << index << endl;
        index = index + 1;
    } while (index < 33);
}
// for loop
void Program3()
{
    cout << "The output of Program 3" << endl;
    for (int i = 0; i < 34; i++)
    {
        cout << "The value os i is" << i << endl;
    }
}
int main()
{
    Program1();
    Program2();
    Program3();
    return 0;
}