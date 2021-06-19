#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //varibale declaration
    float num;

    //taking input
    cout<<"Enter any number = ";
    cin>>num;

    //calculation
    float result = sqrt(num); //using sqrt function

    //printing output
    cout<<endl<<"Sqrt of "<<num<<" = "<<result;

    return 0;
}