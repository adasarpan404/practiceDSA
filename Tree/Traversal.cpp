#include <bits/stdc++.h>

using namespace std;

struct Node
{
    /* data */
    int node;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        node = val;
        left = right = NULL;
    }
};

void preorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->node << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->node << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->node << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->left->right->right->left = new Node(10);
    root->left->left->left = new Node(11);
    root->left->left->right = new Node(12);
    root->right->right->right = new Node(13);
    cout << "Pre Order of Binary Tree \n";
    preorder(root);
    cout << "\nIn Order of Binary Tree \n";
    inorder(root);
    cout << "\nPost Order of Binary Tree \n";
    postorder(root);
    return 0;
}