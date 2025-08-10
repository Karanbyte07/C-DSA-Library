#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

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

void print(Node *head)
{
  Node *temp = head;
  // cout << "1" <<endl;
  while (temp != NULL)
  {
    cout << temp->data <<" ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node* &head, int data){
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int data){
  Node* temp = new Node(data);
  tail->next = temp;
  tail = tail->next;
}

void position(Node* &head, Node* &tail, int position, int data){
  if(position == 1){
    insertAtHead(head, data);
    return;
  }
  
  int currentPos = 1;
  Node* temp = head;

  while(currentPos < position -1){
    temp = temp->next;
    currentPos++;
  }

  Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next= nodeToInsert;

    if(temp->next == NULL){
      insertAtTail(tail,data);
      return;
    }
}

void deletion(Node* &head, Node* &tail, int position, int data){
  Node* temp = head;
  temp->next = currNext;

}

int main()
{
  Node *naya = new Node(10);
  Node* head = naya;
  Node* tail = naya;
  print(head);

  insertAtHead(head, 20);
  print(head);

  insertAtTail(tail, 100);
  print(head);

  position(head,tail,4,101);
  print(head);
  return 0;
}