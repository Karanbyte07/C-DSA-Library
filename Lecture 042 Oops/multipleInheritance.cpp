#include <iostream>
using namespace std;

//multiple inheritance

class Car {
    public:
    int model;
    string name;
    void start(){
        cout << "Car is running" <<endl;
    }
};

//create another class

class engine {
    public:
    string engineType;
    void run(){
        cout << "Engine starts.." <<endl;
    }
};

//inherit both class car and engine
class speedCar : public Car, public engine {

};


int main(){
    speedCar alto;
    alto.run();
    alto.start();
}

