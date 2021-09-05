#include<iostream>
using namespace std;
class base{
    public:
    int basef(){
        cout<<"I am base."<<endl;
    }
};
class derived: public base{
    public:
    int basef(){
        cout<<"I am derived."<<endl;
    }
};
int main(){
    derived obj1, obj2;
    obj1.basef();
    obj2.base::basef();
}