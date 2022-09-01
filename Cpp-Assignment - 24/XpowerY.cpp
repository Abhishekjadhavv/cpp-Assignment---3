// Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;

int power(int, int);

int power(int x,int y)
{
    int p = 1;

    while (y)
    {
        p *= x;
        y--;
    }

    return p;
}

int main()
{
    int x, y, powr;
    cout<<"Enter X and Y"<<endl;
    cin>>x>>y;

    powr = power(x, y);
    cout << "X raised to the power Y is " << powr << endl;
    return 0;
}