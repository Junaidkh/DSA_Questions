#include<iostream>
using namespace std;

int main(){
    int n, counter=1;

    cout<<"Enter Pyramid Size: ";
    cin>>n;

    for(int row=0; row<n; row++){
        counter = row+1;
        for(int col=0; col<n; col++){
            if(col>=n-row-1){
                cout<<counter<<" ";
                counter++;
            }
            else{
                cout<<"  ";
            }
        }

        counter--;            
        for(int col=0; col<row; col++){

            counter--;            
            cout<<counter<<" ";
        }
        cout<<endl;
    }
}