#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //varibale declaration
    double base, exponent;

    //taking input
    cout<<"Enter base and exponent = ";
    cin>>base>>exponent;

    //calculation
    int result = pow(base, exponent); //using power function. 

    //printing output
    cout<<base<<" ^ "<<exponent<<" = "<<result;

    return 0;
}