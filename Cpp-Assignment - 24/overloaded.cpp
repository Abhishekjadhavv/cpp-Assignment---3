// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle

#include<iostream>
using namespace std;

int area(int);
int area(int,int);
float area(float,float);

int main(){
    int area_circel,area_rect,area_trin;
    area_circel = area(5);
    area_rect = area(5,7);
    area_trin = area(5,3);
    cout<<"Area of circle is "<<area_circel<<endl;
    cout<<"Area of rectangle is "<<area_rect<<endl;
    cout<<"Area of triangle is "<<area_trin<<endl;
    return 0;
}

int area(int r){
 return 3.14 * (r*r);
}

int area(int l,int w){
 return l*w;
}

float area(float b,float h){
 return(b*h)/2;
}