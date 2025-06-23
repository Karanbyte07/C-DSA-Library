#include <iostream>
using namespace std;

//macros it is piece of code in which can be replaced by value of macro
//jaise ki #include use krte h uske andar library hoti h like cout same way this is #define use


#define PI 3.14

int main(){
    int r = 5;
    int area = PI * r * r;
    cout << "the area of circle -> " << area;
}