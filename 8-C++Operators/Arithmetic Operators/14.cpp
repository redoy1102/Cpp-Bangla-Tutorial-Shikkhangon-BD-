#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //varibale declaration
    int side;

    //taking input
    cout<<"Enter side of the equilateral triangle: ";
    cin>>side;

    //calculation
    int area = (sqrt(3)/4) * (side*side);

    //printing output
    cout<<endl<<"Area of equilateral triangle = "<<area;

    return 0;
}