#include<iostream>
using namespace std;


float area_of_circle(int r){
    float area;

    area = 3.14*r*r;
    return area;
}

int main(){
    int r;

    cout<<"Enter Radius of the Circle: ";
    cin>>r;

    cout<<area_of_circle(r);

    return 0;
}