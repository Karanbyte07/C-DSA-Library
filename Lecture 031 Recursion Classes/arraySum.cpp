#include <iostream>
using namespace std;

int arraySum(int arr[], int size){
   
    //base case
    if(size <= 1) return arr[0];

    //recursive case

    int sum = arr[0];
    int remaining = sum + arraySum(arr + 1, size - 1);
    return remaining;


}

int main(){

    int arr[1] = {2};
    int size = 1;

   int ans =  arraySum(arr, size);

   cout << "Sum of element of an array -> " <<ans;
}
//T.C -> O(n)