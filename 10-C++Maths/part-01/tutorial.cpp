#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x = 10;
    int y = 20;
    int result;

    //max()
    result = max(x,y);
    cout << "Maximum number = " << result;

    //min()
    result = min(x,y);
    cout << endl << "Minimum number = " << result;

    //sqrt
    int z = 25;
    result = sqrt(z);
    cout << endl << "square root = " << result;

    //round
    int a = 10.25;
    result = round(a);
    cout << endl << "Round number = " << result;

    //log
    result = log(10);
    cout << endl << "Log = " << result;

}