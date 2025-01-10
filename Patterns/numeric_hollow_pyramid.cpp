#include<iostream>
using namespace std;

int main(){
    int n, counter = 1;

    cout<<"Enter the pyramid size: ";
    cin>>n; 

    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<"  ";
            
        }

        for(int col=0; col<2*row+1; col++){
            if(col%2 == 0){
                if(col == 0 || col == 2*row || row == n-1){
                    cout<<counter<<" ";
                }
                else{
                    cout<<"  ";
                }
                counter++;
            }

            else{
                cout<<"  ";
            }
        }
        counter = 1;
        cout<<endl;
    }
}