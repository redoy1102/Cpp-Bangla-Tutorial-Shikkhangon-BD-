#include<iostream>
#include<string>
using namespace std;
int main(){
    string n1 = "10.256", n2 = "123.69", n3 = "10";

    int nn1 = stoi(n1);
    int nn2 = stoi(n2);
    int nn3 = stoi(n3);

    cout<<"stoi(\""<<n1<<"\") is "<<nn1<<endl;
    cout<<"stoi(\""<<n2<<"\") is "<<nn2<<endl;
    cout<<"stoi(\""<<n3<<"\") is "<<nn3<<endl;
}