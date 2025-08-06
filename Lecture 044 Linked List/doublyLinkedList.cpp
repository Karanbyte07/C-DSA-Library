#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next; //created a node which point next
    Node* prev; // which points previous node

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL; //both points null at starting
        this->prev = NULL;
    }

    //destructor for deletion
    ~Node(){
        int value = this->data;
        if(next != NULL){
            this->prev = NULL;
            this->next = NULL;
        }
        cout << "Memory free for data " <<value <<endl;
    }
};

//function to print node
void print(Node* head){
    Node* temp = head; //created a node of temp which point to head
    while(temp != NULL) { //jab tak temp null nhi hota
        cout << temp->data <<" "; //temp ke data ko print kr do
        temp = temp->next; //temp ko aage badha do
    }
    cout << endl;
}

//function to get length of node
int getLength(Node* head){
    int len = 0;
    Node* temp = head; 
    while(temp != NULL) { 
        len++;
        temp = temp->next; 
    }
    return len;
}

//insert at head function
void insertAtHead(Node* &head, Node* &tail, int data){
    //if the list is empty
    if(head == NULL){
        Node* temp = new Node(data); //new node bna ke usi ko head kr denge
        head = temp; //aur head hi temp ko point krega 
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

//insert at tail function
void insertAtTail(Node* &tail,Node* &head, int data){
    //if the list is empty
    if(tail == NULL){
        Node* temp = new Node(data); 
        tail = temp; 
        head = temp;
    }
    else{
        Node *temp = new Node(data);
        tail->next = temp;
        tail->prev = tail;
        tail = temp;
    }

}

//insert at middle or any position
void insertAtPos(Node* &head, Node* &tail,int position, int data){
    Node *temp = head;
    int  currPos = 1;

    // for traversing
    while(currPos < position -1) {//(n-1)th position
        temp = temp-> next; //temp kop aage badha do
        currPos++;
    }

    //starting me
     if(position == 1){
        //call insert at head
        insertAtHead(head,tail,data);
        return;
    }

    //at middle
    //creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


    //insert at last so update tail
    if(temp->next == NULL){
        insertAtTail(tail,head,data);
        return;
    }

}

//deletion of  node
void deletion(int position, Node* &head){
    //delete first  node
    if(position == 1){
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp; //jo node ko delete krna tha use new node bana diay then delete it
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


    //deleting last and middle
    currNode->prev = NULL;
    prevNode->next= currNode->next;
    currNode->next = NULL;
    delete currNode;
    
}

int main(){
    Node* node1 = new Node(12); //createad a node1 with data 12
    Node* head = node1; //node 1 ke liye head bna diya
    Node* tail = node1;
    //if they are empty
    // Node* head = NULL;
    // Node* tail = NULL;

    cout << "Initial Node Elements: ",  print(head);
    cout  << "Initially length of node is: " <<getLength(head) <<endl;

    insertAtHead(head, tail, 15);
    print(head);

    insertAtTail(tail,head, 20);
    print(head);

    insertAtPos(head,tail,2,100);
    print(head);

    deletion(2,head);
    print(head);


    return 0;

}