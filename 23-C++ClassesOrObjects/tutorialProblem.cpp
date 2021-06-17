#include<iostream>
using namespace std;

class redoy{
    public:
    int num1, num2;
};

int main(){
    redoy myObj;
    myObj.num1 = 10;
    myObj.num2 = 20;

    int average = (myObj.num1 + myObj.num2) / 2;

    cout<<"Average = "<<average;
    return 0;
}
