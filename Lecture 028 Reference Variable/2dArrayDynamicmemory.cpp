#include <iostream>
using namespace std;

int main() {

    /* 
    int n;
    cin >> n;


    //creating an 2d array
    int **arr = new int *[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int [n];
    }

    //taking input

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i] [j];
        }
    }

    //printing output
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i] [j] << " ";
        }
        cout << endl;
    }

    */

    //if i want to take also input of row and col

    int row;
    cin>>row;

    int col; 
    cin>>col;

    int **arr = new int *[row];
    for(int i = 0; i < col; i++){
        arr[i] = new int [col];
    }

     for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i] [j];
        }
    }

    //printing output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i] [j] << " ";
        }
        cout << endl;
    }


    //for releasing memory
    //right part 
    for(int i = 0; i < row; i++){
        delete [] arr;
    }

    //left part

    delete [] arr;

}