#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s]; //let first element is pivot
    int count = 0;

    for(int i = s+1; i <= e; i++ ){
        if(arr[i] < pivot){
            count++;
        }
    }

    //now place pivot at right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //left and right part ko arrange krte hai
    int i = s;
    int j = e;
 while(i < pivotIndex && j > pivotIndex){
    if(arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex]){
        swap(arr[i], arr[j]);
        i++;
        j--;
    } else {
        if(arr[i] <= arr[pivotIndex]) i++;
        if(arr[j] >= arr[pivotIndex]) j--;
    }
}
    return pivotIndex;
}


void quickSort(int arr[], int s, int e){

    //base case 
    if(s>=e) return ; //array is already sorted no elements

    //do partition
    int pivot = partition(arr,s,e);

    //left part sort karo
    quickSort(arr, s, pivot - 1);

    //right part sort karo
    quickSort(arr, pivot + 1, e);
    
}

int main(){
    
    int arr[5] = {3,1,4,5,2};
    int size = 5;

    quickSort(arr,0,size-1);

    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
}