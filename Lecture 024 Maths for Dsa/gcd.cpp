#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2){
    if(num1 == 0){
        return num2;
    }

    if(num2 == 0){
        return num1;
    }

    while(num1 != num2){
        if(num1 > num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
    return num1;
}

int main(){

    int num1, num2;
    cout << "Enter the first Number -> " ;
    cin >> num1;
    cout << "Enter the second Number -> " ;
    cin >> num2;

    int ans = gcd(num1, num2);

    cout << "The GCD of " <<num1 << " & " <<num2 << " is " <<ans <<endl;
    return 0;



}