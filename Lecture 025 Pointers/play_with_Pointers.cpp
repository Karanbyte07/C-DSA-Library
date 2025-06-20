#include <iostream>
using namespace std;

int main(){
    //bad practices
    //pointer to int is created and pointing to some garbage address
   // int *ptr;
   // cout << *ptr <<endl;

   /*
   int i = 5;

   int *q = &i;
   cout << q << endl;
   cout << *q << endl;

   int *p = 0;
   p = &i;
   cout << p <<endl;
   cout << *p <<endl;

   */

   //copying the another pointer
   /*
    int num = 5;
   int *p1 = &num;
   cout << "before: " << num <<endl;
   (*p1)++;
   cout << "after: "<< num <<endl;

   int *q = p1;
   cout << p1 << " - " <<q <<endl;

   cout << *p1 << " - " <<*q <<endl;

*/

//pointer arithemetic adddition

/*
int i = 3;
int *t = &i;
//cout << (*t)++ <<endl;
*t = *t + 1;
cout << *t <<endl;
cout << "before t: " <<t <<endl;
t = t + 1;
cout << "after t: " <<t <<endl;

*/


float f = 10.5;
float p = 2.5;
float* ptr = &f;

cout << *ptr <<ptr << " " << f << " " << p;
cout << endl;

int temp[10];
cout<< sizeof(temp) <<endl ;

int *k = &temp[0];
cout << sizeof(k);

return 0;
}