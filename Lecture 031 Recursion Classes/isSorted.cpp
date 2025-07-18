#include <iostream>
using namespace std;


bool isSorted(int *arr, int size){

    //base case
    if(size == 0 || size == 1) return true;  //array is already sorted

    //recursive case
    if(arr[0] > arr[1]) return false; //pehle wala check kr liya
    else{
        bool remainingPart = isSorted(arr + 1, size - 1); //arr[1] ke bad ke sare elements check kiya
        return remainingPart;
    }

}

int main() {

    int arr[7] = {2, 4, 8, 6, 9, 11, 13};
    int size = 7;


    //function call
    int ans = isSorted(arr, size);

    if(ans){
        cout << " Array is sorted " <<endl;
    }
    else{
        cout << " Array is not sorted " <<endl;
    }
    
}

//T.C = O(n)