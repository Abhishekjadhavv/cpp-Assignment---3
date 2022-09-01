// 2. Define a function to find the highest value digit in a given number.

#include <iostream>
using namespace std;

int highestDigit(int n);

int highestDigit(int n)
{
    int max = 0;

    while (n)
    {
        int digit = n % 10;
        max = digit > max ? digit : max;
        n /= 10;
    }

    return max;
}

int main()
{
    int n, highNum;
    cout << "Enter a number";
    cin >> n;
    highNum = highestDigit(n);
    cout << "Highest Digit of given number is " << highNum << endl;
    return 0;
}