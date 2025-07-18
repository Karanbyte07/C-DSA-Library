#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    //base case
    if(size == 0) return false; //ccheck krte krte element nhi mila 
    //recursive case
    //pehla check kr leta hu ki key ke barabar h ya nhi phir remainign part me recursion chek kr lega
    if(arr[0] == key) return true;
    else{
        bool remainingPart = search(arr + 1, size - 1, key);
        return remainingPart;
        //arr + 1 kyuki pehla wala toh check ho gya na dusre element per jayenge 
        // toh size bhi kam hote rhega
    }

}




int main() {

     int arr[] = {3, 5, 1, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    bool found = search(arr, size, key);

    if (found) {
        cout << "Key is found" << endl;
    } else {
        cout << "Key is not found" << endl;
    }

    return 0;

}

//T.C -> O(n)