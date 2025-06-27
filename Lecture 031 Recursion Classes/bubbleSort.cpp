#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    //base case
    if(n == 0 || n == 1) return ; //already sorted

    //1 case solve kr do jo ki largest element ko end me rkah dega
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    //recursive call
    bubbleSort(arr, n - 1); //size to kam hoti jayegi jab ek place ho jayega
}

int main() {
    int arr[5] = {2,30,14,89,23};
    int size = 5;

    bubbleSort(arr, size);
    for(int  i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
}