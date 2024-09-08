#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int getMax(int arr[], int n){

  int number = INT_MIN;
  for(int i; i<n; i++) {
    number = max(arr[i], number );
  }
  return number;
}


int main(){

  //taking the input size of array

  int size;
  cin>>size;

  int num[100];

  for(int i =0; i<size; i++){
    cin>>num[i];
    
  }

  cout<< "Maximum number is " << getMax(num, size );

  
  

  
  
}