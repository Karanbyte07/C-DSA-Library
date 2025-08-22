#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL; // next will point null
    }
    // destructor
    ~Node()
    {
        // memory free
        int value = this->data;
        if (this->next == NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "deleted " << this->data << endl;
    }
};
void insertAtHead(Node *&head, int d)
{ //
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head; // abhi temp head ko point kr rha h
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPos(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        // call insert at head
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int currPos = 1;
    // for traversing
    while (currPos < position - 1)
    {                      //(n-1)th position
        temp = temp->next; // temp kop aage badha do
        currPos++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Approach - 1funciton to check it has loop or not
/*
bool detectLoop(Node* head){
    //for empty list
    if(head == NULL){
        return false;
    }

    //create a map with key node* and value type bool
    map<Node*, bool> visited;

    //traverse
    Node* temp =  head;
    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true){
            cout << "Present on Element " << temp->data <<endl;
            return true;
        }

        //mark visited true
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
*/
/*
bool floydsDetectLoop(Node*  head){
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(fast == slow) {
            cout << "cycle is present at " <<fast->data <<endl;
            return true;
        }
    }
    return false;
}
*/

// Function to detect loop and return the intersection node
Node *floydsDetectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; // another way

        if (slow == fast)
        {
            return slow; // intersection node
        }
    }
    return NULL; // no cycle
}

Node *getStartingNode(Node *head)
{
    // get intersection first
    Node *intersection = floydsDetectLoop(head);
    Node *slow = head;
    Node *fast = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{
    Node *startingNode = getStartingNode(head);
    Node *temp = startingNode;

    while (temp->next != startingNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtPos(head, tail, 4, 22);
    print(head);
    tail->next = head->next;
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    if (floydsDetectLoop(head))
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }

    Node *loop = getStartingNode(head);
    cout << "Loop starts from " << loop->data << endl;

    removeLoop(head);
    print(head);


}