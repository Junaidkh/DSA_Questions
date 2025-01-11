#include<iostream>
using namespace std;


void prime_numbers(int start, int end){

    int counter = 0;

    for(int i=start; i<=end; i++){
        counter = 0;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                counter = 1;
                break;
            }
        }
        if(counter == 0){
            cout<<i<<endl;
        }
    }

}


int main(){

    int start, end;

    cout<<"Enter the range of the prime number: "<<endl;
    cin>>start>>end;

    cout<<"Prime Numbers are: "<<endl;
    prime_numbers(start, end);

    return 0;
}