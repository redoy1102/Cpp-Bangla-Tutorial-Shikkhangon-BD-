#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //varibale declaration
    float principle, time, rate;

    //taking input
    cout<<"Enter the value of principle = ";
    cin>>principle;

    cout<<endl<<"Enter the value of time = ";
    cin>>time;

    cout<<endl<<"Enter the value of rate = ";
    cin>>rate;


    //calculation
    float ci = principle * pow(1 + rate/100,time);

    //printing output
    cout<<"Compound interest = "<<ci;

    return 0;
}