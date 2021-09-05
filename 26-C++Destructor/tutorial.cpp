#include<iostream>
using namespace std;

class des{
    public:

    des(){
        cout<<"Hello Constructor."<<endl;
    }

    int memFun1(){
        cout<<"Hello member function-1."<<endl;
    }

    ~des(){
        cout<<"Hello destructor1."<<endl;
    }
};
int main(){
    des obj;
    obj.memFun1();
    return 0;
}



    // int memFun2(){
    //     cout<<"Hello member function-2."<<endl;
    // }