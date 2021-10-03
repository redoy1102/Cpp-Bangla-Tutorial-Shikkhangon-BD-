#include<iostream>
#include<sstream>
using namespace std;

int wordGun(string name){
    stringstream obj(name);     //breaking words
    string words;

    int count = 0;
    while (obj >> words)
    {
        count++;
    }
    return count;
}

int main(){
    string name = "Md Fuadul Islam Redoy";
    string name1 = "Md Fuadul ";
    cout<<wordGun(name)<<endl;
    cout<<wordGun(name1);
}