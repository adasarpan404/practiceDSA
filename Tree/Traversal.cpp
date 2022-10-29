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

vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> level;
        for (int i = 0; i < n; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            level.push_back(node->node);
        }
        ans.push_back(level);
    }
    return ans;
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
    cout << "\nLevel Order of Binary Tree \n";
    vector<vector<int>> ans = levelOrder(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}