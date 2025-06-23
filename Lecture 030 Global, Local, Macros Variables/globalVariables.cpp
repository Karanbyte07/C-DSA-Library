#include <iostream>
using namespace std;

//Global variable are those which can be used anywhere in the program 
//but it is bad practice coz of anyone can change it throughout the code

int score = 15; //initialization of global variable

void a(int i){
    cout << "In function a -> " <<score;
}

void b(int i){
    cout << "In function b -> " <<score;
}


int main(){

    int i = 5; //local variable -> can be used only in this main function not outside of the braces
    cout << "In main function -> " <<score  <<endl;
    a(i);
    cout <<endl;
    b(i);
}
