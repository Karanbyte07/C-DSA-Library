#include <iostream>
using namespace std;

void update(int &x){
    x++;
}

int main(){
  
    /*  
    int i = 5;
    //create a reference variable
    int &j = i; // j is a reference to i

    cout << "Before " << i << endl;
    j = 10; // changing j will change i

    cout << "After " << i << endl;

    */

    int x = 5;
    cout << "Before update: " << x << endl;
    update(x); // passing x by reference
    cout << "After update: " << x << endl;

}