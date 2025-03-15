#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
vector<int> arr1 = {1, 1, 2, 3, 3, 4, 5, 5, 6};

    auto it =unique(arr1.begin(), arr1.end());

    for (int num : arr1) {cout << num << " " <<endl;   // this Modified array (not resized)
    }
	cout << " Modified array";
    cout <<endl;

    arr1.erase(it, arr1.end()); 

	 cout << "Now erase the unwanted duplicates" <<endl;

    for (int num : arr1) {
        cout << num << " "; 
		 
    }
	cout << "Final unique array";
    return 0;
}
