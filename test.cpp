#include <iostream> 
using namespace std;

int partition(int arr[], int s, int e){
  int pivot = arr[s];
  int count = 0;
  for(int i = s+1; i <= e; i++ ){
    if(arr[i] < pivot) count++;
  }

  int pivotIndex = s + count;
  swap(arr[s], arr[pivotIndex]);

  //arrange left and right part
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
  if(s>=e) return ;


  int pivot = partition(arr,s,e);

  quickSort(arr,s,pivot-1); //left part

  quickSort(arr,pivot+1,e); //right part

}

int main() {
  int arr[] = {3,1,4,5,2};
  int n = sizeof(arr)/sizeof(arr[0]);


  quickSort(arr,0,n-1);

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }


}