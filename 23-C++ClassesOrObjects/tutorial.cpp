#include<iostream>
using namespace std;

class Car{
  public:
  string brand;
  int totalCar, manPower;
};

int main(){
  //object - 01
  Car obj1;
  obj1.brand = "Toyota";
  obj1.totalCar = 10000;
  obj1.manPower = 50000;

  cout<<"Object one details---;"<<endl;

  cout<<"Brand name = "<<obj1.brand<<endl;
  cout<<"Total Car = "<<obj1.totalCar<<endl;
  cout<<"Man Power = "<<obj1.manPower<<endl<<endl;

  //object - 02
  Car obj2;

  obj2.brand = "Volvo";
  obj2.totalCar = 20000;
  obj2.manPower = 60000;

  cout<<"Object two details---;"<<endl;

  cout<<"Brand name = "<<obj2.brand<<endl;
  cout<<"Total Car = "<<obj2.totalCar<<endl;
  cout<<"Man Power = "<<obj2.manPower<<endl<<endl;

  //object - 03
  Car obj3;

  obj3.brand = "Tesla";
  obj3.totalCar = 30000;
  obj3.manPower = 70000;

  cout<<"Object three details---;"<<endl;

  cout<<"Brand name = "<<obj3.brand<<endl;
  cout<<"Total Car = "<<obj3.totalCar<<endl;
  cout<<"Man Power = "<<obj3.manPower<<endl;

}