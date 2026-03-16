// Welcome To array Chapter
#include <iostream>
using namespace std;
void Program1()
{
    int arr[3] = {1, 2, 6};
    // array index     0, 1, 2
    cout << arr[2]<<endl;
}
void Program2()
{
    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    }
}
int main()
{
    Program1();
    Program2();

    return 0;
}