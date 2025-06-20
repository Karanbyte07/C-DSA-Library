#include <iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cout << "write size of arr " <<endl;
    cin >> n;

    //variable size ka array
     
    int *arr = new int[n];
    cout << "write the numbers ";
    //input array
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }


    //sum nikal liya functiona call krke
    int sum = getSum(arr, n);
    cout<< "answer " <<sum << endl;
}