#include <iostream>
using namespace std;

//multilevel inheritance

class Car {
    public:
    int model;
    string name;
    void start(){
        cout << "Car starts" <<endl;
    }
};

//inherit parent clss car to the speed car
class speedCar : public Car {

};

//multilevel inheritance of class speedCar
class sportsCar : public speedCar{

};

int main(){
    sportsCar bmw;
    bmw.start();
}

