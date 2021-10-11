#include<iostream>
using namespace std;
class A{
    public:
    int diameter(float x){
        float diam = (2 * x);
        cout<<"Diameter = "<<diam<<endl;
    }
    int circumference(float x){
        float cir = (2 * 3.1416 * x);
        cout<<"Circumference = "<<cir<<endl;
    }
    int area(float x){
        float are = (3.1416 * x * x);
        cout<<"Area = "<<are<<endl;
    }
    
};
int main(){
    float r;
    cout<<"Enter raduis of your circle = ";
    cin>>r;

    A aobj;
    aobj.diameter(r);
    aobj.circumference(r);
    aobj.area(r);

    return 0;
    
}