#include<iostream>
using namespace std;

int main(){
    //variable declaration 
    double num1, num2, num3;

    //taking input
    cout<<"Input 3 numbers = ";
    cin>>num1>>num2>>num3;

    //calculation 
    double average = (num1 + num2 + num3) / 3;

    //printing output
    cout<<"Average of 3 numbers = "<<average;
}