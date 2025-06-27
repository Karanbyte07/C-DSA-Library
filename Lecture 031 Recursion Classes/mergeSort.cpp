#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;

    //length of the array 
    int lenArray1 = mid - s + 1;
    int lenArray2 = e - mid;

    //create two array
    int *firstArr = new int[lenArray1];
    int *secondArr = new int[lenArray2];

    //copy values
    int mainArrIndex = s; //jo ham traverse krnege uski value ko cpy krne ke liye from main arr
    for(int i = 0; i < lenArray1; i++) {
        firstArr[i] = arr[mainArrIndex++];
    }

    for(int j = 0; j < lenArray2; j++) {
        secondArr[j] = arr[mainArrIndex++];
    }

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrIndex = s;

     while(index1 < lenArray1 && index2 < lenArray2) {  
        if(firstArr[index1] < secondArr[index2]) {
            arr[mainArrIndex++] = firstArr[index1++];
        }
        else {
            arr[mainArrIndex++] = secondArr[index2++];
        }
    }

    while(index1 < lenArray1) {  
        arr[mainArrIndex++] = firstArr[index1++];
    }
    while(index2 < lenArray2) {  
        arr[mainArrIndex++] = secondArr[index2++];
    }

    // Free allocated memory
    delete[] firstArr;
    delete[] secondArr;


}

void mergeSort(int *arr, int s, int e){
    //recursive method only sort those arrays which are divided
    //base case
    if(s >= e) return ;

    int mid = s + (e-s)/2;

    //left part ko merge krna h
    mergeSort(arr,s,mid); //left part start hoga 0 se end mid tak rhega

    //right part ko merge krna h
    mergeSort(arr,mid+1,e); 

    //dono ko merge kr do
    merge(arr,s,e);
}

int main(){
    int arr[] = {38,27,43,3,9,82,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
     for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout <<endl;
    mergeSort(arr,0,size - 1);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

}