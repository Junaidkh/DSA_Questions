#include<iostream>
using namespace std;

int main(){
    int n, counter=1;

    cout<<"Enter Pyramid size: "<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col < n-row-1){
                cout<<" ";
            }
            else{
                cout<<counter;
                counter+=1;
            }
        }

        counter -= 1;

        for(int col=0; col<row; col++){
            counter-=1;
            cout<<counter;
            
        }
        counter = 1;
        cout<<endl;
    }
}