#include<iostream>
using namespace std;

int sum(int arr[], int size){
    int add = 0;

    for(int i = 0; i < size; i++){
        add += arr[i];
    }
    cout<<"Total price = "<<add;
}

int main(){
    int arr[5];
    cout<<"Enter your 5 product price = ";
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    sum(arr, 5);

    return 0;
}