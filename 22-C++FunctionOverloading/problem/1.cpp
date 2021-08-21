#include<iostream>
using namespace std;
float over(float var){
    if(var < 0.0)
        var = -var;
    return var;
}
int over(int var){
    if(var < 0)
        var = -var;
    return var;
}
int main(){
    cout<<"Absolute value of -5 = "<<over(-5)<<endl;
    cout<<"Absolute value of 5.5 = "<<over(5.5f)<<endl;
}