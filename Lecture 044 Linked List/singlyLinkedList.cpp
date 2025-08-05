#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL; //next will point null
    }

    //destructor
    ~Node() {
        //memory free
        int value = this->data;
        if(this->next == NULL){
            delete next;
            this->next = NULL;
        }
        cout << "deleted " << this->data <<endl;
    }

    
};

//now insert at head

void insertAtHead(Node* &head, int d){ //
        //create new node
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp; 
}

//to insert at tail

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void print(Node* &head){
    Node *temp = head; //abhi temp head ko point kr rha h

    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPos(Node* &head, Node* &tail,  int position, int data){
    //insert at fisrt positon
    //if to insert at1st positon cozs we are starting from head 1stpos
    //so we cant add at 1stpos so called head
    if(position == 1){
        //call insert at head
        insertAtHead(head,data);
        return;
    }


    //insert at middle
    //sabsepehle node ko traverse krna h
    //create a node of temp which points to head
    Node *temp = head;
    int  currPos = 1;

    // for traversing
    while(currPos < position -1) {//(n-1)th position
        temp = temp-> next; //temp kop aage badha do
        currPos++;
    }

    //insert at last so update tail
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    //creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next= nodeToInsert;


}


//deletion of middle node
void deletion(int position, Node* &head){
    //delete first  node

    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        //free memory 
        delete temp;
        return;
    }

    //deleting middle nodeand last node
    //create node for traversing
    Node* currNode =  head;
    Node* prevNode = NULL;

    int currpos  = 1;
    while(currpos < position  && currNode != NULL){
        prevNode = currNode; //kyuki previous abhi  null  h 
        currNode =  currNode->next;
        currpos++;
    }


    prevNode->next = currNode->next;
    currNode->next = NULL;
    delete currNode;
    
}

int main() {
    Node * node1 = new Node(10);
    // cout << node1-> data <<endl;
    // cout << node1-> next <<endl;

    //head pointed to node
    Node * head = node1; 
    Node *tail = node1;
    //pehle 10 dala
    print(head); 
    // print(tail);
    insertAtHead(head, 12); 
    // insertAtTail(tail, 12);
    // print(tail); //uske bad 12 dala

    //again if i put 15 on head
    insertAtHead(head, 15);
    // insertAtTail(tail, 15);
    print(head); //then 15
    // print(tail);

    // insert At Position 3rd between 12 and 15
    insertAtPos(head, tail, 4, 22);
    print(head);

    //deletion

    deletion(2,head);
    print(head);
}