#include <iostream>
using namespace std;

int main(){
   /*
    int arr[5] = {1, 2, 3, 4,5};
    char ch[6] = "abcde";

    cout << arr <<endl;
    cout << ch <<endl;

    //if i declare a pointer character then it will print entire string not address

    char *c = &ch[0];
    //prints entire string

    cout << c <<endl;
*/
    //jab tak null character nhi milega tab tak garbage value print hoga

    char temp = 'k';
    char *p = &temp;

    cout << p <<endl;

    











    return 0;

}
