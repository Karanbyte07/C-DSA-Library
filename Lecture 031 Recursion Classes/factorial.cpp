#include <iostream>
using namespace std;


int factorial(int n){
    
    if(n == 0) return 1; //base case

    return n * factorial(n-1); //recursive call
}

int main(){

    int n;
    cout << "Write the Number -> " ;
    cin >> n;

    int result = factorial(n);

    cout << "the factorial of " <<n << " is -> " <<result;
}

//T.C -> O(n)