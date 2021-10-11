#include<iostream>
using namespace std;
class A{
    public:
    int phy, math, chem, bio, ict;
    void input(){
        cout<<"Enter the number of your 5 subjects = ";
        cin>>phy>>math>>chem>>bio>>ict;
    }
    void total(){
        int total = (phy + math + chem + bio + ict);
        cout<<"Total number of five subjects = "<<total<<endl;
    }
    void aver(){
        float average = (phy + math + chem + bio + ict) / 5;
        cout<<"Average of five numbers = "<<average<<endl;
    }
};
int main(){
    A obj;
    obj.input();
    obj.total();
    obj.aver();

    return 0;
}