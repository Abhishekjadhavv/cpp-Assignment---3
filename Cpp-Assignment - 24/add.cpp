// 10. Write functions using function overloading to add two numbers having different data
// types.

#include<iostream>
using namespace std;

int add(int,int);
float add(float,float);

int main(){
    
    cout<<"sum is "<<add(3,4)<<endl;
    cout<<"sum is "<<add(45.4f,56.4f)<<endl;
    return 0;
}

int add(int a,int b){
    return a+b;
}

float add(float a,float b){
    return a+b;
}