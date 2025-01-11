#include<iostream>
using namespace std;

int main(){
    int n, counter=1;

    cout<<"Enter the size of Pyramid: "<<endl;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<n-row; col+=1){
            if(col==0 || col==n-row-1 || row==0){
                cout<<counter;
                counter+=1;
            }
            else{
                cout<<" ";
                counter+=1;
            }
        }
        counter=1;
        cout<<endl;
    }
}