#include <iostream>
using namespace std;
  
    bool triplet(int arr[], int n, int i, int j, int k){
        //base case
        if(i >= n - 2) return false;
        
        if(i != j && j != k && k != i){
            int a = arr[i], b = arr[j], c= arr[k];
           int a2 = a * a, b2 = b * b, c2 = c * c;
        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) return true;
        }
        // Move k forward
        if (k + 1 < n)
            return triplet(arr, n, i, j, k + 1);
        
        // Move j forward and reset k
        if (j + 1 < n - 1)
            return triplet(arr, n, i, j + 1, j + 2);
        
        // Move i forward and reset j and k
        return triplet(arr, n, i + 1, i + 2, i + 3);
        }
        
    
    bool pythagoreanTriplet(int arr[], int n) {
        // code here
       return triplet(arr, n, 0, 1, 2);
        
    }



    int main(){
        int arr[] = {3, 1, 4, 6, 5};
        int n = sizeof(arr) / sizeof(arr[0]);
        if (pythagoreanTriplet(arr, n)) {
            cout << "Yes, there exists a Pythagorean triplet." << endl;
        } else {
            cout << "No, there does not exist a Pythagorean triplet." << endl;
        }
        return 0;
    }