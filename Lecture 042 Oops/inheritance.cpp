#include <iostream>
using namespace std;


//create a class of animal
class animal{
    public:
    string name;
    int age;
    int weight;

    //function or method they bark
    void speak(){
        cout << "the animal is speaking" <<endl;
    }
    void setname(string n){
        this->name = n;
    }

    string getname(){
        return name;
    }
};

//create a child class which inhertis the properties of parent animal
//also called single inheritance
class dog : public animal{
    public:
    string breed;
    //function 
    void bark(){
        cout << "the dog is barking" <<endl;
    }

};

int main(){

    //create a object dog of class animal
    dog labra;
    cout << "the name of the dog is " << labra.name <<endl;
    cout << "the breed of the dog is " << labra.breed <<endl;
    labra.speak();
    labra.bark();
    labra.setname("julie");
    cout << "the name of the dog is " << labra.getname() <<endl;


    return 0;

}