#include<iostream>
using namespace std;

int main(){
    int n, counter=1;

    cout<<"Enter the maximum row value: "<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<2*n-row-2; col++){
            cout<<"*";
        }

        for(int col=0; col<2*row+1; col++){
            if(col%2 == 0){
                cout<<counter;
            }
            else{
                cout<<"*";
            }
        }

        for(int col=0; col<2*n-row-2; col++){
            cout<<"*";
        }

        counter += 1;
        cout<<endl;
    }
}