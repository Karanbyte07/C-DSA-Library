#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
// Selection sort
void PrintArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void sort(int arr[], int n) {
  for (int i = 0; i < n - 1;
       i++) // n-1 because we don't need to compare the last element with itself
  {
    int minIndex = i; // let first index is minimum

    for (int j = i + 1; j < n; j++) // compare with all the elements after i
    {
      if (arr[j] < arr[minIndex]) // if any element is smaller than the minIndex
                                  // then update
      {
        minIndex = j;
      }
      swap(arr[j], arr[minIndex]);
    }
  }
}
int main() {
  int arr[5] = {10, 89, 9, 50, 40};
  cout << "Given Array: - ";
  PrintArray(arr, 5);
  cout << endl;
  sort(arr, 5);
  cout << "Sorted array is: ";
  PrintArray(arr, 5);

  cout << endl;
}
*/