#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cin>>rows;
    cin>>columns;

    for(int row=0; row<rows; row++){
        for(int col=0; col<columns; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}