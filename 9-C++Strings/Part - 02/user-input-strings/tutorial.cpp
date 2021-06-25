#include<iostream>
#include<string>

using namespace std;
int main(){
    string fullName;
    cout<<"Enter your full name = ";
    getline(cin,fullName);

    cout<<endl<<"My full name = "<<fullName;

    return 0;
}