#include <iostream>
using namespace std;


//hierarchical inheritance

class A{
    public:
    void func1(){
        cout << "Class A function1" <<endl;
    }
};

//inherit class A
class B : public A{
    public:
    void func2(){
        cout << "Class B function2" <<endl;
    }
};

//inherit class A
class C : public A{
    public:
    void func3(){
        cout << "Class C function3" <<endl;
    }
};

int main() {
    A Obj1;
    Obj1.func1();
    
    //can inherit class A
    B obj2;
    obj2.func1();
    obj2.func2();

    //inherit same class B
    C obj3;
    obj3.func1();
    obj3.func3();
    
    return 0;

    
    
}