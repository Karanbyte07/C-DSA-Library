#include <iostream>
using namespace std;


void print(int *ptr){
    cout <<"adress " << ptr <<endl;
    cout <<"value " << *ptr << endl;
}


void updateptr(int *ptr){
    //ptr = ptr + 1; //no update address print

    //value update
    *ptr = *ptr + 1;
}


//int arr kii jagah *arr are  bothe same
int getSum(int *arr , int n){

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += i[arr];
    }
    return sum;
}


int main(){

  //  int value = 5;
 //   int *ptr = &value;
  //  print(ptr);

  //both the output same
  //  cout << "Before updation "  << ptr  <<" " <<"value update " <<*ptr <<endl;
    //updateptr(ptr);
   // cout << "after update " <<ptr <<" " << "value update " <<*ptr <<endl;

   int arr[6] = {1,2,3,4,5,8};
   cout << "sum is " <<getSum(arr+3,3) <<endl; //last ke part 3 tak sum from end


    return 0;
}