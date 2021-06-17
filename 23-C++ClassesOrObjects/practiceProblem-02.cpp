#include<iostream>
using namespace std;

class Fuad{
    public:
    int num1, num2;
};

int main(){
    Fuad FuadObj;

    FuadObj.num1 = 10;
    FuadObj.num2 = 20;

    cout<<FuadObj.num1<<endl;
    cout<<FuadObj.num2;  

    return 0;
}