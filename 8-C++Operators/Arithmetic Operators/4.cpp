#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int length, breadth;

    //taking input
    cout<<"Enter the value of lenght and breadth = ";
    cin>>length>>breadth;

    //calculation
    int perimeter = 2*(length + breadth);

    //printing output
    cout<<"Perimeter of a rectangle = "<<perimeter;

    return 0;
}