#include <iostream>
#include <stack>
using namespace std;

class Stack {
    public :
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout <<"stack is overflow" <<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "stack is underflow" <<endl;
        }
    }

    int peek(){
        if(top >= 0){
           return  arr[top]; 
        }else{
            cout << "stack is empty" <<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        else false;
    }

};

int main(){
    Stack st(5);
    st.push(2);
    st.push(4);
    st.push(5);
    st.push(9);
    

    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;
}