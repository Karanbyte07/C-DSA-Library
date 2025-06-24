#include <iostream>
using namespace std;

  int fib( int target){
    int first = 0;
    int second = 1;

    if(target == 0) return first;
    if(target == 1) return second;


   for(int i = 2; i <= target; i++){
    int next = first + second;

    if(i == target){
      return next;
    }

    first = second;
    second = next;    
  }
  return target;
  
}

int main(){
    int target;
    cout << "At what index do you want to access? ";
    cin >> target;

   

    cout << "Value at index " <<" -> " << fib(target)    << endl;

    return 0;

  
  
  
}