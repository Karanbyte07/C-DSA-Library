#include <iostream>
using namespace std;



// 2d array
int main(){

    int arr[3][4];
    //taking input //row wise leta hai.

    cout << "Write Numbers - ";
   
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cin >> arr[row][col];
        }
    }

    //taking input //column wise leta hai.
 /*
    for(int col = 0; col<4; col++){
        for(int row = 0; row<3; row++){
            cin >> arr[col][row];
        }
    }
*/

    //Printing
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

}