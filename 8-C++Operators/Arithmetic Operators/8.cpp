#include<iostream>
using namespace std;

int main(){
    //varibale declaration
    float celsius;

    //taking input
    cout<<"Enter the value of celsius = ";
    cin>>celsius;

    //calculation
    float fahrenhite = celsius * 9/5 + 32;

    //printing output
    cout<<endl<<"Fahrenhite = "<<fahrenhite;

    return 0;
}