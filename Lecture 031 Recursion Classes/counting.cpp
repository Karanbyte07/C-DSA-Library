#include <iostream>
using namespace std;


int print(int n){
    if(n == 0) return 1; //base case

    print(n-1); //recursive relation

    cout << n << " ";
    
}

int main(){

    int num;
    cout << "Write the num -> ";
    cin >> num;

    print(num);

}