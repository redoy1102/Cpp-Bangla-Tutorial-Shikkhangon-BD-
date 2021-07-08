#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int X = 10.569;
    cout<<"X = "<<ceil(X);

    int Y = 10.23;
    cout<<"\nY = "<<ceil(Y);


    //1.  The cos() function in C++ returns the cosine of an angle (argument) given in radian.
    //2.  The cos() function takes a single mandatory argument in radians.
    //3.  The cos() function returns the value in the range of [-1, 1]. The returned value is either in double, float, or long double.

    double z = 30;
    cout<<"\ncos(z) = "<<cos(z);

    //01.  The cosh() is an inbuilt function in C++ STL which returns the hyperbolic cosine of an angle given in radians.

    //02.  The cosh() function takes a single mandatory argument representing a hyperbolic angle in radians.

    double A = 0.5;
    cout<<"\ncosh(0.5) = "<<cosh(A);


    //01.   The exp() function takes a single argument and returns exponential value in type double, float or long double type.
    //02.   The exp() function takes a single mandatory argument and can be any value i.e. negative, positive or zero.

    double B = 2.19;
	cout << "\nexp(x) = " << exp(B);


    //01.   The expm1() function in C++ returns the exponential (Euler's number) e raised to the given argument minus 1.
    //02.   The expm1() function takes a single mandatory argument (can be positive, negative or 0).

    double C = 2.19, result;
	result = expm1(C);
	
	cout << "e^" << C << " - 1 = " << result;
}