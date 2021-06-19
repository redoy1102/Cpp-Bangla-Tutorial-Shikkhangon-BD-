#include<iostream>
using namespace std;

int main(){
    //varibale declaration
    int angle1, angle2;

    //taking input
    cout<<"Enter the value of angle1 and angle2 = ";
    cin>>angle1>>angle2;

    //calculation
    int angle3 = 180-(angle1 + angle2);

    //printing output
    cout<<endl<<"The value of third angle = "<<angle3;

    return 0;
}