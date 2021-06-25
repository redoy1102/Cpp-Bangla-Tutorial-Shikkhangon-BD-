#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int result;

    //abs()
    int x = -5;
    result = abs(x);
    cout << "Absolute = " << result;

    //acos() & asin & atan
    double y = 1.0;
    result = acos(y);
    cout << endl << "acos("<< y <<") = " << result << " radians";
    cout << endl << "acos("<< y <<") = " << result*180 / 3.141592 << " degrees";


    //cbrt
    int z = 2;
    result = cbrt(z);
    cout << endl << "Cube root of " << z << " = " << result;

}