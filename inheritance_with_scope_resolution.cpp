#include <iostream>
using namespace std;

class Vehicle{
public:
    int speed;
    string color;

    void showSpeed();

};
 void Vehicle::showSpeed(){
 cout << "Speed : " << speed;
 }
class Car : public Vehicle{

public:
    string brand;
};

int main(){
 Car c1;
 c1.brand = "bmw" ;
 c1.speed = 5;
 c1.color = "Black";
 cout <<"Brand : " << c1.brand << endl;
 cout <<"Color : " << c1.color << endl;
 c1.showSpeed();
}

