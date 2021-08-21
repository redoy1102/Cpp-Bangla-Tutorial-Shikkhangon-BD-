#include<iostream>
using namespace std;

int add(int x, int y){
    cout<<"Sum of x and y = "<<x + y<<endl;
}
float add(float x, float y){
    cout<<"Average of three numbers = "<<(x+y) / 2;
}

int main(){
    add(10, 20);
    add(10.5f, 20.5f);
    return 0;
}