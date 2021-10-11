#include<iostream>
using namespace std;
class A{
    public:
    int a, b;
    void input(){
        cout<<"Enter two numbers - ";
        cin>>a>>b;
    }
    void average(){
        int aver = (a+b) / 2;
        cout<<"Average of two numbers = "<<aver<<endl;
    }
    void even(){
        int total = (a + b);
        if(total %2 == 0)
            cout<<"Even number."<<endl;
    }
    void odd(){
        int total = (a + b);
        if(total %2 != 0)
            cout<<"Odd number."<<endl;
    }
};

int main(){
    A aObj;
    aObj.input();
    aObj.average();
    aObj.even();
    aObj.odd();

    return 0;
}