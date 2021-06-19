#include<iostream>
using namespace std;
int main(){
    //variable declaration
    int radius;
    
    //taking input
    cout<<"Enter the radius of your circle = ";
    cin>>radius;


    //calculation

    //finding diameter of a circle
    int diameter = 2*radius;

    //finding circumference of a circle
    double circumference = (2*3.1416*radius);


    //printing output
    cout<<"Diameter of a circle = "<<diameter<<endl;
    cout<<"Circumference of a circle = "<<circumference;
}