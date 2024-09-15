#include <iostream>
using namespace std;

/*
void reverseArray(int arr[], int size){
  int start = 0;
  int end = size - 1;

  while(start <= end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i] <<" ";
  }
    cout<<endl;
}

int main(){

 int arr[6] = {1,4,0,5,-2,15};
 int brr[5] = {2,6,3,9,4};
  


 printArray(arr,6);
 printArray(brr,5);

reverseArray(arr,6);
 reverseArray(brr,5);

  cout<<"reversed array is :" <<endl <<endl;

  printArray(arr,6);
  printArray(brr,5);

  return 0;
}

*/

// Alternate Swap...

/*


void reverseAlternate(int arr[], int size){

 // int start = 1;
  for(int i = 0; i<size-1; i+=2){
    swap(arr[i],arr[i +1]);
  }
}

void printArray(int arr[],int n){
  for(int i=0; i<n; i++){
    cout<<arr[i] <<" ";
  }
}


int main(){


  int arr[6] = {1,4,0,5,-3,15};
  int odd[5] = {2,6,9,3,4};

  printArray(arr, 6);
  cout<<endl <<endl;
  printArray(odd,5);
  
  reverseAlternate(arr,6);
  reverseAlternate(odd,5);
  
  cout <<endl;
  cout<< "Alternate reverse is :" <<endl <<endl;
  
  printArray(arr, 6);
  cout<<endl <<endl;
  printArray(odd,5);
  return 0;
  
}

*/