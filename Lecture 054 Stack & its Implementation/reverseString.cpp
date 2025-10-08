#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str = "karanjeet";
    stack<char> s;
    for(int i =0; i < str.length(); i++){
        char ch = str[i]; //stack mein char push krna h
        s.push(str[i]);
    }


    string ans = "";

    while(!s.empty()){ //stack empty nhi h toh ans mein char push krte jaenge
        char ch = s.top(); //top element ko ans mein push krte jaenge
        ans.push_back(ch); //ans mein char push krte jaenge
        s.pop(); //top element ko pop krte jaenge
    }
    cout << ans << endl;
}