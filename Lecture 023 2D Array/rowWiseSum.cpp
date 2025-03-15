#include<iostream>
using namespace std;


//Row wise sum 

void rowWiseSum(int arr[][4], int row, int col){
    
    for(int row = 0; row<3; row++){
        int sum = 0; //reset sum for every new row 
        for(int col = 0; col<4; col++){
            sum += arr[row][col];
        }
        cout<< sum << " ";
    }
    cout << endl;
}


int main(){

    int arr[3][4];
    //taking input //row wise 

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

    rowWiseSum(arr, 3, 4);
}