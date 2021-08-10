#include<iostream>
using namespace std;

class test{
    int price[5], sum = 0;

    public:
    void input(){
        cout<<"Enter your five product price = ";
        for (int i = 0; i < 5; i++)
        {
            cin>>price[i];
        }
    }

    friend int total(test totalObj);
};

int total(test totalObj){
    for (int i = 0; i < 5; i++)
    {
        totalObj.sum += totalObj.price[i];
    }
    cout<<"Sum of five products = "<<totalObj.sum;
}

int main(){
    test testObj;
    testObj.input();

    total(testObj);

    return 0;
}