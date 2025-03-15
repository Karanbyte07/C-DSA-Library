#include <iostream>
using namespace std;


bool isPresent(int arr[][4], int target, int row, int col) {
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            if(arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}


int main(){

    int arr[3][4];
    //taking input //row wise leta hai.

    cout << "Write Numbers - ";
   
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cin >> arr[row][col];
        }
    }

    //Printing
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }


    //Searching element 
    cout << "Enter the number to search ";
    int target ;
    cin>>target;

   
    if(isPresent(arr, target, 3, 4)){
        cout << "Element is found" << endl;
    }
    else{
        cout << "Element is not found" << endl;
    }
}