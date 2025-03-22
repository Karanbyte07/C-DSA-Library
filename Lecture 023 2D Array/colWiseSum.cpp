#include<iostream>
using namespace std;

void colWiseSum(int arr[][3], int row, int col){
    for(int col = 0; col < 3; col++){
        int sum = 0;
        for(int row = 0; row < 3; row++ ){
            sum += arr[row] [col];
        }
        cout << sum  << " ";
    }
    cout << endl;
}

int main(){

    int arr[3][3];
    //taking input //row wise 

    cout << "Write Numbers - ";
   
    for(int row = 0; row<3; row++){
        for(int col = 0; col<3; col++){
            cin >> arr[row][col];
        }
    }

    //Printing
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

    colWiseSum(arr, 3, 3);
}