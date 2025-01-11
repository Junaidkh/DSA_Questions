#include<iostream>
using namespace std;


string even_odd(int n){
    if(n%2 == 0){
        return "Even";
    }
    else{
        return "Odd";
    }
}


int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<even_odd(n);

    return 0;
}