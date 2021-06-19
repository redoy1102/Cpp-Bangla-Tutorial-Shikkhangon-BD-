#include<iostream>
using namespace std;

int main(){
    //varibale declaration
    float eng, phy, chem, bio, math;

    //taking input
    cout<<"Enter your english marks = ";
    cin>>eng;

    cout<<"Enter your physics marks = ";
    cin>>phy;

    cout<<"Enter your chemistry marks = ";
    cin>>chem;

    cout<<"Enter your biology marks = ";
    cin>>bio;

    cout<<"Enter your math marks = ";
    cin>>math;

    //calculation

    float total = eng + phy + chem + bio + math;

    float average = (eng + phy + chem + bio + math) / 5;

    float percentage = (total / 500) * 100;

    //printing output

    cout<<"Your Total marks = "<<total<<endl;
    cout<<"Your average marks = "<<average<<endl;
    cout<<"You got = "<<percentage<<"% marks.";

    return 0;
}