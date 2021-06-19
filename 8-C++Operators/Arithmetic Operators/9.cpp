#include<iostream>
using namespace std;

int main(){
    //varibale declaration
    float fahrenhite;

    //taking input
    cout<<"Enter the value of celsius = ";
    cin>>fahrenhite;

    //calculation
    float celsius = (fahrenhite - 32) * 5/9;

    //printing output
    cout<<endl<<"Celsius = "<<celsius;

    return 0;
}