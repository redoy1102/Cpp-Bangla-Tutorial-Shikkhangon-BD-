#include<iostream>
using namespace std;

int displayArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};

    displayArr(arr, 5);
}