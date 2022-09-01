// Define a function to swap data of two int variables using call by reference

#include <iostream>
using namespace std;

void swapNum(int &, int &);

void swapNum(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two number" << endl;
    cin >> a >> b;
    cout << "a = " << a << "  b = " << b << endl;
    swapNum(a, b);
    cout << "a = " << a << "  b = " << b << endl;
    return 0;
}