#include <iostream>
using namespace std;

int power(int n){

    if(n == 0) return 1; //base case

    int smallerproblem = power(n - 1); //recurisve call
    int biggerproblem = 2 * smallerproblem; //recursive relation

    return biggerproblem ;
}

int main(){

    int num;
    cout << "Write the num -> ";
    cin >> num;

    int ans =  power(num);
    cout << ans;

}