#include<iostream>
using namespace std;
class tutorial{
    public:
    int x, y;
    void input(){
        cout<<"Enter two numbers = ";
        cin>>x>>y;

        void display(){
            cout<<"Sum of two numbers = "<<x + y;
        }
    }

    void call(){
        input();
    }
};

int main(){
    tutorial obj;
    obj.call();
}