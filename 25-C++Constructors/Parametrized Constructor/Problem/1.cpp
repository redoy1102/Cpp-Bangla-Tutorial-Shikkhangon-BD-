//! Write a C++ programm to find area of two wall using parametrized constructor.
#include<iostream>
using namespace std;
class tutorial{
    int len, wid;
    public:
    tutorial(int x, int y){
        len = x;
        wid = y;
    }

    int display(){
        return len*wid;
    }
};

int main(){
    tutorial wall1(20,10);
    tutorial wall2(30,40);
    
    cout<<"Area of wall-1 = "<<wall1.display()<<endl;
    cout<<"Area of wall-2 = "<<wall2.display();
}