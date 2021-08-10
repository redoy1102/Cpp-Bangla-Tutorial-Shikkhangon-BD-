#include<iostream>
using namespace std;
class tutorial{
    private:
    int x, y, sum;

    public:
    void input(){
        cout<<"Enter two numbers = ";
        cin>>x>>y;
    }

    int display(int res){
        cout<<"Sum = "<<res;
    }

    friend int cal(tutorial displayObj);
};

int cal(tutorial displayObj){
    displayObj.sum = displayObj.x + displayObj.y;
    return displayObj.sum;
    
}
int main(){
    tutorial obj;
    obj.input();

    int output = cal(obj);

    obj.display(output);    
    return 0;
}