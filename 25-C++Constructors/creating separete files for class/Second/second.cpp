#include "second.h"
#include <iostream>
using namespace std;
second::~second(){
    cout<<"Program closed. Thank you!";
}
second::second()
{
    cout << "I am constructor." << endl;
}
int second::even(int x){
    if(x %2 == 0){
        cout<<x<<" is even number."<<endl;
    }
}
