#include<iostream>
using namespace std;
class base{
    public:
    int print(){
        cout<<"I am base."<<endl;
    }
};
class derivedClass : public base{
    public:
    int print(){
        base::print();
        cout<<"I am derived."<<endl;
    }
};
int main(){
    derivedClass obj;
    obj.print();
}