#include <iostream>
#include <queue>
using namespace std;


class Node
{
    public:
    Node *left;
    Node *right;
    int data;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);           

    q.push(NULL); //pehla root ke baad ek separator daal diya 

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // enter using separator for level order traversal
        if (temp == NULL) // purana level complete ho gya
        {                 
            cout << endl; // enter mar do 
            if (!q.empty())
            {                 // queue still has nodes for next level
                q.push(NULL); // Marker for next level
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left) //agar temp ka left child exist karta hai to usko queue me daal do
            {
                q.push(temp->left);
            }
            if (temp->right) 
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* insertBst(Node *root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if( d > root->data){
        root->right = insertBst(root->right, d);
    }
    else{
        root->left = insertBst(root->left, d);
    }

    return root;
}

Node* minVal(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}


Node* maxVal(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteNode(Node* root, int val){
    //base case
    if(root == NULL) return NULL;

    if(root->data == val){
        //1st cond -> no child(leaf node)
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //2nd cond -> one child
        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

         //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }


        //3rd cond -> two child
        if(root->left != NULL && root->right != NULL){

            //right subtree
            int mini = minVal(root->right)->data;
            root->data= mini;
            root->right = deleteNode(root->right, mini);
            return root;
        }

    }

    else if(val > root->data ){
        //right ki call
        root->right = deleteNode(root->right, val);
        return root;
    }
    else{
        //left call
        root->left = deleteNode(root->left, val);
        return root;
    }
}


void takeInput(Node* &root){
    int data;
    cin >> data;
    
    while(data != -1){
        root = insertBst(root, data);
        cin >> data;
    }
}


int main ()
{
    Node *root = NULL;
    cout << "Enter the data for the root node: "<<endl;
    takeInput(root);

    cout << "Level order traversal of the BST is: " << endl;
    levelOrderTraversal(root);


    cout << "Minimum value in the BST is: " << minVal(root)->data << endl;
    cout << "Maximum value in the BST is: " << maxVal(root)->data << endl;


    root = deleteNode(root, 10);

    levelOrderTraversal(root);
    cout << "inorder traversal  " <<endl;
    inOrder(root);

    return 0;
    

}