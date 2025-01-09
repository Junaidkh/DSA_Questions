#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter diamond size: "<<endl;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<n; col+=1){
            if(col < n-row-1){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    for(int row=0; row<n; row+=1){
        for(int col=0; col<n; col+=1){
            if(col >= row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}