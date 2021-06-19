#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int length, breadth;

    //taking input
    cout<<"Enter the value of lenght and breadth = ";
    cin>>length>>breadth;

    //calculation
    int area = (length * breadth);

    //printing output
    cout<<"Area of a rectangle = "<<area;

    return 0;
}