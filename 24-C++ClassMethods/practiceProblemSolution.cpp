#include<iostream>
using namespace std;

class practice{
    public:
    int x, y;

    void summation(){
        int sum = x + y;
        cout<<"Sum of "<<x<<" and "<<y<<" = "<<sum;
    }
};

int main(){
    practice practiceObj;
    practiceObj.x = 10;
    practiceObj.y = 20;
    
    practiceObj.summation();

    return 0;
}