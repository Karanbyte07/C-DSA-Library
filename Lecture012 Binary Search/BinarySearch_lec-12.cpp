#include <iostream>
using namespace std;

/*

int binarySearch(int arr[], int size, int key) {
    int start = 0; // first index
    int end = size - 1; // last index

  // int mid = (start + end) / 2;  // mid index ki key mil rhi h ya nhi aur left and right jane ke liye mid ko update krna hai.
   //same above not to get error for large values 

  int mid = start + (end - start) / 2;

  while(start <= end){

    if(arr[mid] == key){  // key mil to (compare kiya key ke sath mid wala ko )
      return mid; //index return
    }

    if(arr[mid] < key){
      start = mid + 1;  //right side ke indx ke liye
    }

    else { // key < arr[mid]
      end = mid - 1;  //left side ke indx ke liye
    }
    mid = start + (end-start)/2; // mid ko update krna hai
  }
  return -1;
}




int main(){

  int EvenArr[6] = {2, 4, 6 , 8, 12, 18};
  int OddArr[5] = {3, 8, 11, 14, 16};


  int evenIndex = binarySearch(EvenArr, 6, 8);

  int oddIndex = binarySearch(OddArr, 5, 3);

  cout << "Index of 8 is " << evenIndex << endl;

  cout << "Index of 3 is " << oddIndex << endl;
}

gjjj
*/