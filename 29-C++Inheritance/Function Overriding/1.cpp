#include<iostream>
using namespace std;
class base{
    public:
    int basef(){
        cout<<"I am base.";
    }
};
class derived: public base{
    public:
    int basef(){
        cout<<"I am derived.";
    }
};
int main(){
    derived obj;
    obj.basef();
}