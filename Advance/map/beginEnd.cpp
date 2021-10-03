#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char, int > myMap;

    myMap['a'] = 1;
    myMap['b'] = 2;
    myMap['c'] = 3;
    myMap['d'] = 4;

    for (auto it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it -> first << " = " << it -> second <<endl;
    }
    
}
