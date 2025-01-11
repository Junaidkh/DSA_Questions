#include<iostream>
using namespace std;

string prime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return "Number is not Prime";
        }
    }
    return "Number is Prime";
}

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<prime(n);

    return 0;
}