#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<endl<<endl;

    //addition
    cout<<"Addition of two numbers---"<<endl;
    int sum = num1 + num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<"= "<<sum<<endl;
    //subtraction
    cout<<"Subtraction of two numbers---"<<endl;
    int sub = num1 - num2;
    cout<<"sub of "<<num1<<" and "<<num2<<"= "<<sub<<endl;
    //multiplication
    cout<<"Multiplication of two numbers---"<<endl;
    int multi = num1 * num2;
    cout<<"multi of "<<num1<<" and "<<num2<<"= "<<multi<<endl;
    //division
    cout<<"Division of two numbers---"<<endl;
    int div = num1 / num2;
    cout<<"div of "<<num1<<" and "<<num2<<"= "<<div<<endl;
    //modulus
    cout<<"Modulus of two numbers---"<<endl;
    int mod = num1 % num2;
    cout<<"mod of "<<num1<<" and "<<num2<<"= "<<mod;

    return 0;
}