#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the pyramid size: "<<endl;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<n; col+=1){
            if(col==n-row-1 || row==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int col=0; col<row; col+=1){
            if(col==row-1 || row==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


}