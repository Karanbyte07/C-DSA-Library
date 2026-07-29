#include <iostream>
#include <queue>
using namespace std;

// Definition of a binary tree node
class node
{
public:
    int data;    // Value stored in the node
    node *left;  // Pointer to the left child
    node *right; // Pointer to the right child

    // Constructor to initialize node with data and null children
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build a binary tree recursively from user input
// Returns the root of the constructed tree
node *buildTree(node *root)
{
    cout << "Enter the data for the node: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    // Base case: if input is -1, this position is NULL (no node)
    if (data == -1)
    {
        return NULL;
    }

    // Recursively build the left subtree
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    // Recursively build the right subtree
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// level order traversal

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);           

    q.push(NULL); //pehla root ke baad ek separator daal diya 

    while (!q.empty())
    {
        node *temp = q.front();
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

// Inorder Traversal

 

void preOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " "; // N
    preOrder(root->left);      // L
    preOrder(root->right);     // R
}

void inOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);      // L
    postOrder(root->right);     // R
    cout << root->data << " "; // N
}

//level order traversal se tree ko print karna
void buildFromLevelOrder(node *&root){
    queue<node*> q;
    cout << "Enter data for root node: " << endl;
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1) { //agar null nahi hai to hi node banao
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    // Pointer to the root of the binary tree
    node *root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // Creating a tree from user input
    root = buildTree(root);

    // Perform level order traversal
    cout << "Level Order Traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: " << endl;
    inOrder(root);
    cout << endl << endl;

    cout << "Preorder Traversal: " << endl;
    preOrder(root);
    cout << endl << endl;

    cout << "Postorder Traversal: " << endl;
    postOrder(root);


    // level order se tree build karna
   // buildFromLevelOrder(root);
    //levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    return 0;
}