#include <iostream>
using namespace std;

void reverseStr(string &str, int start, int end){
    //base case 
    if(start > end) return ;
    swap(str[start], str[end]);
    start++;
    end--;

    //recursive call
    reverseStr(str, start, end);
}

//using single variable

void reverseStr(string &str, int start){
    //base case 
    int n = str.length();
    if(start > n - start - 1) return ;
    swap(str[start], str[n - start - 1]);

    //recursive call
    reverseStr(str, start + 1);
}
int main(){
    string str = "abcde";
    reverseStr(str, 0, str.length() - 1);
    cout << str <<endl;
}