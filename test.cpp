#include<iostream>
using namespace std;


int main() {
	// Write your code here
	int n = 0;
	int evenNum;
    int oddNum;
    cout << "Enter the digits:- ";
	cin >> n;

	while(n > 0){
		int digit = n % 10; //To find the digits from last
		n = n / 10; // remove used digit that is last digit

		//To check even
		if(digit % 2 == 0){
            evenNum = digit;
			cout <<"Even numbers " <<evenNum <<endl;
            
		}
		else {
            oddNum = digit;
			cout <<"Odd Numbers "<< oddNum <<endl;
		}
	}
   
	
}
