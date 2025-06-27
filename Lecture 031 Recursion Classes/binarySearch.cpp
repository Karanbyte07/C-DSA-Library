#include <iostream>
using namespace std;

void print(int arr[], int start, int end){
    for(int i = start ; i <= end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool binarySearch(int arr[], int start, int end, int key){
    cout << endl;
    print(arr, start, end);
    //base case 
    //element not found
    if(start > end) return false;

     int mid = start + (end - start)/2;
     cout << "Value of arr at mid " <<arr[mid] <<endl;

    //element found
    if(arr[mid] == key) return true;

    //recursive call
    if(arr[mid] < key) return binarySearch(arr, mid + 1, end, key);
    else {return binarySearch(arr, start, mid - 1, key);}
}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 16;
    int start = 0;
    int end = size - 1;

    int ans = binarySearch(arr, start, end, key);
    
    if(ans){
        cout << " Element is present" <<endl;
    }
    else {
        cout << " Element is not present" <<endl;
    }

    return 0;
}