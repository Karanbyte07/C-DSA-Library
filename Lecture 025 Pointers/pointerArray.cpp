#include <iostream>
using namespace std;

int main(){
    

    int arr[10] = {2,4,5,67};
/*

    cout << "the address of first memory block is: " <<arr <<endl;
    //another way to find the address
    cout << "the address of first memory block is: " <<&arr[0] <<endl;
   
    cout << "1st location value " << *arr <<endl;
    cout << "increment " << *arr + 1 <<endl;
    cout << "value at location " << *(arr + 1) <<endl;
    cout << "6th " << *(arr) + 1 <<endl;

    int i = 3;
    cout << "7th " << i[arr];

*/

/*
    int temp[10];
    cout << "size of arr " <<sizeof(temp) <<endl;
    int *ptr = &temp[0];
    cout << "1st " <<sizeof(temp) <<endl;
    cout << "2nd " <<sizeof(*temp) <<endl;
    cout << "3rd " <<sizeof(&temp) <<endl;




    cout << "size of ptr " <<sizeof(ptr) <<endl;
    cout  <<sizeof(*ptr) <<endl;
    cout <<sizeof(&ptr) <<endl;

*/

    int a[20] = {1,2,3,4,5};
    //this all show address
    cout <<"1st "<< a <<endl;
    cout <<"2nd " << &a <<endl;
    cout <<"3rd "<< &a[0] <<endl;

    int *p = &a[0];
    cout <<"4th "<< p <<endl;
    cout <<"5th " << *p <<endl;
    cout <<"6th "<< &p <<endl;



    return 0;
}