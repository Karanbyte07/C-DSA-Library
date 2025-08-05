#include <iostream>
using namespace std;

//polymorphism 
//1- compile time polyumoprphism - function overloading


class A {
    
public:
    void sayHello(){
        cout << "Hello Love Babbar" << endl;
    }

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }

    void sayHello(string name, int n){
        cout << "Hello " << name << " with " << n << endl;
    }

};

//2 - operator overloading
class B {
    public:
    
    int a,b; //initialize two variables

    int sum(){ //function which return sum
        return a+b;
    }

    //operator overloading using operator +
    void operator+ (B &obj){ // function overloading subtract forcely 
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output " <<value2 - value1 <<endl;
    }
    

};



//Runtime polymorphism - which override the method

class animal {
    public:
    void speak() {
        cout << "Dog is Speaking" <<endl;
    }
};

//for overriding must be inherit from parent class
class dog : public animal{
    public:
    void speak(){
        cout << "Dog is barking" <<endl;
    }
};



int main(){
    //compile time inheritance
    A object;
    object.sayHello();

    //operator overloading
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 6;
    obj1 + obj2;

    //runtime inheritance which overriding
    dog julie; //create a object ofjuli class dog
    julie.speak(); //call the function speak



    return 0;
}