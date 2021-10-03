#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string n;
    cout<<"Enter your string = ";
    cin>>n;

    stringstream obj(n);    //object from the class stringstream

    //the object has the value of n and string it to integer number.
    int number = 0;
    obj >> number;

    cout<<"Value of number = "<<number;

    return 0;

}