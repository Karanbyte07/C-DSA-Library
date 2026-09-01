#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *binaryTree(node *root)
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
    root->left = binaryTree(root->left);

    // Recursively build the right subtree
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = binaryTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            cout << temp->data;
        }
    }
}

void inOrder(node *root){
    //base case
    if(root == NULL) return;

    //left
    inOrder(root->left);
    //node print
}

int main()
{
    node *root = NULL;
    root = binaryTree(root);

    cout << "level order traversal" <<endl;
    levelOrderTraversal(root);

}
