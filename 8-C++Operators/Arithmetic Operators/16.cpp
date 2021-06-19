#include<iostream>
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
    float si = (principle * time * rate) / 100;

    //printing output
    cout<<"Simple interest = "<<si;

    return 0;
}