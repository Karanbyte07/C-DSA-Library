#include <iostream>
using namespace std;

  // To print patterns
  // For Square Matrix always row<=n and col<=n
  // i = row, j = col
  // Pattern 1
  //****
  //****
  //****
  //****
  /*
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){

      int j = 1;
      while(j<=n) {
        cout<< "*" ;

        j = j +1 ;
      }
      cout << endl;
      i = i +1 ;
    }
}
*/

  // Pattern 2
  // 1234
  // 1234
  // 1234
  // 1234
  /*
    int n;
    cin>>n;
    int i = 1;
    while (i<=n) {

      int j = 1;
      while (j<=n) {
        cout<< j ;
        j = j + 1;
      }
      cout<< endl;
      i = i +1;
    }
}
*/

  // Pattern 3
  // 321
  // 321
  // 321
  /*
  int n;
  cin>>n;

  int row = 1;
  while (row<=n) {

    int col = 1;
    while (col<=n) {
      cout<< n-col+1 ;

      col = col +1;

    }
    cout <<endl;
    row = row +1;
  }
}
*/

  // Pattern 4
  // 123
  // 456
  // 789
  /*
      int n;
      cin >> n;

      int row  = 1;
     int count = 1;

      while (row<=n) {
        int col = 1;
        while(col<=n) {
          cout<< count << " " ;
          count = count + 1;
          col = col +1;
        }
        cout<<endl;
        row = row +1;
      }
  }
   */

  // Pattern 5
  //*
  //**
  //**

  /*
  int n;
  cin >> n;

  int row = 1;
  while (row <= n) {

    int col = 1;
    while (col <= row) {
      cout << "* ";
      col = col + 1;
    }
    cout << endl;
    row = row + 1;
  }
  }

*/

  // Pattern 6
  // 1
  // 22
  // 333

  /*
  int n;
  cin >>n;

  int row = 1;
  while (row<=n){
    int col = 1;

    while (col<=row){
      cout << row <<" ";
      col = col +1;
    }
    cout <<endl;
    row = row +1;
  }
  }
*/
  // Pattern 7
  // 1
  // 23
  // 456
  /*
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n) {

      int col = 1;

      while (col <= row) {
        cout << count << " ";
        count = count + 1;
        col = col + 1;
      }
      cout << endl;
      row = row + 1;
    }
  }
  */

  // Pattern 8
  // 1
  // 23
  // 345

  /*
  int n;
  cin>>n;
  int row = 1;
  int count;

  while (row<=n){
    count = row;
    int col = 1;
    while(col<=row){
      cout<<count << " ";
      count = count +1;
      col = col + 1;
    }
    cout <<endl;
    row = row +1;
  }
}
*/

  // Pattern 9
  // ABC
  // ABC
  // ABC

  /*
  int n;
  cin>>n;
  int row =1;

  while(row<=n){
    int col = 1;
    char ch = 'A';
    while(col<=n) {
      cout<<ch<< " ";
      ch = ch + 1;
      col = col + 1;
    }
    cout<< endl;
    row = row +1;
  }
}
*/

  // Pattern 10
  // AAA
  // BBB
  // CCC
  /*
  int n;
  cin >> n;

  int row = 1;

  while (row <= n) {

    int col = 1;
    char ch = 'A' + row - 1;

    while (col <= n) {
      cout << ch << " ";
      col = col + 1;
    }

    cout << endl;
    row = row + 1;
  }
}
*/

  // Pattern 11
  // ABC
  // DEF
  // GHI

  /*
  int n;
  cin >> n;

  int row = 1;
  char value = 'A';
  while (row <= n) {

    int col = 1;

    while (col <= n) {

      cout << value << " ";
      value = value + 1;
      col = col + 1;
    }
    cout << endl;
    row = row + 1;
  }
}
*/

  // Pattern 12
  // ABC
  // BCD
  // CDE

  /*
  int n;
  cin>>n;

  int row = 1;

  while(row<=n){

    int col = 1;
    char ch = 'A' + row + col - 2;
    while(col<=n){
      cout<< ch <<" ";
      ch = ch + 1;
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;
  }
}
*/

  // Pattern 13
  // A
  // BB
  // CCC

  /*
  int n;
  cin >> n;
  int row = 1;

  while (row <= n) {

    int col = 1;
    char ch = 'A' + row - 1;

    while (col <= row) {

      cout << ch << " ";
      col = col + 1;
    }
    cout << endl;
    row = row + 1;
  }
}
*/

  // Pattern 14
  // A
  // BC
  // CDE

  /*
  int n;
  cin>>n;

  int row = 1;

  while(row<=n){

    int col = 1;

    char ch = 'A' + row - 1;

    while(col<=row){
      cout<<ch<<" ";
      ch = ch + 1;
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;
  }
}
*/

  // Pattern 15
  // C
  // BC
  // ABC

  /*
  int n;
  cin >> n;
  int row = 1;

  while (row <= n) {
    int col = 1;
    char ch = 'A' + n - row;


    while (col <= row) {
      cout << ch << " ";
      ch = ch + 1;
      col = col + 1;
    }
    cout << endl;
    row = row + 1;
  }
}
*/

  // Pattern 16
  //  *
  // **
  //***

  /*
    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {

      //Space Print kr liya
      int space = n - row;
      while (space) {
        cout << " ";
        space = space - 1;
      }

      // Star Print kr liya

      int col = 1;
      while (col<=row) {
        cout << "*";
        col = col + 1;
      }
      cout << endl;
      row = row + 1;
    }
  }
  */

  // Pattern 17

  // ***
  // **
  // *

  /*
   int n;
   cin >> n;

   int row = 1;
   while (row <= n){

     int col = n - row + 1;
     while(col){
       cout<<"*";
       col = col - 1;
     }

     cout<< endl;
     row = row +1;

   }

 }
 */

  // Pattern 18
  // ***
  //  **
  //   *

  /*
  int n;
  cin>>n;

  int row = 1;
  while (row<=n) {

    int space = row -1;
    while(space) {
      cout<< " ";
      space = space - 1;
    }

    int col = n - row + 1;
    while(col){
      cout<< "*";
      col = col - 1;
    }
    cout <<endl;
    row = row + 1;
  }
}
*/
  // Pattern 19
  // 111
  // 22
  //  3
  /*
   int n;
   cin>> n;

   int row = 1;
   while(row<=n) {

     int space = row - 1;
     while(space) {
       cout << " ";
       space = space - 1;
     }
     int col = 1;
     while(col<=n-row +1) {
       cout<< row;
       col = col + 1;
     }
     cout<<endl;
     row = row + 1;
   }
 }
 */
  // Pattern 20
  //  1
  // 22
  // 333

  /*
  int n;
  cin>>n;
  int row = 1;
  while(row<=n) {
    int space = n - row;
    while(space) {
      cout<< " ";
      space = space - 1;
    }

    int col = 1;
    while(col<=row) {
      cout<<row;
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;
  }

}

*/

  // Pattern 21

  /*
  int n;
  cin >> n;

  int row = 1;
  while (row <= n) {

    int space = row - 1;
    int col = row;
    while (space) {
      cout<< " ";
      space = space - 1;
    }
    while (col<=n){
      cout<<col;
      col = col + 1;
    }
    cout <<endl;
    row = row + 1;
  }
}
*/

 //Pattern 22
/*
  int n;
  cin>>n;

  int row = 1;
  int count = 1;
  while(row <=n ){

    int space = n- row;
    int col = 1;
    while(space --){
      cout<<" ";
    }
    while(col<=row){
      cout<<count;
      count = count + 1;
      col = col + 1;
    }
    cout<<endl;
    row = row + 1;
  }
}
*/
  // Pattern 23
  /*
 int n;
 cin>>n;

  int row = 1;
  while(row<=n) {

    int space = n - row;
    while(space --) {
      cout<< " ";
    }


    int col = 1;
    while(col<=row){
      cout<<col;
      col = col + 1;
    }



    int start = row - 1;
    while(start){
      cout<<start;
      start = start - 1;
    }

    cout<<endl;
    row = row + 1;
  }
}
*/



// Pattern 24

// 123321
// 12**21
// 1****1

/*
int main(){
  int n;
  cin>>n;


  //traingle 1
  int row = 1;
  while(row<=n){

    int col = 1;
    while(col<= n-row +1) {
      cout << col;
      col = col + 1;
    }



//triangle 2
    int star = row - 1;
    while(star --){
      cout<< "*" ;
    }

// triangle 3
    int star2 = row-1;
    while(star2 --){
      cout<< "*" ;
    }


// triangle 4

    int col2 = 1;
    while(col2<= n-row +1){
      cout<< n-row-col2+2;
      col2 = col2 + 1;
    }


    cout << endl;
    row = row + 1;

  }



}
*/