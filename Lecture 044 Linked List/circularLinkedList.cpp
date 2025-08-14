#include <iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int val = this->data;
        while (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for " << val <<endl;
    }
};

void insert(Node* &tail, int element, int d){
    //list is empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;//tail is pointing to new node 
        newNode->next = newNode; //selp pointing for circular
    }

    else{
        //Not empty
        //assuming element is present 
        Node* curr = tail; //currently poining to tail

        while(curr != tail){
            curr = curr->next; //tabtak current ko aage badhate raho
        }
        //ab element founded and curr is represeentng that elment wala node
        //now conditions
        Node* temp = new Node(d); //1- create a new node
        temp->next = curr->next; //pointing to self current node means starting node
        curr->next = temp;
    }
}

void deletion(Node* &tail, int value){
    // case 1 - if list is empty 
    if(tail == NULL){
        cout << "list is empty, try again!" <<endl;
        return ;
    }
    else{
        //non empty
        //assuming that the value is present in list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){ //jab tak value ke barabar nhi hoti
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        //for single node
        if(curr == prev){
            tail = NULL;
        }
        //if >=2 node in the list 
        else if(tail == curr){
            tail = prev;
        }
        curr->next =  NULL;
        delete curr;

    }
}


void print ( Node* &tail){
    Node* temp = tail; //new node 
    if(tail == NULL){
        cout << " list is empty" <<endl;
        return;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout << endl;
}



int main(){
    Node* tail = NULL;

    //empty list case
    insert(tail,1,34);
    print(tail);

    insert(tail, 34, 89);
    print(tail);

    insert(tail, 34, 90); //us element ke bad 90 add kr do
    print(tail);
    insert(tail, 90, 104);
    print(tail);

    deletion(tail, 89);
    print(tail);
}