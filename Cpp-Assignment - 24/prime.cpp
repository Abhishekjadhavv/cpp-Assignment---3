// 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
using namespace std;

void checkPrime(int);

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    checkPrime(n);
    return 0;
}

void checkPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            break;
        }
    }

    if (n == i)
        cout << "Prime number" << endl;
    else
        cout << "Not Prime number" << endl;
}