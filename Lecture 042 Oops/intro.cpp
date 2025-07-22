#include <iostream>
using namespace std;

class hero{
    //properties
    private:
    int health;

   
    public:
    char level;

    
    // to set private data using set method
    void setHealth(int h){
        health = h;
    }

    void setLevel(char s){
        level = s;
    }

    // to acces private data using get method
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    
};

int main(){
    hero paul; //create object of hero class & it is a static allocation
  
//    paul.health  = 5;
//    paul.level = 'A';
    
 //access data from class
    // cout << paul.health <<endl;
    // cout << paul.level <<endl;
    
    //getter and setter method to call in private
    paul.setHealth(20); //seting health
    paul.setLevel('B'); //setting level

    cout << "Paul health is " << paul.getHealth() <<endl;
    cout << "Paul level is " << paul.getLevel() <<endl;

    //static allocation
    hero *king = new hero; //dynamic allocation
    king->setHealth(100);
    king->setLevel('A');

    cout << "King health is " << king->getHealth() <<endl;
    cout << "King level is " << king->getLevel() <<endl;

   //alternative way to access data
    // cout << "King health is " << (*king).getHealth() <<endl;
    // cout << "King level is " << (*king).getLevel() <<endl;

    
}