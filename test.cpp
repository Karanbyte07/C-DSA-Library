#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
  ~Node(){
    int val = this->data;
    if(next != NULL){
      this->prev = NULL;
      this->next = NULL;
    }
    cout << "memory free for" << this->data <<endl;
  }
};

void insertAtHead(Node* &head, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  head->prev = temp;
  head = temp;
   temp->prev = NULL;
}

void insertAtTail(Node* &tail, int d){
  Node *temp = new Node(d);
  tail->next = temp;
  temp->prev =  tail;
  tail = temp;
  temp->next = NULL;
}

void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertatpos(Node* &head,Node* &tail, int pos, int d ){
  Node* temp = head;
  int cnt = 1;
  
  while(cnt < pos-1){
    temp = temp->next;
    cnt++;
  }

  if(pos == 1){
    insertAtHead(head,d);
    return ;
  }

  Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

  if(temp->next == NULL){
    insertAtTail(tail,d);
    return;
  }

}

void deletion(Node* &head, int position){

  if(position == 1){
  Node* temp = head;
  temp->next->prev = NULL;
  head =  temp->next;
  temp->next = NULL;
  
  delete temp; 
  }

  Node* curr = head;
  Node* prev = NULL;
  int cnt = 1;

  
  
 
}
int main()
{
  Node* head = new Node(656);

  Node* tail = head;
  print(head);

  insertAtHead(head, 15);
  print(head);

  insertAtTail(tail,205);
  print(head);

  insertatpos(head, tail, 3, 890);
  print(head);

  deletion(head,1);
  print(head);

}