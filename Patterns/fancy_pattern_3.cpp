#include<iostream>
using namespace std;

int main(){
    int n, counter=0;

    cout<<"Enter the number of half rows for half diamond: "<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<2*row+1; col++){
            if(col==0 || col == 2*row){
                cout<<"*";
            }
            else{
                if(col <= row){
                    counter++;
                    cout<<counter;
                }
                else{
                    counter--;
                    cout<<counter;
                }
            }
        }
        counter = 0;
        cout<<endl;
    }

    counter = 1;
    for(int row=0; row<n-1; row++){
        for(int col=0; col<2*(n-1)-2*row-1; col++){
            if(col==0 || col == 2*(n-1)-2*row-2){
                cout<<"*";
            }
            else{
                if(col<(n-1)-row-1){
                    cout<<counter;
                    counter++;
                }
                else{
                    cout<<counter;
                    counter--;
                }
            }
        }

        counter = 1;
        cout<<endl;
    }


}