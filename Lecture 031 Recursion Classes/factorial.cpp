#include <iostream>
using namespace std;


int factorial(int n){
    
    if(n == 0) return 1;

    int chotti = factorial(n-1);
    int badi = n * chotti;

    return badi;
}

int main(){

    int n;
    cout << "Write the Number -> " ;
    cin >> n;

    int result = factorial(n);

    cout << "the factorial of " <<n << " is -> " <<result;
}