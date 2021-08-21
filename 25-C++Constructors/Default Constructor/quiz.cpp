#include<iostream>
using namespace std;
class input{
    public:
    int x, y;
    input(){
        cout<<"Enter two numbers = ";
        cin>>x>>y;
    }

    input(){
        cout<<"Sum of two numbers = "<<x + y;
    }
};
int main(){
    input obj;
    return 0;
}