#include<bits/stdc++.h>
using namespace std;

int largestSum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    return row;
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

    cout << "Maximum row is at number " << largestSum(arr, 3, 3) <<endl;
    

}