#include<iostream>
using namespace std;

class PracticeMethod {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)

    void showName(){
      cout<<"Md Fuadul Islam Redoy";
    }
};

int main(){

  PracticeMethod Myobj;  // Create an object of MyClass

  Myobj.myNum = 10;     //storing value to myNum attribute

  Myobj.showName();  //calling methods

  return 0;
}