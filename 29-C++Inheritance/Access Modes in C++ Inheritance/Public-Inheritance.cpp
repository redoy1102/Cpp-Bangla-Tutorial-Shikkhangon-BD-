#include<iostream>
using namespace std;
class base{
    private:
    int pvt = 1;

    protected:
    int prt = 2;

    public:
    int pbl = 3;

    int getPvt(){
        return pvt;
    }
};
class derivedClass : public base{
    public:
    int getProtected(){
        return prt;
    }
};
int main(){
    derivedClass obj;
    cout<<"Public - "<<obj.pbl<<endl;
    cout<<"Protected - "<<obj.getProtected()<<endl;
    cout<<"Private - "<<obj.getPvt();
}