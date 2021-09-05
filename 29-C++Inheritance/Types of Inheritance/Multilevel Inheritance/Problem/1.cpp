#include<iostream>
using namespace std;
class A{    //!grandfather class or base class
    public:
    int num1, num2;
    int input(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    int even(){
        if ((num1 + num2) %2 == 0)
        {
            cout<<"Even number."<<endl;
        }
    }
};
class B: public A{      //!parent class
    public:
    int odd(){
        //input();
        if ((num1 + num2) %2 != 0)
        {
            cout<<"Odd number."<<endl;
        }
    }
};
class C : public B{     //!children class
    public:
    int aver(){
        cout<<"Average of num1 and num2 = "<<(num1 + num2) / 2<<endl;
    }
};
int main(){
    C obj;
    obj.input();
    obj.even();
    obj.odd();
    obj.aver();