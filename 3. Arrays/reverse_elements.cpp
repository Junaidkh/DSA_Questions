#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr {10,20,30,40,50,60,70,80};
    int temp = 0, start = 0, end = 7;

    cout<<"Insert elements in the array: "<<endl;
    for(int i=0; i<4; i++){
        temp = arr[i];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}