#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x = 10;
    int y = 20;
    int z = 25;
    double value = 2.50;
    int a = 10;
    int result;

    //max()
    result = max(x,y);
    cout<<"Maximum value = " << result;

    //min()
    result = min(x,y);
    cout<<endl<<"Minimum value = "<<result;

    //sqrt()
    result = sqrt(z);
    cout<<endl<<"Sqrt = "<<result;

    //round()
    result = round(value);
    cout<<endl<<"Round = "<<result;

    //log()
    result = log(a);
    cout<<endl<<"Log = "<<result;
    return 0;
}