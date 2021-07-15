#include<iostream>
using namespace std;

class lecture{
    public:
    int num1, num2;

    void input();       //function declaration
    void calculate();   //function declaration

};

void lecture::input(){
    cout<<"Enter two numbers = ";
    cin>>num1>>num2;
}

void lecture::calculate(){
    int result = num1 + num2;
    cout<<"Sum = "<<result;
}

//funtion type class name::function name(){}



int main(){
    lecture myObj;
    myObj.input();
    myObj.calculate();

    return 0;
}