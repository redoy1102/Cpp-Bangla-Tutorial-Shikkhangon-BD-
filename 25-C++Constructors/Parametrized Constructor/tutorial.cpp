#include<iostream>
using namespace std;
class student {
    public:
    student(){
        cout<<"I am default constructor."<<endl;
    }

    student(int x, int y){
        cout<<"x + y = "<<x + y;
    }
};
int main(){
    student obj, obj1(10, 20);
}