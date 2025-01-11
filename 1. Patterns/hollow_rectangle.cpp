#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>rows>>columns;

    for(int row=0; row<rows; row++){
        for(int col=0; col<columns; col++){
            if(row==0 || row == rows-1){
                cout<<"* ";
            }
            else{
                if(col==0 || col==columns-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}