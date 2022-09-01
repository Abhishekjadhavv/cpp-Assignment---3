// Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.

#include<iostream>
using namespace std;

int max(int,int);
float max(float,float);

int main(){
    int max_num1;
    float max_num2;
    max_num1 = max(9,6);
    max_num2 = max(15.4f,45.2f);
    cout<<"Max number is "<<max_num1<<endl;
    cout<<"Max number is "<<max_num2<<endl;
    return 0;
}

int max(int a,int b){
    return a>b?a:b;
}

float max(float a,float b){
    return a>b?a:b;
}