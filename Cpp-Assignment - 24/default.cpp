// Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;

int defaultFun(int, int, int = 0);

int defaultFun(int a, int b, int c)
{
    int sum = 0;
    return sum = a + b + c;
}

int main()
{
    int sum;
    sum = defaultFun(2, 3);
    cout << "Sum of two number is " << sum << endl;

    sum = defaultFun(2, 3, 6);
    cout << "Sum of three number is " << sum << endl;
    return 0;
}