#include <iostream>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++ ){
        count++;
    }
    return count;
}

int main(){
    //Intro about character array
    char name[20];

    cout<<"Enter Your Name: " ;
    cin >> name;
   // name[2] = '\0';  //mene 2nd index per null character dal diya 
    //aage print nhi hoga
    cout << "Your Name is: " << name <<endl;

    int len = getLength(name);
    cout << "Length of Character " <<len <<endl;

    reverse(name, len);
    cout<<"Reverse Name " <<name;
}