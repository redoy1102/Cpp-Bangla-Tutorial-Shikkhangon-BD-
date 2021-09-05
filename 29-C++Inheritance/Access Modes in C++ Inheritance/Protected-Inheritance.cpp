#include<iostream>
using namespace std;
class base{
    private:
    int b = 2;

    protected:
    int c = 3;

    public:
    int a = 1;
    int pvt(){
        return b;
    }
};
class derivedClass : protected base{
    public:
    int prt(){
        return c;
    }
    int pub(){
        return a;
    }
    int pubPvt(){
        return pvt();
    }
    //!Can't access private member
};

int main(){
    derivedClass obj;
    cout<<obj.pub()<<endl;
    cout<<obj.prt()<<endl;
    cout<<obj.pubPvt()<<endl;
}