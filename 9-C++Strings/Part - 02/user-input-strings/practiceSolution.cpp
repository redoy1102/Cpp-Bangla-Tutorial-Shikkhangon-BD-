#include <iostream>
#include <string>
using namespace std;
int main(){
    string fullName, universityName;

    cout << "Type your full name: ";
    getline(cin,fullName);

    cout << endl << "Type your university name: ";
    getline(cin,universityName);
    
    cout << endl << "Output--" << endl;
    cout << "Your full name is: " << fullName;
    cout << endl << "Your university name: " << universityName;
    return 0;
}