#include <iostream>
using namespace std;
//continue 
/*

int main(){


  for(int i=0; i<5; i++){
    cout<<"hey"<<endl;
    cout<<"hello"<<endl;
    continue; 
    //skips the rest of the loop and goes to the next iteration
    cout<<"reply de do"<<endl;
  }
}
*/

/*

//fibonacci series

  int n = 10;
  int a = 0, b = 1;
  cout << a << " " << b << " ";

  for (int i = 1; i <= n; i++) {
    int nextNumber = a + b;
    cout << nextNumber << " ";
    a = b;
    b = nextNumber;
  }


*/

/*
//for prime number
 
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "Not Prime" << endl;
      return 0; // return 0 if not prime
    } 
  }
  cout << "prime" << endl; // print prime if loop completes
  return 0;
}
*/



//operators 

/*




  int a=4;
  int b=6;
cout<<"Bitwise Operators " <<endl <<endl;
  cout<<" a&b "<<(a&b)<<endl;
  cout<<" a|b "<<(a|b)<<endl;
  cout<<" ~a "   <<~a <<endl;
  cout<<" a^b "<<(a^b)<<endl <<endl;


  //left and right shifts

  cout<<"Shifts"<<endl <<endl;
  cout<<(17>>1)<<endl;
  cout<<(17>>2)<<endl;
  cout<<(19<<1)<<endl;
  cout<<(21<<2)<<endl <<endl;


  //increment and decrement operators

cout<<"increment & decrement"<<endl <<endl;
  int i = 7;

  cout<<(++i)<<endl;
  //8 
  cout<<(i++)<<endl;
  //8, i=9
  cout<<(i--)<<endl;
  //9, i=8
  cout<<(--i)<<endl <<endl;
  //7, i =7





*/


//For loops
/*
int main() {

  //Counting from 1 to n

  int n;
  cin>>n;

  cout<<"Enter the value of n"<<endl;
  int i = 1;
  for(; ;){
    if(i<=n){
      cout<<i<<endl;
      i++;
    }
    else{
      break;
    }
  }
  */

  /*

  for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
    cout<<a<<" "<<b<<" "<<c<<endl;
  }


  int n;
  cin>>n;
  int sum = 0;
  for(int i=1; i<=n; i++){
    sum+=i;
  }
  cout<<sum<<endl;
}
*/


