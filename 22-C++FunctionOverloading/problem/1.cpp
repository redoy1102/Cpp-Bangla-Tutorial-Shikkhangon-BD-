#include<iostream>
using namespace std;

int abs(int x){
    if(x < 0)
        x = -x;
    return x;
}

float abs(float x){
    if(x < 0)
        x = -x;
    return x;
}

int main(){
    cout<<"Absolute value of -5 = "<<abs(-5)<<endl;
    cout<<"Absolute value of -5.5 = "<<abs(-5.5f);

    return 0;
}