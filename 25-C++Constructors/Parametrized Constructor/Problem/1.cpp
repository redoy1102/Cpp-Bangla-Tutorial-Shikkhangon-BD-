//! Write a C++ programm to find area of two wall using parametrized constructor.
#include<iostream>
using namespace std;
class tutorial{
    public:
    int wid, len;
    tutorial(int x, int y){
        wid = x;
        len = y;
    }
    int display(){
        return wid * len;
    }
};

int main(){
    tutorial wall1(10, 20), wall2(30, 40);
    cout<<"Area of wall-1: "<<wall1.display()<<endl;
    cout<<"Area of wall-2: "<<wall2.display()<<endl;

    return 0;
}