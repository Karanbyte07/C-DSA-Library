#include <iostream>
#include <stack>
using namespace std;

//without stl using arr stack implemenation
class Stack   {
    public:
    //properties
    int *arr;
    int top;
    int size;

    //constructor (behaviour)
    Stack (int s){
        this -> size = s;
        arr = new int[size];
        top = -1;
    }

    //functions
    void push(int element){
        //firstly check is there any empty space
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else cout << "stack is overflow";
    }

    void pop() {
        //check first element is present
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int peek(){
        //check elment is in valid range
        if(top >= 0) return arr[top];
        else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(58);
    st.push(65);
    st.push(44);
    

   cout <<  st.peek() << endl;
   st.pop();
   cout << st.peek()<< endl;
   st.pop();
   cout << st.peek()<< endl;
    st.pop();   
    cout << st.peek()<< endl;
    st.pop();
    cout << st.peek()<< endl;
}

/*
int main(){
    stack <int> s;
    s.push(5);
    s.push(8);

    cout << "PRINTING TOP ELEMENT " << s.top() <<endl;

    if(s.empty()){
        cout<< "the stack is empty" <<endl;
    }else{
        cout<< "the stack is not empty" <<endl;

    }
}
*/
