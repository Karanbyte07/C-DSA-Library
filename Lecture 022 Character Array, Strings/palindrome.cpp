#include <iostream>
using namespace std;


//Function to convert uppercase into lowercase
char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

//Function to ignore alphanumeric 
bool isAlphaNumeric(char ch){
    if((ch>= 'a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z') || (ch>= '0' && ch<= '9')){
        return false;
    }
}

//Function to get the length of character array
int getLength(char ch[]) {
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        count++;
    }
    return count;
}


bool checkPalindrome(char a[], int n) {
    int start = 0, end = n - 1;
    while (start <= end) {
       /*
        if(!isAlphaNumeric(a[start])){
            start++; // Move forward if start is not alphanumeric
        }
        else if(!isAlphaNumeric(a[end])){
            end--; //agar end alphanumeric nhi h toh move backward
        }
            
        */
        //can be written as also
        while (start < end && !isAlphaNumeric(a[start])) start++;
        while (start < end && !isAlphaNumeric(a[end])) end--;

        if (toLowercase(a[start]) != toLowercase(a[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char ch[20];
    cout << "Enter characters: ";
    cin >> ch;  
    int len = getLength(ch);  // Get the length after input

    
    cout << "Palindrome or not: " << (checkPalindrome(ch, len) ? "Yes" : "No") << endl;

    return 0;
}
