#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class A{
    public:
    string name, email;
    int number;
    int input(){
        cout<<"Enter you name - ";
        getline(cin, name);

        cout<<"Enter you email address - ";
        getline(cin, email);

        cout<<"Enter your phone number - ";
        cin>>number;
    }
    int output(){
        cout<<endl<<endl<<"Your name - "<<name<<endl;
        cout<<"Your email address - "<<email<<endl;
        cout<<"Your phone number - 0"<<number<<endl;
    }
    int fileMaker(){
        ofstream file("info.txt");
        file<<"Your name - "<<name<<endl;
        file<<"Your email address - "<<email<<endl;
        file<<"Your phone number - 0"<<number<<endl;
        file.close();
    }
};
int main(){
    A obj;
    obj.input();
    obj.output();
    obj.fileMaker();

    return 0;
}