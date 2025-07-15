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
/*
#include <iostream>
using namespace std;

void merge(int arr[], int temp[], int mid, int s, int e){
  int i = s; //starting index of left arr
  int j = mid + 1; //right arr
  int k = s;//temp arr

  while(i <= mid && j <= e){ //copy arrays into temp arr
    if(arr[i] <= arr[j]){
      temp[k++] = arr[i++]; 
    }
    else{
      temp[k++] = arr[j++];
    }
  }

  while(i <= mid) temp[k++] = arr[i++]; //copy remining elements
  while(j <= e) temp[k++] = arr[j++];

  //copy back to original array
  for(int idx = s; idx <= e; idx++){
    arr[idx] = temp[idx];
  }
}

void mergeSort(int arr[], int temp[], int s, int e){
    //base case
    if(s >= e) return ;
    int mid = (s+e)/2;

    mergeSort(arr,temp,s,mid); //sort left part
    mergeSort(arr,temp,mid+1,e); //sort right part
    merge(arr,temp, mid,s,e); //merge both
  }


int main() {
    int arr[] = {38, 27, 43, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];

    mergeSort(arr, temp, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/