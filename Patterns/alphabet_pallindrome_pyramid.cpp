#include<iostream>
using namespace std;

int main(){
    int n;
    char counter=65;

    cout<<"Enter number of Alphabets: "<<endl;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<2*row+1; col++){
            if(col<row){
                cout<<counter;
                counter+=1;
            }
            else{
                cout<<counter;
                counter-=1;
            }
        }
        counter=65;
        cout<<endl;
    }
}