#include <iostream>
using namespace std;


void sayDigit(int num, string arr[]){

    //base case
    if(num == 0) return ;

    //processing part
    int digit = num % 10;
    num = num / 10;

 //recursive call
    sayDigit(num, arr);
    cout << arr[digit] << " ";
    
}

int main(){

    string arr[10] = {"zero", "one", "two", 
        " three", "four", "five","six", "seven", "eight", "nine"};

    int n;
    cin >> n;
        cout << endl <<endl;
        sayDigit(n, arr);
        cout << endl <<endl;
}