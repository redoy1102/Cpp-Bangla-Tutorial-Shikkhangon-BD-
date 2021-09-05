#include<iostream>
using namespace std;
//parent class
class vehicle{
    public:
    string name[5] = {"Tesla", "Volvo", "Toyota"};
};

//child class
class car : public vehicle{
    public:
    int price[5] = {10000, 20000000, 300000000, 200000, 50000000};
};

int main(){
    car obj;
    cout<<"Name: "<<obj.name[0] + "\nPrice: "<<obj.price[0];
    
    return 0;
}