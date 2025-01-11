#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter inverted pyramid size: "<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col < row){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}