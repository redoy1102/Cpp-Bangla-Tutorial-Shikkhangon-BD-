#include<iostream>
using namespace std;
int main(){

    //declaring variable
    int num1;
    double num2;
    char word;
    string myName;

    //taking input
    cout<<"Enter an integer type number = ";
    cin>>num1;

    cout<<"\nEnter a double type number = ";
    cin>>num2;

    cout<<"\nEnter a character = ";
    cin>>word;

    cout<<"\nEnter your name = ";
    cin>>myName;

    //printing output
    cout<<"\nInteger type number = "<<num1<<endl;
    cout<<"Double type number = "<<num2<<endl;
    cout<<"Character type = "<<word<<endl;
    cout<<"String type = "<<myName;

    return 0;
}