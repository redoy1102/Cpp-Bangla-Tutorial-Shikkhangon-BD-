//!In C++ programming, a class can be derived from more than one parent.
//For example, A class Bat is derived from base classes Mammal and WingedAnimal. It makes sense because bat is a mammal as well as a winged animal.

#include<iostream>
using namespace std;
class IUBAT{    //Base class
    public:
    int iubat(){
    cout<<"I am IUBAT"<<endl;
    }
};
class CSE{      //Base Class
    public:
    int cse(){
        cout<<"I am cse"<<endl;
    }
};
class Redoy: public IUBAT, public CSE{
    public:
    int call(){
        iubat();
        cse();
    }
};
int main(){
    Redoy obj;
    obj.call();
}