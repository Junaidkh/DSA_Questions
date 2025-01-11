#include<iostream>
using namespace std;

int main(){
    int n, counter=1;

    cout<<"Enter the size of Pyramid: "<<endl;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<row+1; col+=1){
            if(col==0 || col==row || row==n-1){
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