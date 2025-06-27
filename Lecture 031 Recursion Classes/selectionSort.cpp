#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n){
    //base case
    if(n == 0 || n == 1) return ; //already sorted

    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
            minIndex = j;
            swap(arr[minIndex], arr[i]);
        }
        }
    }
    //recursive call
    sortArray(arr, n - 1); //size to kam hoti jayegi jab ek place ho jayega
}



int main() {
    int arr[5] = {2,30,14,89,23};
    int size = 5;

    sortArray(arr, size);
    for(int  i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
}