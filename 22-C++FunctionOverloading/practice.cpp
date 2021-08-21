#include<iostream>
using namespace std;

int sum(int x, int y){
    cout<<"Sum of 1st sum = "<<x+y<<endl;
}
int sum(int x, float y){
    cout<<"Sum of 2nd sum = "<<x+y<<endl;
}
int main(){
    sum(20, 30);
    sum(10, 20);
}