#include<iostream>
using namespace std;
int display(string name[], int id[], int size){
    for (int i = 0; i < 3; i++)
    {
        cout<<"Information of student no- "<<i+1<<endl;
        cout<<"Name = "<<name[i]<<endl;
        cout<<"Id = "<<id[i]<<endl;
        cout<<endl<<endl;
    }
}
int main(){
    string name[3];
    int id[3];
    cout<<"<-- Enter student information -->"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter student no- "<<i+1<<" information"<<endl;
        cout<<"Enter name = ";
        cin>>name[i];
        cout<<"Enter id = ";
        cin>>id[i];
        cout<<endl<<endl;
    }
    display(name, id, 3);
    return 0;
}