#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //01.  The fabs() function in C++ returns the absolute value of the argument.
    //02.  The fabs() function takes a single argument and returns a value of type double, float or long double type.
    //03.  The fabs() function takes a single argument, x whose absolute value is returned.
    //04.  The fabs() function returns the absolute value of x i.e. |x|.

    double x = -10.25, result;
    result = fabs(x);
    cout << "fabs(" << x << ") = |" << x << "| = " << result << endl;

    long int x = -23;
    double result;

    result = fabs(x);
    cout << "fabs(" << x << ") = |" << x << "| = " << result << endl;




    //C++ fdim()


    return 0;
}