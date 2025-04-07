#include <iostream>
using namespace std;

int main(){

    int num = 5;

    // To find address of num using -> &

    cout << "Address of num -> " << num << " is "<< &num << endl;

    //create a pointer
    
    int *ptr = &num;
    cout << "Velue is: " <<*ptr <<endl;

    cout << "Size of integer " <<sizeof(num) <<endl;
    cout << "Size of pointer " <<sizeof(ptr) <<endl;

    double d  = 4.3;
    double *p2 = &d;

    cout << "Size of integer d " <<sizeof(d) <<endl;
    cout << "Size of pointer d " <<sizeof(p2) <<endl;
    //result comes anytype of datatype pointer stores the address 
    //so on all the dataype cases like int, char etc size of pointer will be 4 bytes


    
}
