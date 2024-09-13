#include <iostream>
using namespace std;

//find pivot element using linear search
/*
int findPivotElement(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while(start<end){
  if (arr[mid] >= arr[0]) { //first line per 
    start = mid + 1;
  }

  else { //2nd line 
    end = mid; //asa es liye kyuki jab ham mid - 1 krenge toh toh woh first line per aa jayega lekin answer hamara 2nd line per h
  }
  mid = start + (end - start) / 2;

}
  return start;

}



int main() {
    int arr[5] = {7, 9, 1, 2, 3};



    cout << "Pivot element index is: " << findPivotElement(arr, 5) << endl;

    return 0;
}
*/