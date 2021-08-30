#include<iostream>
using namespace std;

class student {
    public:
    student(){
        cout<<"I am default constructor"<<endl;
    }
    student(int x, int y){
        cout<<x + y<<endl;
    }
};

int main(){
    student obj(10, 15), obj1, obj2;
}