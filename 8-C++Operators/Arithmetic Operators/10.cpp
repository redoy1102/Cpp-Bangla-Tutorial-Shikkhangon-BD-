#include<iostream>
using namespace std;

int main(){
    //varibale declaration
    int days;

    //taking input
    cout<<"Enter your total days = ";
    cin>>days;

    //calculation
    int years = days / 265;
    int weeks = days / 7;

    //printing output
    cout<<endl<<"Years = "<<years<<endl;
    cout<<"Weeks = "<<weeks;

    return 0;
}